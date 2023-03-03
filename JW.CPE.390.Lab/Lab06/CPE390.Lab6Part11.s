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

