# Author: Joris Wilson and John Shea
    .globl _main
_main:
    mov  $5, %rax
    mov  $7, %rbx
    mov  $9, %rcx

    leaq (%rax, %rbx), %rdx

    movq  %rax, %rsi
    imulq %rcx, %rsi

    movq  %rbx, %rdi
    imulq %rax, %rdi

    movq  %rsi, %rax
    mov $0, %rdx
    div %rdi

    ret
