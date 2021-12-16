.section .text 
    .global sum_n

    sum_n: 
        movq $0, %rcx
        movl %edi, %ecx
        movq $0, %rax

        loop:
            cmp $0, %ecx
            jle end 
            addl %ecx, %eax 
        loop loop

        end: 
            ret 

    
        

