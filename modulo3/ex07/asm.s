.section .data
    .global ptr1 

.section .text
    .global decrypt 

decrypt:
	movq ptr1(%rip), %rdx
	movq $0, %rcx

loop:
	movb (%rdx), %cl 
	cmpb $0, %cl
	je end
		
	cmpb $' ', %cl
	je increment	
	cmpb $'a', %cl
	je increment
		
	subb $2, %cl
	movb %cl, (%rdx)
	incl %ecx
	incq %rdx
	jmp loop

increment:
	incq %rdx
	jmp loop

end:
	movl %ecx, %eax
	ret