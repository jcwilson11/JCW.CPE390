    .global

main: 

    mov $52, %rax # 32 + 16 + 4 = 00110100 0x34
    mov $37, %rbx # 32 + 4 + 1 =  00100101 0x25
    #                             ========            
    mov %rbx, %rcx
    and %rax, %rcs #              00100100 = 0x24 c++: x & y

    mov %rbx, %rdx
    or %rax, %rds #               00110101 = 0x35 c++: x | y


    mov %rbx, %rsi
    xor %rax, %rsi #              00010001 = 0x11 c++: x ^ y

    not %rsi       #              11101110 = 0xEE c++: ~x
