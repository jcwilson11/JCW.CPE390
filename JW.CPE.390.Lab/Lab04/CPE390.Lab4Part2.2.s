# Author: Joris Wilson and John Shea
	.globl _main
_main:
	mov	$0x12345678FEDCBA9, %rcx
	mov	$0x00000000F0F000F, %rdx
	call	f
	ret

	.globl f
f:
	xor	%rcx, %rdx
	mov	%rdx, %rax
	ret