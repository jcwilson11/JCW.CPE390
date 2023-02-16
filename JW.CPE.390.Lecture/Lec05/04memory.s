.globl _main

#   %rcx is the location of an array
#   %rdx is the number of elements in the array

writemem:
    xor %r8, %r8    #xor-ing a register to itself makes it zero

writememloop:
    movq $0, (%rcx)
    add $8, %rcs
    sub $1, %rdc
    jne writememloop
    ret



_main: