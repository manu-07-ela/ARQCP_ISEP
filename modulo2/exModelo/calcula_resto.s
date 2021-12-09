.section .data:
    numero_atual:
        .short 0
    .global numero_atual

    .equ NINE, 9

.section .text
    .global calcula_resto
    calcula_resto:

    movq $0, %rax
    movq $0, %rbx
    movw numero_atual(%rip), %ax
    movw $10, %cx
    my_loop:
        movw $0, %dx
        divw %cx
        addw %dx, %bx 

        cmpw %ax, $NINE
        jb end_loop
        jmp my_loop
    end_loop:
        
        
    ret 


