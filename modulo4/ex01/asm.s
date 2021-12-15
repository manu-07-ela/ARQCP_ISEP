.section .text 
    .global cube

    cube: 
        movq $0, %rax 
        movl %edi, %eax
        mull %edi
        mull %edi
        
        ret 
