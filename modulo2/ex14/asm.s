.section .data
    base:
        .int 0
    height:
        .int 0
    .global base # int - l
	.global height # int - l

.section .text
    .global getArea

    getArea:
    
    movq $0, %rax
    movl base(%rip), %eax
    movl height(%rip), %ecx
    mull %ecx 
    movl $0, %edx
    movl $0, %ecx
    movl $2, %ecx
    divl %ecx
    
    ret


