.section .data
    .global ptr1 
    .global ptr2

.section .text
    .global str_copy_porto2

    str_copy_porto2:
        movq ptr1(%rip), %rdx
        movq ptr2(%rip), %rax

    loop:
        movb (%rdx), %cl
        movb %cl, (%rax)

        cmpb $0, %cl
        je end

        cmpb $118, %cl 
        je v_minusc

        cmpb $86, %cl 
        je v_maiusc

        movb %cl, (%rax)
        jmp inc
        
    v_minusc: 
        movb $98, (%rax)   # v para b
        jmp inc

    v_maiusc:
        movb $66, (%rax)   # V para B
        jmp inc

    inc: 
        incq %rdx
        incq %rax
        jmp loop

    end: 
        ret