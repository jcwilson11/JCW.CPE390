
#######################################
#Part 3

.globl __Z4add1Pyj
__Z4add1Pyj:
    pushq   %rbp        # save the current frame pointer
    movq    %rsp, %rbp  # set up a new frame pointer
    pushq   %r12        # save r12
    pushq   %rbx        # save rbx

    movq    %rdi, %rbx  # store the address of a[] in rbx
    movl    %esi, %ecx  # store len in ecx

loop_start:
    cmp     $0, %ecx    # check if ecx is zero
    je      loop_end    # if so, exit the loop

    movq    (%rbx), %r12  # load a[i] into r12
    addq    $1, %r12      # add 1 to r12
    movq    %r12, (%rbx)  # store the updated value back to a[i]

    addq    $8, %rbx      # increment the pointer to the next element of a[]
    subl    $1, %ecx      # decrement ecx
    jmp     loop_start    # jump back to the start of the loop

loop_end:
    popq    %rbx        # restore rbx
    popq    %r12        # restore r12
    leave              # restore the previous frame pointer and stack pointer
    ret                # return from the function

