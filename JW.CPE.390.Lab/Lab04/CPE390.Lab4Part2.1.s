# Author: Joris Wilson and John Shea
.globl _main
_main:
	mov	$0x12345678FEDCBA9, %rcx
	mov	$0x00000000F0F000F, %rdx
	call	f
	ret

	.globl f

#set the value to be returned to be rax = 0x123456780E0CBA0
f:
 	mov    %rcx, %rax     # Move rcx value to rax
    mov    %rdx, %rbx     # Move rdx value to rbx
    not    %rbx           # Invert rbx so that bits set to 1 in rdx are 0
    and    %rax, %rbx     # Clear every bit in rax where rdx is 1
    mov    %rbx, %rcx     # Move the modified value to rcx
    mov    %rcx, %rax     # Move the modified value to rax
    ret                   # Return the modified rcx value in rax             # Return the modified rcx value in rax

	