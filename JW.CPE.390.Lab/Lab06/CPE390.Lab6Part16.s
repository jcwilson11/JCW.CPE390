    .globl __Z7togglesy
__Z7togglesy:
    mov $0b111001110000, %rax        #rax is 0xf2ecb4ce  
    xor %rcx, %rax
    ret
    