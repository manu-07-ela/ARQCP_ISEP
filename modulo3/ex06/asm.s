.section .data 
    .global ptr1
    
.section .text
    .global encrypt

    encrypt:
        movq $0, %rax
        movq ptr1(%rip), %rsi

        loop
            movb (%rsi), %cl
            cmpq $0, %cl
            je end
            addb $2, %cl
            addl $1, %eax 
            movb %cl, (%rsi)
            addq $1, (%rsi)
        jmp loop 

        end
            ret
    

       
       



