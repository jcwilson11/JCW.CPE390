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
	

