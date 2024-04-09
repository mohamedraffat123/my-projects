.data
input: .asciiz "Enter the value: "
output: .asciiz "The output is: "
.text
.globl  main
main:
    # Display the input message
    li $v0, 4
    la $a0, input
    syscall
    
    # Get the first input
    li $v0, 5
    syscall
    move $t0, $v0
    
     # Display the input message(1)
    li $v0, 4
    la $a0, input
    syscall
    
    # Get the second input
    li $v0, 5
    syscall
    move $t1, $v0
    
     # Display the input message(2)
    li $v0, 4
    la $a0, input
    syscall
    
    # Get the third input
    li $v0, 5
    syscall
    move $t2, $v0
    
     # Display the input message(3)
    li $v0, 4
    la $a0, input
    syscall
    
    # Get the fourth input
    li $v0, 5
    syscall
    move $t3, $v0
    
    # Display the output message
    li $v0, 4
    la $a0, output
    syscall
    
   move $a0,$t0
   move $a1,$t1
   move $a2,$t2
   move $a3,$t3
   
  jal leaf_example
   
    # Exit the program
    li $v0, 10
    syscall
    
    leaf_example:
    addi $sp, $sp, -4
    sw $s0, 0($sp)
    add $t0, $a0, $a1
    add $t1, $a2, $a3
    sub $s0, $t0, $t1
    
    # Display the output result
    li $v0, 1
    move $a0, $s0
    syscall
    
    lw $s0, 0($sp)
    addi $sp, $sp, 4
    jr $ra

