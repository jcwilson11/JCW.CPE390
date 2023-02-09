# Author: Joris Wilson and John Shea
    .globl _main
_main:

    mov $0xDEADBEEF12345678, %rax
    mov $0xABBAF0BB0BBE98D1, %rbx


    mov %rax, %rcx 
    and %rbx, %rcx 

    mov %rax, %rdx
    or %rbx, %rdx

    mov %rax, %rsi 
    xor %rbx, %rsi

    ret