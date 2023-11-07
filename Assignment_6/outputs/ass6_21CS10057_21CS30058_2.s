.section	.rodata
.LC0:
	.string "a["
.LC1:
	.string "] = "
.LC2:
	.string "\n"
.LC3:
	.string "Maximum sum of a contiguous sub array: "
.LC4:
	.string "\n"
# printStr: 
# printInt: 
# readInt: 
# max_sub_array_sum: 

	.text
	.globl	max_sub_array_sum
	.type	max_sub_array_sum, @function
max_sub_array_sum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
# t0 = 1000000
	movl	$1000000, -4(%rbp)
# t1 = -t0
	movl	-4(%rbp), %eax
	negl	%eax
	movl	%eax, -8(%rbp)
# t2 = 0
	movl	$0, -12(%rbp)
# overall_max = t1
	movl	-8(%rbp), %eax
	movl	%eax, -16(%rbp)
# max_till_now = t2
	movl	-12(%rbp), %eax
	movl	%eax, -20(%rbp)
# t3 = 0
	movl	$0, -28(%rbp)
# i = t3
	movl	-28(%rbp), %eax
	movl	%eax, -24(%rbp)
# t4 = 1
.L2:
	movl	$1, -32(%rbp)
# if i < n goto .L0
	movl	-24(%rbp), %eax
	cmpl	24(%rbp), %eax
	jge	.L12
	jmp	.L0
