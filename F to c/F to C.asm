.data
input: .asciiz "enter the value \n"
output:.asciiz "the output is \n"
const9:  .float 9.0
const5:  .float 5.0
const32: .float 32.0
.text 
.globl main
main:
#print the input message 
 li $v0,4
 la $a0,input
 syscall
 #take the input float that is stored in $f0 from user
 li $v0,6
 syscall

 #print the output message
 li $v0,4
 la $a0,output
 syscall
 
 #intialize the argument for procedure
 mov.s $f12,$f0
 jal f2c
  
 #print the output float value
 li $v0,2
 mov.s $f12,$f0
 syscall
 
 #to exit 
 li $v0,10
 syscall 
 
 
 f2c:
  lwc1 $f16,const5 # $f16 = 5.0 (5.0 in memory)
  lwc1 $f18,const9 # $f18 = 9.0 (9.0 in memory)
  div.s $f16, $f16, $f18 # $f16 = 5.0 / 9.0
  lwc1 $f18, const32# $f18 = 32.0
  sub.s $f18, $f12, $f18 # $f18 = fahr – 32.0
  mul.s $f0, $f16, $f18 # $f0 = (5/9)*(fahr – 32.0)
  jr $ra # return
