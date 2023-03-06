# Author: Joris Wilson and John Shea
# I pledge my honor that I have abided by the Stevens Honor System.


#######################################
# Part 1
# write a function count by 3 to count from 1 to rcx by 3. For example, if the parameter is 20 your loop should count 1, 4, 7, 10, 13, 16, 19. You do not have to print the numbers.
	.globl __Z5counti
__Z5counti:
    xor %rax, %rax
    mov $1, %rax
    sub $1, %rdi          #rax is 19
loop:
    add $3, %rax
    cmp %rdi, %rax
    jle loop
ret



