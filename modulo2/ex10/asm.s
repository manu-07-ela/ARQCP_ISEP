.section .data
    .global op1 # 32 bits int - l
    .global op2 # 32 bits int - l

.section .text
    .global sum2ints

    sum2ints:
    # op1 + op2
    # result in C, with 64 bits
    movslq op1(%rip), %rax
    movslq op2(%rip), %rcx
    adcq %rcx, %rax
    ret