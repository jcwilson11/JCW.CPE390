	.globl __Z5counti
__Z5counti:

    # rcx = the number to count
    movq $1, %rdx    # rdx =1 counting...
    cmp  $0, %rcx
    je   .End
.Loop:
    addq $3, %rdx
    cmpq %rcx, %rdx
    jle .Loop
.End:
    retq