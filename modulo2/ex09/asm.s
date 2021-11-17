.section .data
    .global A # 8 bits char - b
	.global B # 16 bits short - w
    .global C # 32 bits int - l
    .global D # 32 bits int - l


.section .text
    .global sum_and_subtract

    # C + A - D + B
    # result in C, with 64 bits 
    sum_and_subtract:
    movq $0, %rax
    movl C(%rip), %eax
    movl $0, %ecx
    movsbl A(%rip), %ecx
    addl %ecx, %eax
    subl D(%rip), %eax
    movl $0, %ecx
    movswl B(%rip), %ecx
    addl %ecx, %eax
    movslq %eax, %rax
    ret 



