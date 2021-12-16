.section .text 
    .global greatest

    greatest: 
        movq $0, %rax

       cmpl %esi, %edi
       jg secondComparation
       jl thirdComparation
       je equalsComparation

       secondComparation:
            cmpl %edx, %edi
            jg end

        thirdComparation:
            cmpl %edx, %esi
            jg end1
        
        equalsComparation:
            cmpl %esi, %edx
            jg end2
            jle end

    end:
        movl %edi, %eax 
        ret
    end1:
        movl %esi, %eax
        ret
    end2: 
        movl %edx, %eax
        ret
    
        

