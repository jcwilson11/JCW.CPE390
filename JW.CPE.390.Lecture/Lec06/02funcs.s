#   uint64_t s = sum(a, 10);
#   zero(b, 100);

    .globl _Z3sumPyy

    # rcx = the location of the array
    # rdx = the length of the array
_Z3sum1Pyy:
    xor %rax, %rax # rax = 0
    cmp $0, %rdx
    jz sum_out

sum_loop1:
    add (%rcx), %rax # rax += *rcx
    add $8, %rcx #8 becuase 64 bit
    # do the array stuff
    sub $1, %rdx
    jnz sum_loop

sum_out1:
    ret

########################

    # rcx = the location of the array
    # rdx = the length of the array
_Z3sum2Pyy:
    xor %rax, %rax # rax = 0
    add $1, %r8
    xor $r8, $r8
    cmp $0, %rdx
    je sum_out2

sum_loop2:
    add (%rcx, %r8), %rax #this is wrong
    # do the array stuff
    sub $1, %rdx
    jnz sum_loop2

sum_out2:
    ret

########################

    # rcx = the location of the array
    # rdx = the length of the array
_Z3sum3Pyy:
    xor %rax, %rax # rax = 0
    xor $r8, $r8
    cmp $0, %rdx
    je sum_out3

sum_loop3:

    #lea (%rcx, %r8, 8), %r9
    #add (%r9), %rax

    add (%rcx, %r8, 8), %rax #go to the beginning of the array, then add 8 times the index
    add $1, %r8
    # do the array stuff
    sub $1, %rdx
    jnz sum_loop3

sum_out3:
    ret

########################

.globl _Z4zeroPyy

_Z4zeroPyy:
    ret