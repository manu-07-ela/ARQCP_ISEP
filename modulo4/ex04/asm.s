.section .text 
    .global sum_smaller

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