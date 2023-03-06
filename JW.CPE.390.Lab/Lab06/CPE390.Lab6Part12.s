#######################################
#Part 2

    .globl __Z5sumsqPKyj
__Z5sumsqPKyj:
    xor %rax, %rax
    push %rbp
    mov %rsp, %rbp          
    mov %rdx, %rcx
loop:
    cmp $0, %rcx       
    je done            

    mov (%rbx), %rdx   
    imul %rdx, %rdx    
    add %rdx, %rax           #rax is 102

    add $8, %rbx       
    sub $1, %rcx       
    jmp loop           

done:
    pop %rbp
    ret
	

