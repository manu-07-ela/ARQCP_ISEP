.section .text 
    .global inc_and_square

    inc_and_square:

        movq $0, %rax
        movl %esi, %eax
        addl $1, (%rdi)
        imull %esi
        ret