.data
input: .asciiz "enter string but its length lessthan or equal 100\n"
output:.asciiz "the output is \n"
bl: .asciiz "\n"
string1: .space 100
string2: .space 100
.text
.globl main
main:
 #print input message 
  li $v0,4
  la $a0,input
  syscall 
  
  # take the input string from user
  la $a0,string1
  li $a1,100
  li $v0,8
  syscall 
  #make a new line
  li $v0,4
  la $a0,bl
  syscall
  #print the output message
  li $v0,4
  la $a0,output
  syscall 
  #intialize the argument for procedure
  la $a0,string2   #A
  la $a1,string1   #B
  jal  strcpy
  #print the string 2 that is copied from string 1
  li $v0,4
  la $a0,string2
  syscall 
  
  #to exit the program
  li $v0,10
  syscall 
  
 strcpy:
  addi $sp, $sp, -4     # adjust stack for 1 more item
  sw $s0, 0($sp)        # save $s0
  add $s0, $zero, $zero#i=0
  L1:
  add $t1, $s0, $a1     # address of y[i] in $t1
  lbu $t2, 0($t1)       # $t2 = y[i]
  add $t3, $s0, $a0     # address of x[i] in $t3
  sb $t2, 0($t3)	# x[i] = y[i]
  beq $t2, $zero, L2	# if y[i] == 0, go to L2
  addi $s0, $s0, 1	# i = i + 1
  j L1			# go to L1
L2:
 lw $s0, 0($sp)		# y[i] == 0: end of string.
 			# Restore old $s0
 addi $sp, $sp, 4	# pop 1 word off stack  
 jr $ra			# return
  
  
  
  
  
