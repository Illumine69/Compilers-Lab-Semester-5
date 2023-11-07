.section	.rodata
.LC0:
	.string " "
.LC1:
	.string "\n"
.LC2:
	.string "Merge Sort\n"
.LC3:
	.string "Original array: \n"
.LC4:
	.string "Sorted array: \n"
# printStr: 
# printInt: 
# readInt: 
# merge: 
# merge_sort: 

	.text
	.globl	merge_sort
	.type	merge_sort, @function
merge_sort:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t0 = 1
	movl	$1, -4(%rbp)
# if l < r goto .L0
	movl	24(%rbp), %eax
	cmpl	32(%rbp), %eax
	jge	.L25
	jmp	.L0
.L25:
# t0 = 0
	movl	$0, -4(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t1 = l + r
.L0:
	movl	24(%rbp), %eax
	movl	32(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# t2 = 2
	movl	$2, -12(%rbp)
# t3 = t1 / t2
	movl	-8(%rbp), %eax
	cltd
	idivl	-12(%rbp)
	movl	%eax, -16(%rbp)
# m = t3
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# param a
# param l
# param m
# call merge_sort, 3
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdx
	movq	24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	16(%rbp), %rdi
	movq	%rdi, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	merge_sort
	addq	$16, %rsp
# t6 = 1
	movl	$1, -36(%rbp)
# t7 = m + t6
	movl	-20(%rbp), %eax
	movl	-36(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
# param a
# param t7
# param r
# call merge_sort, 3
	movq	32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	16(%rbp), %rdi
	movq	%rdi, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	merge_sort
	addq	$16, %rsp
# param a
# param l
# param m
# param r
# t9 = call merge, 4
	movq	32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rcx
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdx
	movq	24(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	movq	16(%rbp), %rdi
	movq	%rdi, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	merge
	movq	%rax, -52(%rbp)
	addq	$20, %rsp
# goto .L1
	jmp	.L1
# function merge_sort ends
.L1:
	leave
	ret
	.size	merge_sort, .-merge_sort
# print_arr: 

	.text
	.globl	print_arr
	.type	print_arr, @function
print_arr:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
# t10 = 0
	movl	$0, -8(%rbp)
# i = t10
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
# t11 = 1
.L4:
	movl	$1, -12(%rbp)
# if i < n goto .L2
	movl	-4(%rbp), %eax
	cmpl	24(%rbp), %eax
	jge	.L26
	jmp	.L2
.L26:
# t11 = 0
	movl	$0, -12(%rbp)
# goto .L3
	jmp	.L3
# goto .L3
	jmp	.L3
# t12 = i
.L5:
	movl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
# i = i + 1
	movl	-4(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# goto .L4
	jmp	.L4
# t13 = 0
.L2:
	movl	$0, -24(%rbp)
# t14 = i
	movl	-4(%rbp), %eax
	movl	%eax, -28(%rbp)
# t14 = t14 * 4
	movl	-28(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -28(%rbp)
# t13 = t14
	movl	-28(%rbp), %eax
	movl	%eax, -24(%rbp)
# t15 = a[t13]
	movl	-24(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -32(%rbp)
# param t15
# t16 = call printInt, 1
	movq	-32(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -36(%rbp)
	addq	$4, %rsp
# param .LC0
# t17 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -48(%rbp)
	addq	$4, %rsp
# goto .L5
	jmp	.L5
# param .LC1
.L3:
# t18 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -56(%rbp)
	addq	$4, %rsp
# function print_arr ends
	leave
	ret
	.size	print_arr, .-print_arr
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$240, %rsp
# param .LC2
# t19 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -12(%rbp)
	addq	$4, %rsp
# t20 = 8
	movl	$8, -16(%rbp)
# n = t20
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)
# t21 = 8
	movl	$8, -24(%rbp)
# t22 = 0
	movl	$0, -60(%rbp)
# t23 = 0
	movl	$0, -64(%rbp)
# t24 = t22
	movl	-60(%rbp), %eax
	movl	%eax, -68(%rbp)
# t24 = t24 * 4
	movl	-68(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -68(%rbp)
# t23 = t24
	movl	-68(%rbp), %eax
	movl	%eax, -64(%rbp)
# t25 = 12
	movl	$12, -72(%rbp)
# a[t23] = t25
	movl	-64(%rbp), %edx
	movl	-72(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t26 = 1
	movl	$1, -76(%rbp)
# t27 = 0
	movl	$0, -80(%rbp)
# t28 = t26
	movl	-76(%rbp), %eax
	movl	%eax, -84(%rbp)
# t28 = t28 * 4
	movl	-84(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -84(%rbp)
# t27 = t28
	movl	-84(%rbp), %eax
	movl	%eax, -80(%rbp)
# t29 = 1
	movl	$1, -88(%rbp)
# a[t27] = t29
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t30 = 2
	movl	$2, -92(%rbp)
# t31 = 0
	movl	$0, -96(%rbp)
# t32 = t30
	movl	-92(%rbp), %eax
	movl	%eax, -100(%rbp)
# t32 = t32 * 4
	movl	-100(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -100(%rbp)
# t31 = t32
	movl	-100(%rbp), %eax
	movl	%eax, -96(%rbp)
# t33 = 36
	movl	$36, -104(%rbp)
# a[t31] = t33
	movl	-96(%rbp), %edx
	movl	-104(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t34 = 3
	movl	$3, -108(%rbp)
# t35 = 0
	movl	$0, -112(%rbp)
# t36 = t34
	movl	-108(%rbp), %eax
	movl	%eax, -116(%rbp)
# t36 = t36 * 4
	movl	-116(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -116(%rbp)
# t35 = t36
	movl	-116(%rbp), %eax
	movl	%eax, -112(%rbp)
# t37 = 322
	movl	$322, -120(%rbp)
# a[t35] = t37
	movl	-112(%rbp), %edx
	movl	-120(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t38 = 4
	movl	$4, -124(%rbp)
# t39 = 0
	movl	$0, -128(%rbp)
# t40 = t38
	movl	-124(%rbp), %eax
	movl	%eax, -132(%rbp)
# t40 = t40 * 4
	movl	-132(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -132(%rbp)
# t39 = t40
	movl	-132(%rbp), %eax
	movl	%eax, -128(%rbp)
# t41 = 100
	movl	$100, -136(%rbp)
# a[t39] = t41
	movl	-128(%rbp), %edx
	movl	-136(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t42 = 5
	movl	$5, -140(%rbp)
# t43 = 0
	movl	$0, -144(%rbp)
# t44 = t42
	movl	-140(%rbp), %eax
	movl	%eax, -148(%rbp)
# t44 = t44 * 4
	movl	-148(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -148(%rbp)
# t43 = t44
	movl	-148(%rbp), %eax
	movl	%eax, -144(%rbp)
# t45 = 98
	movl	$98, -152(%rbp)
# a[t43] = t45
	movl	-144(%rbp), %edx
	movl	-152(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t46 = 6
	movl	$6, -156(%rbp)
# t47 = 0
	movl	$0, -160(%rbp)
# t48 = t46
	movl	-156(%rbp), %eax
	movl	%eax, -164(%rbp)
# t48 = t48 * 4
	movl	-164(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -164(%rbp)
# t47 = t48
	movl	-164(%rbp), %eax
	movl	%eax, -160(%rbp)
# t49 = 45
	movl	$45, -168(%rbp)
# a[t47] = t49
	movl	-160(%rbp), %edx
	movl	-168(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# t50 = 7
	movl	$7, -172(%rbp)
# t51 = 0
	movl	$0, -176(%rbp)
# t52 = t50
	movl	-172(%rbp), %eax
	movl	%eax, -180(%rbp)
# t52 = t52 * 4
	movl	-180(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -180(%rbp)
# t51 = t52
	movl	-180(%rbp), %eax
	movl	%eax, -176(%rbp)
# t53 = 23
	movl	$23, -184(%rbp)
# a[t51] = t53
	movl	-176(%rbp), %edx
	movl	-184(%rbp), %eax
cltq
	movl	%eax, -56(%rbp,%rdx,1)
# param .LC3
# t54 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -192(%rbp)
	addq	$4, %rsp
# param a
# param n
# call print_arr, 2
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	leaq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	print_arr
	addq	$12, %rsp
# t57 = 0
	movl	$0, -212(%rbp)
# t58 = 1
	movl	$1, -216(%rbp)
# t59 = n - t58
	movl	-20(%rbp), %edx
	movl	-216(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -220(%rbp)
# param a
# param t57
# param t59
# call merge_sort, 3
	movq	-220(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdx
	movq	-212(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	leaq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	merge_sort
	addq	$16, %rsp
# param .LC4
# t60 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -228(%rbp)
	addq	$4, %rsp
# param a
# param n
# call print_arr, 2
	movq	-20(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	leaq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	print_arr
	addq	$12, %rsp
# t62 = 0
	movl	$0, -236(%rbp)
# return t62
	movq	-236(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
# merge: 

	.text
	.globl	merge
	.type	merge, @function
merge:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$352, %rsp
# t63 = mid - l
	movl	32(%rbp), %edx
	movl	24(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -16(%rbp)
# t64 = 1
	movl	$1, -20(%rbp)
# t65 = t63 + t64
	movl	-16(%rbp), %eax
	movl	-20(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# n1 = t65
	movl	-24(%rbp), %eax
	movl	%eax, -28(%rbp)
# t66 = r - mid
	movl	40(%rbp), %edx
	movl	32(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -32(%rbp)
# n2 = t66
	movl	-32(%rbp), %eax
	movl	%eax, -36(%rbp)
# t67 = 6
	movl	$6, -40(%rbp)
# t68 = 6
	movl	$6, -44(%rbp)
# t69 = 0
	movl	$0, -96(%rbp)
# i = t69
	movl	-96(%rbp), %eax
	movl	%eax, -4(%rbp)
# t70 = 1
.L8:
	movl	$1, -100(%rbp)
# if i < n1 goto .L6
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L27
	jmp	.L6
.L27:
# t70 = 0
	movl	$0, -100(%rbp)
# goto .L7
	jmp	.L7
# goto .L7
	jmp	.L7
# t71 = i
.L9:
	movl	-4(%rbp), %eax
	movl	%eax, -104(%rbp)
# i = i + 1
	movl	-4(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# goto .L8
	jmp	.L8
# t72 = 0
.L6:
	movl	$0, -108(%rbp)
# t73 = i
	movl	-4(%rbp), %eax
	movl	%eax, -112(%rbp)
# t73 = t73 * 4
	movl	-112(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -112(%rbp)
# t72 = t73
	movl	-112(%rbp), %eax
	movl	%eax, -108(%rbp)
# t74 = l + i
	movl	24(%rbp), %eax
	movl	-4(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -116(%rbp)
# t75 = 0
	movl	$0, -120(%rbp)
# t76 = t74
	movl	-116(%rbp), %eax
	movl	%eax, -124(%rbp)
# t76 = t76 * 4
	movl	-124(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -124(%rbp)
# t75 = t76
	movl	-124(%rbp), %eax
	movl	%eax, -120(%rbp)
# t77 = a[t75]
	movl	-120(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -128(%rbp)
# left[t72] = t77
	movl	-108(%rbp), %edx
	movl	-128(%rbp), %eax
cltq
	movl	%eax, -68(%rbp,%rdx,1)
# goto .L9
	jmp	.L9
# t78 = 0
.L7:
	movl	$0, -132(%rbp)
# j = t78
	movl	-132(%rbp), %eax
	movl	%eax, -8(%rbp)
# t79 = 1
.L12:
	movl	$1, -136(%rbp)
# if j < n2 goto .L10
	movl	-8(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jge	.L28
	jmp	.L10
.L28:
# t79 = 0
	movl	$0, -136(%rbp)
# goto .L11
	jmp	.L11
# goto .L11
	jmp	.L11
# t80 = j
.L13:
	movl	-8(%rbp), %eax
	movl	%eax, -140(%rbp)
# j = j + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# goto .L12
	jmp	.L12
# t81 = mid + j
.L10:
	movl	32(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -144(%rbp)
# t82 = 1
	movl	$1, -148(%rbp)
# t83 = t81 + t82
	movl	-144(%rbp), %eax
	movl	-148(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -152(%rbp)
# q = t83
	movl	-152(%rbp), %eax
	movl	%eax, -156(%rbp)
# t84 = 0
	movl	$0, -160(%rbp)
# t85 = j
	movl	-8(%rbp), %eax
	movl	%eax, -164(%rbp)
# t85 = t85 * 4
	movl	-164(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -164(%rbp)
# t84 = t85
	movl	-164(%rbp), %eax
	movl	%eax, -160(%rbp)
# t86 = 0
	movl	$0, -168(%rbp)
# t87 = q
	movl	-156(%rbp), %eax
	movl	%eax, -172(%rbp)
# t87 = t87 * 4
	movl	-172(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -172(%rbp)
# t86 = t87
	movl	-172(%rbp), %eax
	movl	%eax, -168(%rbp)
# t88 = a[t86]
	movl	-168(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -176(%rbp)
# right[t84] = t88
	movl	-160(%rbp), %edx
	movl	-176(%rbp), %eax
cltq
	movl	%eax, -92(%rbp,%rdx,1)
# goto .L13
	jmp	.L13
# t89 = 0
.L11:
	movl	$0, -180(%rbp)
# i = t89
	movl	-180(%rbp), %eax
	movl	%eax, -4(%rbp)
# t90 = 0
	movl	$0, -184(%rbp)
# j = t90
	movl	-184(%rbp), %eax
	movl	%eax, -8(%rbp)
# k = l
	movl	24(%rbp), %eax
	movl	%eax, -12(%rbp)
# t91 = 1
.L20:
	movl	$1, -188(%rbp)
# if i < n1 goto .L14
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L29
	jmp	.L14
.L29:
# t91 = 0
	movl	$0, -188(%rbp)
# goto .L15
	jmp	.L15
# t92 = 1
.L14:
	movl	$1, -192(%rbp)
# if j < n2 goto .L16
	movl	-8(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jge	.L30
	jmp	.L16
.L30:
# t92 = 0
	movl	$0, -192(%rbp)
# goto .L15
	jmp	.L15
# goto .L15
	jmp	.L15
# t93 = 0
.L16:
	movl	$0, -196(%rbp)
# t94 = i
	movl	-4(%rbp), %eax
	movl	%eax, -200(%rbp)
# t94 = t94 * 4
	movl	-200(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -200(%rbp)
# t93 = t94
	movl	-200(%rbp), %eax
	movl	%eax, -196(%rbp)
# t95 = left[t93]
	movl	-196(%rbp), %edx
cltq
	movl	-68(%rbp,%rdx,1), %eax
	movl	%eax, -204(%rbp)
# t96 = 0
	movl	$0, -208(%rbp)
# t97 = j
	movl	-8(%rbp), %eax
	movl	%eax, -212(%rbp)
# t97 = t97 * 4
	movl	-212(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -212(%rbp)
# t96 = t97
	movl	-212(%rbp), %eax
	movl	%eax, -208(%rbp)
# t98 = right[t96]
	movl	-208(%rbp), %edx
cltq
	movl	-92(%rbp,%rdx,1), %eax
	movl	%eax, -216(%rbp)
# t99 = 1
	movl	$1, -220(%rbp)
# if t95 <= t98 goto .L17
	movl	-204(%rbp), %eax
	cmpl	-216(%rbp), %eax
	jg	.L31
	jmp	.L17
.L31:
# t99 = 0
	movl	$0, -220(%rbp)
# goto .L18
	jmp	.L18
# goto .L19
	jmp	.L19
# t100 = 0
.L17:
	movl	$0, -224(%rbp)
# t101 = k
	movl	-12(%rbp), %eax
	movl	%eax, -228(%rbp)
# t101 = t101 * 4
	movl	-228(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -228(%rbp)
# t100 = t101
	movl	-228(%rbp), %eax
	movl	%eax, -224(%rbp)
# t102 = 0
	movl	$0, -232(%rbp)
# t103 = i
	movl	-4(%rbp), %eax
	movl	%eax, -236(%rbp)
# t103 = t103 * 4
	movl	-236(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -236(%rbp)
# t102 = t103
	movl	-236(%rbp), %eax
	movl	%eax, -232(%rbp)
# t104 = left[t102]
	movl	-232(%rbp), %edx
cltq
	movl	-68(%rbp,%rdx,1), %eax
	movl	%eax, -240(%rbp)
# a[t100] = t104
	movl	-224(%rbp), %edx
	movl	-240(%rbp), %eax
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movl	%eax, (%rdx)
# t105 = i
	movl	-4(%rbp), %eax
	movl	%eax, -244(%rbp)
# i = i + 1
	movl	-4(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# goto .L19
	jmp	.L19
# t106 = 0
.L18:
	movl	$0, -248(%rbp)
# t107 = k
	movl	-12(%rbp), %eax
	movl	%eax, -252(%rbp)
# t107 = t107 * 4
	movl	-252(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -252(%rbp)
# t106 = t107
	movl	-252(%rbp), %eax
	movl	%eax, -248(%rbp)
# t108 = 0
	movl	$0, -256(%rbp)
# t109 = j
	movl	-8(%rbp), %eax
	movl	%eax, -260(%rbp)
# t109 = t109 * 4
	movl	-260(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -260(%rbp)
# t108 = t109
	movl	-260(%rbp), %eax
	movl	%eax, -256(%rbp)
# t110 = right[t108]
	movl	-256(%rbp), %edx
cltq
	movl	-92(%rbp,%rdx,1), %eax
	movl	%eax, -264(%rbp)
# a[t106] = t110
	movl	-248(%rbp), %edx
	movl	-264(%rbp), %eax
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movl	%eax, (%rdx)
# t111 = j
	movl	-8(%rbp), %eax
	movl	%eax, -268(%rbp)
# j = j + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# goto .L19
	jmp	.L19
# t112 = k
.L19:
	movl	-12(%rbp), %eax
	movl	%eax, -272(%rbp)
# k = k + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# goto .L20
	jmp	.L20
# t113 = 1
.L15:
	movl	$1, -276(%rbp)
# if i < n1 goto .L21
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L32
	jmp	.L21
.L32:
# t113 = 0
	movl	$0, -276(%rbp)
# goto .L22
	jmp	.L22
# goto .L22
	jmp	.L22
# t114 = 0
.L21:
	movl	$0, -280(%rbp)
# t115 = k
	movl	-12(%rbp), %eax
	movl	%eax, -284(%rbp)
# t115 = t115 * 4
	movl	-284(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -284(%rbp)
# t114 = t115
	movl	-284(%rbp), %eax
	movl	%eax, -280(%rbp)
# t116 = 0
	movl	$0, -288(%rbp)
# t117 = i
	movl	-4(%rbp), %eax
	movl	%eax, -292(%rbp)
# t117 = t117 * 4
	movl	-292(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -292(%rbp)
# t116 = t117
	movl	-292(%rbp), %eax
	movl	%eax, -288(%rbp)
# t118 = left[t116]
	movl	-288(%rbp), %edx
cltq
	movl	-68(%rbp,%rdx,1), %eax
	movl	%eax, -296(%rbp)
# a[t114] = t118
	movl	-280(%rbp), %edx
	movl	-296(%rbp), %eax
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movl	%eax, (%rdx)
# t119 = i
	movl	-4(%rbp), %eax
	movl	%eax, -300(%rbp)
# i = i + 1
	movl	-4(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
# t120 = k
	movl	-12(%rbp), %eax
	movl	%eax, -304(%rbp)
# k = k + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# goto .L15
	jmp	.L15
# t121 = 1
.L22:
	movl	$1, -308(%rbp)
# if j < n2 goto .L23
	movl	-8(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jge	.L33
	jmp	.L23
.L33:
# t121 = 0
	movl	$0, -308(%rbp)
# goto .L24
	jmp	.L24
# goto .L24
	jmp	.L24
# t122 = 0
.L23:
	movl	$0, -312(%rbp)
# t123 = k
	movl	-12(%rbp), %eax
	movl	%eax, -316(%rbp)
# t123 = t123 * 4
	movl	-316(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -316(%rbp)
# t122 = t123
	movl	-316(%rbp), %eax
	movl	%eax, -312(%rbp)
# t124 = 0
	movl	$0, -320(%rbp)
# t125 = j
	movl	-8(%rbp), %eax
	movl	%eax, -324(%rbp)
# t125 = t125 * 4
	movl	-324(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -324(%rbp)
# t124 = t125
	movl	-324(%rbp), %eax
	movl	%eax, -320(%rbp)
# t126 = right[t124]
	movl	-320(%rbp), %edx
cltq
	movl	-92(%rbp,%rdx,1), %eax
	movl	%eax, -328(%rbp)
# a[t122] = t126
	movl	-312(%rbp), %edx
	movl	-328(%rbp), %eax
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movl	%eax, (%rdx)
# t127 = j
	movl	-8(%rbp), %eax
	movl	%eax, -332(%rbp)
# j = j + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# t128 = k
	movl	-12(%rbp), %eax
	movl	%eax, -336(%rbp)
# k = k + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
# goto .L22
	jmp	.L22
# t129 = 0
.L24:
	movl	$0, -340(%rbp)
# return t129
	movq	-340(%rbp), %rax
	leave
	ret
# function merge ends
	leave
	ret
	.size	merge, .-merge
