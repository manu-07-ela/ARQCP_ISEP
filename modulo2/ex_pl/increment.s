.section .data
g_number:	# variable declaration
	.int 

.global g_number # define g_number

.section .text
	.global increment
	increment:
		movl g_number(%rip), %eax
		addl $1, %eax 
		movl %eax, g_number(%rip)
		
		ret
	
