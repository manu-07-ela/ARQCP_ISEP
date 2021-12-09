.section .data
    .global op1 # 32 bits - l
	.global op2 # 32 bits - l

.section .text
    .global test_flags

    test_flags:
    movq $0, %rax 
    movl $0, %ecx
    movl op1(%rip), %ecx
    addl op2(%rip), %ecx
    
    jo overflow
        movb $0, %al
        adcb %al, %al
    jmp end
    
    overflow:
        movq $1, %rax
    end: 
    ret


