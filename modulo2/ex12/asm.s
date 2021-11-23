.section .data
    .global A 
    .global B 

.section .text
    .global isMultiple

    isMultiple:
        movl A(%rip), %eax
        movl B(%rip), %ecx
        cltd
        cmpl $0, %ecx  
        je notMultiple
        divl %ecx

        cmpl $0, %edx  
        je multiple
        movl $0, %eax

    notMultiple:
        mov $0, %eax

    multiple:
        movl $1, %eax 
    
    ret
