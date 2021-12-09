.section .data 
    .global ptrvec 
    .global num
    
.section .text
    .global  vec_add_one

    vec_add_one:
        movq ptrvec(%rip), %rsi
        movq $0, %rcx 
        movl num(%rip), %ecx  

        loop:
            movq $0, %rax 
            movq (%rsi), %rax 
            addq $1, %rax
            movq %rax, (%rsi)
            addq $8, %rsi
        loop loop 

    ret 

       
       



