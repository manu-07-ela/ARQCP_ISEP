.section .data
    .global num

.section .text
    .global vec_avg
   
    vec_avg: 
        movswl num(%rip), %ecx

		cmpl $0, %ecx
		je numNull

		call vec_sum
		
		movl num(%rip), %ecx
		cdq
		idivl %ecx
		jmp end
		
    numNull:
            movl $0, %eax
            
    end:
        ret

    
    

    