# Author: Joris Wilson and John Shea
	.globl _main
_main:
	mov $6, %rcx
	mov $7, %rdx
	call f
	ret

	.global f
f:
    leaq (%rcx,%rdx), %rax
    shr $1, %rax
    ret