.L12:
# t4 = 0
	movl	$0, -32(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t5 = i
.L6:
	movl	-24(%rbp), %eax
	movl	%eax, -36(%rbp)
# i = i + 1
	movl	-24(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
# goto .L2
	jmp	.L2
# t6 = 0
.L0:
	movl	$0, -40(%rbp)
# t7 = i
	movl	-24(%rbp), %eax
	movl	%eax, -44(%rbp)
# t7 = t7 * 4
	movl	-44(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -44(%rbp)
# t6 = t7
	movl	-44(%rbp), %eax
	movl	%eax, -40(%rbp)
# t8 = a[t6]
	movl	-40(%rbp), %edx
cltq
	movq	16(%rbp), %rdi
	addq	%rdi, %rdx
	movq	(%rdx) ,%rax
	movq	%rax, -48(%rbp)
# t9 = max_till_now + t8
	movl	-20(%rbp), %eax
	movl	-48(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -52(%rbp)
# max_till_now = t9
	movl	-52(%rbp), %eax
	movl	%eax, -20(%rbp)
# t10 = 1
	movl	$1, -56(%rbp)
# if overall_max < max_till_now goto .L3
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	.L13
	jmp	.L3
.L13:
# t10 = 0
	movl	$0, -56(%rbp)
# goto .L4
	jmp	.L4
# goto .L4
	jmp	.L4
# overall_max = max_till_now
.L3:
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
# goto .L4
	jmp	.L4
# t11 = 0
.L4:
	movl	$0, -60(%rbp)
# t12 = 1
	movl	$1, -64(%rbp)
# if max_till_now < t11 goto .L5
	movl	-20(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jge	.L14
	jmp	.L5
.L14:
# t12 = 0
	movl	$0, -64(%rbp)
# goto .L6
	jmp	.L6
# goto .L7
	jmp	.L7
# t13 = 0
.L5:
	movl	$0, -68(%rbp)
# max_till_now = t13
	movl	-68(%rbp), %eax
	movl	%eax, -20(%rbp)
# goto .L6
	jmp	.L6
# goto .L6
.L7:
	jmp	.L6
# return overall_max
.L1:
	movq	-16(%rbp), %rax
	leave
	ret
# function max_sub_array_sum ends
	leave
	ret
	.size	max_sub_array_sum, .-max_sub_array_sum
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$304, %rsp
# t14 = 8
	movl	$8, -4(%rbp)
# t15 = 0
	movl	$0, -40(%rbp)
# t16 = 0
	movl	$0, -44(%rbp)
# t17 = t15
	movl	-40(%rbp), %eax
	movl	%eax, -48(%rbp)
# t17 = t17 * 4
	movl	-48(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -48(%rbp)
# t16 = t17
	movl	-48(%rbp), %eax
	movl	%eax, -44(%rbp)
# t18 = 12
	movl	$12, -52(%rbp)
# t19 = -t18
	movl	-52(%rbp), %eax
	negl	%eax
	movl	%eax, -56(%rbp)
# a[t16] = t19
	movl	-44(%rbp), %edx
	movl	-56(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t20 = 1
	movl	$1, -60(%rbp)
# t21 = 0
	movl	$0, -64(%rbp)
# t22 = t20
	movl	-60(%rbp), %eax
	movl	%eax, -68(%rbp)
# t22 = t22 * 4
	movl	-68(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -68(%rbp)
# t21 = t22
	movl	-68(%rbp), %eax
	movl	%eax, -64(%rbp)
# t23 = 87
	movl	$87, -72(%rbp)
# a[t21] = t23
	movl	-64(%rbp), %edx
	movl	-72(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t24 = 2
	movl	$2, -76(%rbp)
# t25 = 0
	movl	$0, -80(%rbp)
# t26 = t24
	movl	-76(%rbp), %eax
	movl	%eax, -84(%rbp)
# t26 = t26 * 4
	movl	-84(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -84(%rbp)
# t25 = t26
	movl	-84(%rbp), %eax
	movl	%eax, -80(%rbp)
# t27 = 23
	movl	$23, -88(%rbp)
# a[t25] = t27
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t28 = 3
	movl	$3, -92(%rbp)
# t29 = 0
	movl	$0, -96(%rbp)
# t30 = t28
	movl	-92(%rbp), %eax
	movl	%eax, -100(%rbp)
# t30 = t30 * 4
	movl	-100(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -100(%rbp)
# t29 = t30
	movl	-100(%rbp), %eax
	movl	%eax, -96(%rbp)
# t31 = 6
	movl	$6, -104(%rbp)
# t32 = -t31
	movl	-104(%rbp), %eax
	negl	%eax
	movl	%eax, -108(%rbp)
# a[t29] = t32
	movl	-96(%rbp), %edx
	movl	-108(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t33 = 4
	movl	$4, -112(%rbp)
# t34 = 0
	movl	$0, -116(%rbp)
# t35 = t33
	movl	-112(%rbp), %eax
	movl	%eax, -120(%rbp)
# t35 = t35 * 4
	movl	-120(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -120(%rbp)
# t34 = t35
	movl	-120(%rbp), %eax
	movl	%eax, -116(%rbp)
# t36 = 43
	movl	$43, -124(%rbp)
# t37 = -t36
	movl	-124(%rbp), %eax
	negl	%eax
	movl	%eax, -128(%rbp)
# a[t34] = t37
	movl	-116(%rbp), %edx
	movl	-128(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t38 = 5
	movl	$5, -132(%rbp)
# t39 = 0
	movl	$0, -136(%rbp)
# t40 = t38
	movl	-132(%rbp), %eax
	movl	%eax, -140(%rbp)
# t40 = t40 * 4
	movl	-140(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -140(%rbp)
# t39 = t40
	movl	-140(%rbp), %eax
	movl	%eax, -136(%rbp)
# t41 = 320
	movl	$320, -144(%rbp)
# a[t39] = t41
	movl	-136(%rbp), %edx
	movl	-144(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t42 = 6
	movl	$6, -148(%rbp)
# t43 = 0
	movl	$0, -152(%rbp)
# t44 = t42
	movl	-148(%rbp), %eax
	movl	%eax, -156(%rbp)
# t44 = t44 * 4
	movl	-156(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -156(%rbp)
# t43 = t44
	movl	-156(%rbp), %eax
	movl	%eax, -152(%rbp)
# t45 = 233
	movl	$233, -160(%rbp)
# a[t43] = t45
	movl	-152(%rbp), %edx
	movl	-160(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t46 = 7
	movl	$7, -164(%rbp)
# t47 = 0
	movl	$0, -168(%rbp)
# t48 = t46
	movl	-164(%rbp), %eax
	movl	%eax, -172(%rbp)
# t48 = t48 * 4
	movl	-172(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -172(%rbp)
# t47 = t48
	movl	-172(%rbp), %eax
	movl	%eax, -168(%rbp)
# t49 = 87
	movl	$87, -176(%rbp)
# t50 = -t49
	movl	-176(%rbp), %eax
	negl	%eax
	movl	%eax, -180(%rbp)
# a[t47] = t50
	movl	-168(%rbp), %edx
	movl	-180(%rbp), %eax
cltq
	movl	%eax, -36(%rbp,%rdx,1)
# t51 = 0
	movl	$0, -188(%rbp)
# i = t51
	movl	-188(%rbp), %eax
	movl	%eax, -184(%rbp)
# t52 = 8
.L10:
	movl	$8, -192(%rbp)
# t53 = 1
	movl	$1, -196(%rbp)
# if i < t52 goto .L8
	movl	-184(%rbp), %eax
	cmpl	-192(%rbp), %eax
	jge	.L15
	jmp	.L8
.L15:
# t53 = 0
	movl	$0, -196(%rbp)
# goto .L9
	jmp	.L9
# goto .L9
	jmp	.L9
# t54 = i
.L11:
	movl	-184(%rbp), %eax
	movl	%eax, -200(%rbp)
# i = i + 1
	movl	-184(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -184(%rbp)
# goto .L10
	jmp	.L10
# param .LC0
.L8:
# t55 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -212(%rbp)
	addq	$4, %rsp
# param i
# t56 = call printInt, 1
	movq	-184(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -220(%rbp)
	addq	$4, %rsp
# param .LC1
# t57 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -228(%rbp)
	addq	$4, %rsp
# t58 = 0
	movl	$0, -232(%rbp)
# t59 = i
	movl	-184(%rbp), %eax
	movl	%eax, -236(%rbp)
# t59 = t59 * 4
	movl	-236(%rbp), %eax
	imull	$4, %eax
	movl	%eax, -236(%rbp)
# t58 = t59
	movl	-236(%rbp), %eax
	movl	%eax, -232(%rbp)
# t60 = a[t58]
	movl	-232(%rbp), %edx
cltq
	movl	-36(%rbp,%rdx,1), %eax
	movl	%eax, -240(%rbp)
# param t60
# t61 = call printInt, 1
	movq	-240(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -244(%rbp)
	addq	$4, %rsp
# param .LC2
# t62 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -252(%rbp)
	addq	$4, %rsp
# goto .L11
	jmp	.L11
# t64 = 8
.L9:
	movl	$8, -264(%rbp)
# param a
# param t64
# t65 = call max_sub_array_sum, 2
	movq	-264(%rbp), %rax
	pushq	%rax
	movq	%rax, %rsi
	leaq	-36(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	max_sub_array_sum
	movq	%rax, -268(%rbp)
	addq	$12, %rsp
# max_subArr_sum = t65
	movl	-268(%rbp), %eax
	movl	%eax, -272(%rbp)
# param .LC3
# t66 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -280(%rbp)
	addq	$4, %rsp
# param max_subArr_sum
# t67 = call printInt, 1
	movq	-272(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -284(%rbp)
	addq	$4, %rsp
# param .LC4
# t68 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -292(%rbp)
	addq	$4, %rsp
# t69 = 0
	movl	$0, -296(%rbp)
# return t69
	movq	-296(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
