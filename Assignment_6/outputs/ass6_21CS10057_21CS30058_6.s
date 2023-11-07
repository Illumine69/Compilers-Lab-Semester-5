.section	.rodata
.LC0:
	.string " + "
.LC1:
	.string " = "
.LC2:
	.string "\n"
# printStr: 
# printFlt: 
# readFlt: 
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
# t0 = 1.100000
	movss	$1.100000, -8(%rbp)
# a = t0
	movss	-8(%rbp), %xmm0
	movss	%xmm0, -16(%rbp)
# t1 = 2.200000
	movss	$2.200000, -24(%rbp)
# b = t1
	movss	-24(%rbp), %xmm0
	movss	%xmm0, -32(%rbp)
# param a
# t2 = call printFlt, 1
	movq	-16(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printFlt
	movq	%rax, -40(%rbp)
	addq	$8, %rsp
# param .LC0
# t3 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -52(%rbp)
	addq	$4, %rsp
# param b
# t4 = call printFlt, 1
	movq	-32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printFlt
	movq	%rax, -56(%rbp)
	addq	$8, %rsp
# param .LC1
# t5 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -64(%rbp)
	addq	$4, %rsp
# t6 = a + b
	movl	-16(%rbp), %eax
	movl	-32(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -72(%rbp)
# param t6
# t7 = call printFlt, 1
	movq	-72(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printFlt
	movq	%rax, -76(%rbp)
	addq	$8, %rsp
# param .LC2
# t8 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -84(%rbp)
	addq	$4, %rsp
# function main ends
	leave
	ret
	.size	main, .-main
