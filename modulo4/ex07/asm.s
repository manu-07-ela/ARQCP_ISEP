.section .text 
    .global count_even

    count_even:
        # *vec em %rdi
        # n em %esi

        movl %esi, %ecx 
        movq $0, %rax

    loop:
        cmp $0, %ecx
        je end
        pushq %rax
        movw (%rdi), %ax
        # movw $2, %cx
        cdq 
        idivw %cx
        popq %rax
        cmpw $0, %dx
        je even 
        addq $2, %rdi
        decl %ecx
        jmp loop
    
    even:
        incl %eax
        addq $2, %rdi
        decl %ecx
        jmp loop
    end:
        ret
        







    

