.data
array:	.word	0 : 1000	# an array of word, for storing values.
size:	.word	5		# actual count of the elements in the array.
number_of_input:    .asciiz	"Input number of values to be sorted (0 < N < 1000): "
input_each_value:   .asciiz	"Input each value "
input_value:        .asciiz	"Input value#"
output:             .asciiz     "Sorted:"
newline:            .asciiz     "\n"
colonsp:	    .asciiz     ": "	# a colon string with space.
space:	            .asciiz     " "		# a space string.

	.text
	.globl	main
main:
  li	$v0, 4			# 4 = print_string syscall.
  la	$a0,number_of_input	# load ,number_of_input to argument register $a0.
  syscall			# issue a system call.

  li	$v0, 5			# 5 = read_int syscall.
  syscall			# issue a system call.
  la	$t0, size		# load address of size to $t0.
  sw	$v0, 0($t0)		# store returned value in $v0 to size.

  li	$v0, 4			# 4 = print_string syscall.
  la	$a0, input_each_value	# load input_each value to argument register $a0.
  syscall		        # issue a system call.
  li	$v0, 4			# 4 = print_string syscall.
  la	$a0, newline		# load newline to argument register $a0.
  syscall			# issue a system call.
  
   la	$t0, array		# load array to $t0. 
   lw	$t1, size		# load size to $t1.
   li	$t2, 0			# loop runner, starting from 0.
  
receive_values_loop:
	bge	$t2, $t1,receive_values_end        # while ($t2 < $t1).
	li	$v0, 4			# 4 = print_string syscall.
	la	$a0, input_value        # load input_value to argument register $a0.
	syscall				# issue a system call.
	li	$v0, 1			# 1 = print_int syscall.
	addi	$a0, $t2, 1		# load (runner + 1) to argument register $a0.
	syscall				# issue a system call.
	li	$v0, 4			# 4 = print_string syscall.
	la	$a0, colonsp		# load colonsp to argument register $a0.
	syscall				# issue a system call.

	li	$v0, 6		        # 6 = read_float syscall.
	syscall				# issue a system call.
	swc1	$f0, 0($t0)		# store returned value from syscall in the array.

	addi	$t0, $t0, 4		# increment array pointer by 4.
	addi	$t2, $t2, 1		# increment loop runner by 1.
	j	receive_values_loop	# jump back to the beginning of the loop.
receive_values_end:
	jal	print			# call print routine.
	
	la	$t0, array		# load array to $t0.
	lw	$t1, size		# load array size to $t1.
	li	$t2, 1			# loop runner, starting from 1.
sort_xloop:
	la	$t0, array		# load array to $t0.
	bge	$t2, $t1, sort_xloop_end	# while (t2 < $t1).
	move	$t3, $t2		# copy $t2 to $t3.
sort_iloop:
	la	$t0, array		# load array to $t0.
	mul	$t5, $t3, 4		# multiply $t3 with 4, and store in $t5
	add	$t0, $t0, $t5		# add the array address with $t5, which is the index multiplied with 4.
	ble	$t3, $zero, sort_iloop_end	# while (t3 > 0).
	lwc1	$f7, 0($t0)		# load array[$t3] to $t7.
	lwc1	$f6, -4($t0)		# load array[$t3 - 1] to $t6.
	c.le.s 	$f6, $f7 	        # while (array[$t3] < array[$t3 - 1]).
	bc1t    sort_iloop_end
	lwc1	$f4, 0($t0)
	swc1	$f6, 0($t0)
	swc1	$f4, -4($t0)
	addi	$t3, $t3, -1
	j	sort_iloop		# jump back to the beginning of the sort_iloop.
sort_iloop_end:
	addi	$t2, $t2, 1		# increment loop runner by 1.
	j	sort_xloop		# jump back to the beginning of the sort_xloop.
sort_xloop_end:
	li	$v0, 4			# 4 = print_string syscall.
	la	$a0, output	# load sorted_array_string to argument register $a0.
	syscall				# issue a system call.
	li	$v0, 4			# 4 = print_string syscall.
	la	$a0, newline		# load line to argument register $a0.
	syscall				# issue a system call.
	jal	print			# call print routine.
	
exit:
	li	$v0, 10			# 10 = exit syscall.
	syscall				# issue a system call.
		
print:
print_loop_prep:
	la	$t0, array
	lw	$t1, size
	li	$t2, 0
print_loop:
	bge	$t2, $t1, print_end
	lwc1    $f20,0($t0)
	li	$v0, 2
	mov.s	$f12, $f20
	syscall
	li	$v0, 4
	la	$a0, space
	syscall
	addi	$t0, $t0, 4
	addi	$t2, $t2, 1
	j	print_loop
print_end:
	li	$v0, 4
	la	$a0, newline
	syscall
	jr      $ra
