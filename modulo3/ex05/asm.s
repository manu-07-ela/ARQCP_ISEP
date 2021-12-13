.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_sum

    vec_sum:
        movl $0, %eax
        movl $0, %esi
        movq num(%rip), %rcx
        movq ptrvec(%rip), %rdx

    sum:
        movl (%rdx), %esi
        addl %esi, %eax
        addq $4, %rdx

        loop sum

    end:
        ret    