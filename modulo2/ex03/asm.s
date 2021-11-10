.section .data
    .global op1
    .global op2
    .equ CONST, 15

.section .text
    .global sum_v2
    sum_v2:
        movl op1(%rip), %ecx
        movl op2(%rip), %eax
        movl $CONST, %ebx
        subl %ecx, %ebx
        movl $CONST, %edx
        subl %eax, %edx
        subl %edx, %ebx
        movl %ebx, %eax
        ret
        

