    .globl __Z8replaceDy
__Z8replaceDy:
    mov $16, %rdx
    mov %rcx, %rax
Loop1:
    mov $0xF, %rbx
    and %rax, %rbx
    cmp $0xD, %rbx         # originally 0xfeda981ddaab, rax is now 0xfeca981ccaab
    jne Loop2
    sub $1, %rax
Loop2:
    ror $4, %rax
    sub $1, %rdx
    jnz Loop1
    ret
    
