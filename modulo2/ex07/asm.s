.section .data
    .global str

.section .text
    .global swapBytes
    swapBytes:
    movw str(%rip), %bx
    movb %bl, %ah
    movb %bh, %al
    ret

    .global crossSumBytes() 
    
