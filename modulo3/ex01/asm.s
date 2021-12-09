.section .data
    .global ptr1

.section .text
    .global zero_count

    zero_count:
        movl $0, %eax
        movq ptr1(%rip), %rcx

    loop:
        movb (%rcx), %dl
        cmpb $0, %dl
        je end
        cmpb $48, %dl # na tabela de ascii 0 48 corresponde a 0
        je contador
        incq %rcx
        jmp loop

    contador:
        addl $1, %eax
        incq %rcx
        jmp loop

    end:
        ret