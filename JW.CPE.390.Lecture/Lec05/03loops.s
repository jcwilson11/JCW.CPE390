        .globl _main
# write a loop that counts from 0 to 1 billion
loop1:
        mov $0, %rax
        mov  $8000000000, %rcx

loop1a:
        add $1, %rax
        cmpq  %rcx, %rax # rax-1 billion
        #Z=1 N=0 (N stands for negative)
        #zero Z=, sign S=, carry C=, overflow O=
        #only need to know Z and S
        jne loop1a

        ret

#write a loop that counts from 1 billion down
loop2:
        mov $1000000000, %rcx
loop2a:
        sub $1, %rcx
        cmp $0, %rcx
        jnz loop2a
        ret

f:
    add %rcx, %rcx   #rcx = 2rcx
    mov %rcx, %rax
    ret

#write a loop that alls function f(i)
#for i = 1 to 100
loop3:
 #(not ideal)       sub $8, %rsp #gave 8 bits to play with for memoery
        mov $1, %rcx
loop3a:    
#       mov %rcx, (%rsp) # save it
        call f
        pop %rcx #restore
#        mov (%rsp), %rcx #restore
        add $1, %rcx
        cmp $100, %rcx
        jle loop3a
#        add $8, %rsp
        ret

loop4:
        push %r10
        mov $1, %r10
loop4a:    
        call f
        add $1, %r10
        cmp $100, %r10
        jle loop4a
        pop %r10
        ret

_main:
        call loop1
#        call loop2
#        call loop3
        ret
