.section .data
    s1:
        .short 0
    s2:
        .short 0
    .global s1
    .global s2

.section .text

    .global crossSumBytes
    crossSumBytes:
    movw s1(%rip), %ax
    movw s2(%rip), %cx
    addb %cl, %ah
    addb %ch, %al
    ret 
    

    


    
