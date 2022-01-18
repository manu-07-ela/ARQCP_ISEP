.section .text 
    .global calculate
    .global print_result

    calculate:

        pushq % rbp 
        movq %rsp , % rbp
        subq $16, %rsp

        movl %edi, %eax 
        addl %esi, %eax

        movl %eax, -8(%rbp)

        movl %esi, %eax 
        imul %edi, %eax
        
        movl %eax, -16(%rbp)

        movl %edi, %r8d
        movl %esi, %r9d 

        movb $'+', %dil
        movl %r8d, %esi
        movl %r9d, %edx 
        movl -8(%rbp), %ecx
        call print_result

        movb $'*', %dil
        movl -16(%rbp), %ecx 
        call print_result

        movl -8(%rbp), %eax
        subl -16(%rbp), %eax 

        movq %rbp, %rsp
        popq %rbp 

        ret 









    

