.section .text 
    .global sum_smaller

<<<<<<< HEAD
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
        
    
        

=======
sum_smaller: 
    movq $0, %rax 
    addl %edi, %eax
    addl %esi, %eax

    cmpl %edi, %esi
    jle end1
    jg end2

end1: 
    movl %esi, (%rdx)
    ret
end2:
    movl %edi, (%rdx)
    ret
>>>>>>> 64d7bbdeccd79b5a1e3f3b97b1f924e82a20b3ef
