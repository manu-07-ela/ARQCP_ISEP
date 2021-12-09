.section .data 
    .global ptr1, ptr2
    .comm ptr1, 8
    .comm ptr2, 8
    .equ V, 'v'
    .equ B, 'b'
    
.section .text
    .global str_copy_porto

    str_copy_porto:
        movq $0, %rax 
        leaq ptr1(%rip), %rsi
        leaq ptr2(%rip), %rdi 
    loop:
        movb (%rsi), %cl
        cmpb $118, %cl
        je change
        movb %cl, (%rdi)
        cmpb $0, %cl
        jz end
        incq %rax
        incq %rsi
        incq %rdi
        jmp loop
    change:
        movb $98, %cl 
        movb %cl, (%rdi)
        incq %rax
        incq %rsi
        incq %rdi
        jmp loop
    end:
        ret 

       



