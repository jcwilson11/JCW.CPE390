    .globl _main

_main:
    call countuo
    call countdown
    call mask1
    call mask2
    call mask3
    ret

# rcx = the number of times to count
# count from 1 to rcx
countup:
#    mov $0, %rsi
    push %rsi
    xor %rsi, %rsi
    cmp $0, %rcx
    jle out
countuo_loop:
    add $1, %rsi   # rsi = rsi + 1
    cmp %rcx, %rsi # rsi == rcx
    jle countuo_loop # if rsi <= rcx, loop
countup_out:
    pop %rsi
    ret

#  rcx = the number of times to count
# count from rcx to 1
countdown:
    sub $1, %rcx
    jnz countdown
#   cmp $1, %rcx
#   jge countdown
    ret

# anything AND 0 is 0
# anything AND 1 is anything 
# rcx = a number
# rdx = mask
# zero out any bits for which mask = 0
mask1:
    #another options:
    #mov %rdx, %rax
    #and %rcx, %rax
    #ret

    #main option
    and %rcx, %rdx
    mov %rdx, %rax
    ret

# rcx = a number
# rdx = mask
# set to 1 any bits for which mask = 1
mask2:
    mov %rdx, %rax
    or %rcx, %rax
    ret

# rcx = a number
# rdx = mask
# toggle any bits for which mask = 1
mask3:
    mov %rcx, %rax
    xor %rdx, %rax
    ret


