.section .text 
     .global count_even

     count_even:
        
        movq $0, %r8
        movq $0, %rcx
        movq $0, %r9
        movl %esi, %ecx 

        cmpl $0, %ecx
        jz end

        myloop:
            movq $0, %rax 
            movw (%rdi), %ax
            movb $2, %r9b
            cbw
            idivb %r9b
            cmpb $0, %ah
            je isEven
            continue:
                addq $2, %rdi
        loop myloop
        jmp end
        isEven:
            addl $1, %r8d
            jmp continue

        end:
            movl %r8d, %eax 
            ret 

    
        







    

