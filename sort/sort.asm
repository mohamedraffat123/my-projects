.data
input: .asciiz "enter thre input in the range 0<M<1000\n"
input_loop: .asciiz "enter the input : \n"
output: .asciiz "the the sort is \n"
comma: .asciiz " " 
array: .word 0:1000
size: .word 5
.text
.globl main
main:
   #print input message 
  li $v0,4
  la $a0,input
  syscall
  # Read integer input to know the number of input 
  li $v0,5
  syscall 
  move $s2,$v0
  la $t0,size
  sw $v0,0($t0)
 
  #initialize an array
  la $s0,array
  la $t0,($s0)
  li $t1,0
  lw $t3,size
  #take an input from user and put it in array
  while_input:
  bge  $t1,$t3,exit
  #print the message input_loop
  li $v0,4
  la $a0,input_loop
  syscall
  #take the input from user and put it in array
  la $v0,5
  syscall
  sw $v0,0($t0)
  addi $t0,$t0,4
  addi $t1,$t1,1
  j while_input
  exit: 
  
  #intialize the argument for procedure
   la $a0,($s0)
   move $a1,$s2
   jal sort
   #print the output message
   li $v0,4
   la $a0,output
   syscall
   #intialize the print loop
   li $t0,0
   la $t1,($s0)
   lw $t2,size
   # print the values of the array after it will be sorted
   while_output:
   bge $t0,$t2,out
   lw $a0,0($t1)
   li $v0,1
   syscall 
   li $v0,4
   la $a0,comma
   syscall
   addi $t1,$t1,4
   addi $t0,$t0,1
   j while_output
   out:
  
  #to exit the program
  li $v0,10
  syscall
  
sort:
    addi $sp, $sp, -20  # make room on stack for 5 registers
    sw $ra, 16($sp)     # save $ra on stack
    sw $s3, 12($sp)     # save $s3 on stack
    sw $s2, 8($sp)      # save $s2 on stack
    sw $s1, 4($sp)      # save $s1 on stack
    sw $s0, 0($sp)      # save $s0 on stack

    move $s2, $a0       # save $a0 into $s2
    move $s3, $a1       # save $a1 into $s3
    li $s0, 0           # i = 0

    for1tst:
        slt $t0, $s0, $s3  # $t0 = 0 if $s0 ? $s3 (i ? n)
        beq $t0, $zero, exit1  # go to exit1 if $s0 ? $s3 (i ? n)

        addi $s1, $s0, -1  # j = i – 1

        for2tst:
            slti $t0, $s1, 0  # $t0 = 1 if $s1 < 0 (j < 0)
            bne $t0, $zero, exit2  # go to exit2 if $s1 < 0 (j < 0)

            sll $t1, $s1, 2  # $t1 = j * 4
            add $t2, $s2, $t1  # $t2 = v + (j * 4)
            lw $t3, 0($t2)  # $t3 = v[j]
            lw $t4, 4($t2)  # $t4 = v[j + 1]
            slt $t0, $t4, $t3  # $t0 = 0 if $t4 ? $t3
            beq $t0, $zero, exit2  # go to exit2 if $t4 ? $t3

            move $a0, $s2  # 1st param of swap is v (old $a0)
            move $a1, $s1  # 2nd param of swap is j
            jal swap  # call swap procedure

            addi $s1, $s1, -1  # j -= 1
            j for2tst  # jump to test of inner loop

        exit2:
            addi $s0, $s0, 1  # i += 1
            j for1tst  # jump to test of outer loop

    exit1:
        lw $s0, 0($sp)  # restore $s0 from stack
        lw $s1, 4($sp)  # restore $s1 from stack
        lw $s2, 8($sp)  # restore $s2 from stack
        lw $s3, 12($sp)  # restore $s3 from stack
        lw $ra, 16($sp)  # restore $ra from stack
        addi $sp, $sp, 20  # restore stack pointer
        jr $ra  # return to calling routine

swap:
    sll $t1, $a1, 2  # $t1 = k * 4
    add $t1, $a0, $t1  # $t1 = v + (k * 4)

    lw $t0, 0($t1)  # $t0 (temp) = v[k]
    lw $t2, 4($t1)  # $t2 = v[k+1]
    sw $t2, 0($t1)  # v[k] = $t2 (v[k+1])
    sw $t0, 4($t1)  # v[k+1] = $t0 (temp)

    jr $ra  # return to calling routine
