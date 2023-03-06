    .globl __Z8replaceDy
__Z8replaceDy:
    mov $2, %rdx
    mov %rcx, %rax
Loop1:
    mov $0xF, %rbx
    and %rax, %rbx
    cmp $0xD, %rbx
    jne Loop2
    sub $1, %rax              # rax is 0x987654321c9
Loop2:
    ror $4, %rax
    sub $1, %rdx
    jnz Loop1
    rol $8, %rax
    ret
    