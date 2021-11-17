.section .data
    .global op1 # 32 bits - l
	.global op2 # 32 bits - l

.section .text
    .global test_flags

    test_flags:
    movl $0, %ecx
    movl op1(%rip), %ecx
    addl op2(%rip), %ecx

    movb $0, %al
    adcb %al, %al

    ret


