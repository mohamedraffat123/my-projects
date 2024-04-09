.data
input: .asciiz "enter the value\n"
output: .asciiz "the output is\n"
.text
.globl main

main:
  # Print prompt
  li $v0, 4
  la $a0, input
  syscall
  
  # Read input
  li $v0, 5
  syscall
  move $t0, $v0
  
  # Print result
  li $v0, 4
  la $a0, output
  syscall
  
  # Call factorial function
  move $a0,$t0
  jal fact
  
  # take the value from procedure to print it
  move $a0, $v0
  li $v0,0
  li $v0, 1
  syscall
  
  # Exit the program
  li $v0, 10
  syscall

fact:
  addi $sp, $sp, -8  # adjust stack for 2 items
  sw $ra, 4($sp)     # save the return address
  sw $a0, 0($sp)     # save the argument n
  slti $t0, $a0, 1  # Check if $a0 < 2
  beq $t0, $zero, L1  # If true, return 1
  addi $v0,$zero ,1  # return value 1
  addi $sp, $sp, 8   # pop 2 items off stack
  jr $ra            # return to caller
  
L1:
  addi $a0, $a0, -1  # Decrement $a0 by 1
  jal fact  # Recursive call
  lw $a0, 0($sp)      # return from jal: restore argument 
  lw $ra, 4($sp)      # restore the return address
  addi $sp, $sp, 8    # adjust stack pointer to pop 2 items
   mul $v0, $a0, $v0  # Multiply $a0 by result of recursive call
  jr $ra
