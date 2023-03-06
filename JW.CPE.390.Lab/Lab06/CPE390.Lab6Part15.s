    .globl __Z10replaceOney
__ Z10replaceOney:
    mov $0b111001110000, %rax         #rax is 0xf2ecbefe 
    or %rcx, %rax
    ret

    