.section .text 
    .global sum_smaller

    sum_smaller:

        movq $0, %rax
        cmpl %edi, %esi
        jle smaller
        movl %edi, (%rdx)
    continue:
        addl %edi, %esi
        movl %esi, %eax
        ret 

    smaller:
        movl %esi, (%rdx)
        jmp continue
        
    
        

