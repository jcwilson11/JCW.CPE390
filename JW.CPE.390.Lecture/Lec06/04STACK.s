    .globl _main
f:  
    push %rcx       # subtract 8 from %rsp, move %rcx, (%rsp)
    pop %rdx        # mov (%rsp), %rdx, add 8 to %rsp
    ret


_main:
    mov $5, %rcx
    mov $11, %rdx

    push %r10
    #push %r11
    #push %r12

    mov $92, %r10
    #mov $102, %r11
    #mov $14, %r12


    call f

    pop %r12
    #pop %r11
    #pop %r10

    ret

