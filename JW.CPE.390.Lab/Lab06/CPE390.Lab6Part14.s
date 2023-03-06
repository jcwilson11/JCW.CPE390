    .globl __Z11replaceZeroy
__Z11replaceZeroy:
    mov $0b111001110000, %rax        #rax is 0xf2ecb08e 
    not %rax
    and %rcx, %rax
    ret

