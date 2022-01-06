.section .text 
    .global test_equal
    .global size_string

    test_equal:
        movq $0, %rcx
        movq $0, %rdx

        push %rdi
        call size_string
        movl %eax, %ecx
        
        movq %rsi, %rdi
        call size_string
        cmpl %eax, %ecx
        pop %rdi
        je continue

        movl $0, %eax
        ret 

        continue:
            cmpl $0, %ecx
            je case_zero
            myloop:
                movb (%rsi), %r9b
                movb (%rdi), %dl
                cmpb %r9b, %dl
                jne end
                incq %rdi
                incq %rsi
            loop myloop

            movq $1, %rax
            ret

            end:
                movq $0, %rax 
                ret 

            case_zero:
                movq $1, %rax
                ret


    size_string:
        movq $0, %rax

        loop:

            cmpb $0, (%rdi)
            je end2
            incq %rdi
            addl $1, %eax
            jmp loop
        
        end2:
            ret

    

