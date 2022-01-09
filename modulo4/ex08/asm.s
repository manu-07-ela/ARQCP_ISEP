.section .text 
    .global calc

    calc:
        # 1 - %edi
        # 2 - %rsi
        # 3 - %edx

        movl (%rsi), %ecx
        subl %edi, %ecx
        movl %ecx, %eax
        mull %edx
        subl $2, %eax
        ret








    

