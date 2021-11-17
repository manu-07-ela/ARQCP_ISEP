.section .data
    .global op1
     .global op2

    op3: 
        .long 

    op4:
        .long 

    .global op3
    .global op4

 
.section .text
    .global sum_v3 

 
sum_v3:
    movl op4(%rip), %eax      # place op4 in eax
    movl op3(%rip), %esi      # place op3 in esi
    addl %eax, %esi           # t1 = op4 + op3 

    movl op2(%rip), %ecx
    subl %ecx, %esi           # t2 = t1 - op2

    movl op1(%rip), %edx      # t3 = t2 + op1
    addl %edx, %esi

    movl %esi, %eax          

    ret                         # return t3