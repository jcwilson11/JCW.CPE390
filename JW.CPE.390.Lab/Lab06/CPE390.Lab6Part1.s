# Author: Joris Wilson and John Shea
# I pledge my honor that I have abided by the Stevens Honor System.


#######################################
# Part 1
# write a function count by 3 to count from 1 to rcx by 3. For example, if the parameter is 20 your loop should count 1, 4, 7, 10, 13, 16, 19. You do not have to print the numbers.
	.globl __Z5counti
__Z5counti:
#    pushq %rbp
#    movq %rsp, %rbp
#    pushq %rbx
    movq %rdi, %rax  # rax = the number to count
    movq $3, %rdi    # rdi = 3, number to add each time
    movq $1, %rdx    # rdx =1 counting...
.Loop:
    cmpq %rax, %rdx
    jg .End
    addq %rdi, %rdx
    jmp .Loop
.End:
#    popq %rbx
#    popq %rbp
    retq

# Simple version vvv

#    # rcx = the number to count
#    movq $1, %rdx    # rdx =1 counting...
#    cmp  $0, %rcx
#    je   .End
#.Loop:
#    addq $3, %rdx
#    cmpq %rcx, %rdx
#    jle .Loop
#.End:

#######################################
#Part 2

    .globl __Z5sumsqPKyj
__Z5sumsqPKyj:
    pushq %rbp              # Save the base pointer
    movq %rsp, %rbp         # Set the stack pointer as the new base pointer

    movq %rdi, %rax         # Load the address of a[] into rax
    movl %esi, %ecx         # Load len into ecx
    xorq %rdx, %rdx         # Set rdx to zero for accumulating the sum

sum_loop:
    cmp $0, %ecx            # Check if len is zero
    je sum_done             # If len is zero, jump to sum_done
    dec %ecx                # Decrement len by one
    movq (%rax), %r8        # Load the next element of a[] into r8
    addq %r8, %rdx          # Add the square of the element to the sum
    addq $8, %rax           # Move to the next element of a[]
    jmp sum_loop            # Jump back to the beginning of the loop

sum_done:
    movq %rdx, %rax         # Move the sum to rax
    popq %rbp               # Restore the base pointer
    retq                     # Return the sum
	


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

