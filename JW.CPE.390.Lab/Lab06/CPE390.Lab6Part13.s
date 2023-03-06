
#######################################
#Part 3

.globl __Z4add1Pyj
__Z4add1Pyj:
    xor %rax, %rax
    push %rbp
    mov %rsp, %rbp    
    mov %rdx, %rcx
loop:
    cmp $0, %rcx       
    je done            

    mov (%rbx), %rdx         #adds 1 to each element and writes back to memory
    add $1, %rdx    
    mov %rdx, (%rbx)

    add $8, %rbx       
    sub $1, %rcx       
    jmp loop           

done:
    pop %rbp
    ret

