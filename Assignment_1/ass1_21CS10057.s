	.file	"code.c"								# source file name
	.text											# code starts
	.globl	calculateFrequency						
	.type	calculateFrequency, @function			
calculateFrequency:									# calaculateFrequency: starts
.LFB0:											
	.cfi_startproc									# call frame information
	endbr64											
	pushq	%rbp									# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp								# rbp <- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)							# rdi <- first argument (arr1[])
	movl	%esi, -28(%rbp)							# esi <- second argument (n)
	movq	%rdx, -40(%rbp)							# rdx <- third argument (fr1[])
	movl	$0, -12(%rbp)							# (rbp - 12) <- 0 (i <- 0)
	jmp	.L2											# jump to L2
.L7:
	movl	$1, -4(%rbp)							# (rbp - 4) <- 1 (ctr <- 1)
	movl	-12(%rbp), %eax							# eax <- (rbp - 12) (eax <- i)
	addl	$1, %eax								# eax <- eax + 1 (eax <- i + 1)
	movl	%eax, -8(%rbp)							# (rbp - 8) <- eax (j <- i + 1)
	jmp	.L3											# jump to L3 <for loop at line 8>
.L5:
	movl	-12(%rbp), %eax							# eax <- (rbp - 12) (eax <- i)
	cltq											# eax <- rax (convert long to quad)
	leaq	0(,%rax,4), %rdx						# rdx <- rax * 4 (rdx <- i * 4)
	movq	-24(%rbp), %rax							# rax <- (rbp - 24) (rax <- arr1[])
	addq	%rdx, %rax								# rax <- rax + rdx (rax <- arr1[i])
	movl	(%rax), %edx							# edx <- (rax) (edx <- arr1[i])
	movl	-8(%rbp), %eax							# eax <- (rbp - 8) (eax <- j)
	cltq											# eax <- rax (convert long to quad)
	leaq	0(,%rax,4), %rcx						# rcx <- rax * 4 (rcx <- j * 4)
	movq	-24(%rbp), %rax							# rax <- (rbp - 24) (rax <- arr1[])
	addq	%rcx, %rax								# rax <- rax + rcx (rax <- arr1[j])
	movl	(%rax), %eax							# eax <- (rax) (eax <- arr1[j])
	cmpl	%eax, %edx								# compare edx with eax (arr1[i] with arr1[j] i.e. if arr1[i] != arr1[j])
	jne	.L4											# if arr1[i] != arr1[j] then jump to L4
	addl	$1, -4(%rbp)							# (rbp - 4) <- (rbp - 4) + 1 (ctr <- ctr + 1)
	movl	-8(%rbp), %eax							# eax <- (rbp - 8) (eax <- j)
	cltq											# eax <- rax (convert long to quad)
	leaq	0(,%rax,4), %rdx						# rdx <- rax * 4 (rdx <- j * 4)
	movq	-40(%rbp), %rax							# rax <- (rbp - 40) (rax <- fr1[])
	addq	%rdx, %rax								# rax <- rax + rdx (rax <- fr1[j])
	movl	$0, (%rax)							    # (rax) <- 0 (fr1[j] <- 0)
.L4:
	addl	$1, -8(%rbp)							# (rbp - 8) <- (rbp - 8) + 1 (j <- j + 1)
.L3:
	movl	-8(%rbp), %eax							# eax <- (rbp - 8) (eax <- j)
	cmpl	-28(%rbp), %eax							# eax <- n (compare j with n i.e. j < n)
	jl	.L5											# if j < n then jump to L5
	movl	-12(%rbp), %eax							# eax <- (rbp - 12) (eax <- i)
	cltq											# eax <- rax (convert long to quad)
	leaq	0(,%rax,4), %rdx						# rdx <- rax * 4 (rdx <- i * 4)
	movq	-40(%rbp), %rax							# rax <- (rbp - 40) (rax <- fr1[])
	addq	%rdx, %rax								# rax <- rax + rdx (rax <- fr1[i])
	movl	(%rax), %eax							# eax <- (rax) (eax <- fr1[i])
	testl	%eax, %eax								# eax <- eax & eax (eax <- fr1[i] & fr1[i] i.e. if fr1[i] == 0)
	je	.L6											# if fr1[i] == 0 then jump to L6 <line 11>
	movl	-12(%rbp), %eax							# eax <- (rbp - 12) (eax <- i)
	cltq											# eax <- rax (convert long to quad)
	leaq	0(,%rax,4), %rdx						# rdx <- rax * 4 (rdx <- i * 4)
	movq	-40(%rbp), %rax							# rax <- (rbp - 40) (rax <- fr1[])
	addq	%rax, %rdx								# rdx <- rax + rdx (rdx <- fr1[i])
	movl	-4(%rbp), %eax							# eax <- (rbp - 4) (eax <- ctr)
	movl	%eax, (%rdx)							# (rdx) <- eax (fr1[i] <- ctr)
.L6:
	addl	$1, -12(%rbp)							# (rbp - 12) <- (rbp - 12) + 1 (i <- i + 1)
.L2:
	movl	-12(%rbp), %eax						    # eax <- (rbp - 12) (eax <- i)
	cmpl	-28(%rbp), %eax					        # (rbp-28) == n (compare i with n i.e. i < n)
	jl	.L7											# if i < n then jump to L7 <for loop at line 6>
	nop												# no operation
	nop											
	popq	%rbp									# pop old base pointer
	.cfi_def_cfa 7, 8
	ret												# return
	.cfi_endproc
.LFE0:
	.size	calculateFrequency, .-calculateFrequency	# calculateFrequency: ends
	.section	.rodata								# read only data section
.LC0:												# Label of f-string - 1st printf
	.string	"Element\tFrequency"					
.LC1:												
	.string	"%d\t%d\n"    							# Label of f-string - scanf
	.text											# code section
	.globl	printArrayWithFrequency					# printArrayWithFrequency is global
	.type	printArrayWithFrequency, @function		# printArrayWithFrequency is a function:
printArrayWithFrequency:							# printArrayWithFrequency: starts
.LFB1:												
	.cfi_startproc								    # call frame information
	endbr64
	pushq	%rbp									# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp								# rbp <- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$48, %rsp								# rsp <- rsp - 48 (allocate 48 bytes on stack)
	movq	%rdi, -24(%rbp)							# rdi <- first argument (arr1[])
	movq	%rsi, -32(%rbp)							# rsi <- second argument (fr1[])
	movl	%edx, -36(%rbp)							# edx <- third argument (n)
	leaq	.LC0(%rip), %rax						# rax <- address of f-string (LC0)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	call	puts@PLT								# call puts function
	movl	$0, -4(%rbp)							# (rbp - 4) <- 0 (i <- 0)
	jmp	.L9										    # jump to L9
.L11:
	movl	-4(%rbp), %eax							# eax <- (rbp - 4) (eax <- i)
	cltq
	leaq	0(,%rax,4), %rdx						# rdx <- rax * 4 (rdx <- i * 4)
	movq	-32(%rbp), %rax							# rax <- (rbp - 32) (rax <- fr1[])
	addq	%rdx, %rax								# rax <- rax + rdx (rax <- fr1[i])
	movl	(%rax), %eax							# eax <- (rax) (eax <- fr1[i])
	testl	%eax, %eax								# eax <- eax & eax (eax <- fr1[i] & fr1[i] i.e. if fr1[i] == 0)
	je	.L10										# if fr1[i] == 0 then jump to L10 <line 24>
	movl	-4(%rbp), %eax							# eaz <- (rbp - 4) (eax <- i) 
	cltq
	leaq	0(,%rax,4), %rdx						# rdx <- ras * 4 (rdx <- i * 4)
	movq	-32(%rbp), %rax							# rax <- (rbp - 32) (rax <- fr1[])
	addq	%rdx, %rax								# rax <- rax + rdx (rax <- fr1[i])
	movl	(%rax), %edx							# edx <- (rax) (edx <- fr1[i])
	movl	-4(%rbp), %eax							# eax <- (rbp - 4) (eax <- i)
	cltq											
	leaq	0(,%rax,4), %rcx						# rcx <- (rax-4)
	movq	-24(%rbp), %rax							# rax <- (rbp - 24) (rax <= arr1[])
	addq	%rcx, %rax								# rax <- rax + rcx (rax <- arr1[i])
	movl	(%rax), %eax							# eax <- (rax) (eax <- arr1[i])
	movl	%eax, %esi								# esi <- eax (esi <- arr1[i])
	leaq	.LC1(%rip), %rax						# rax <- address of f-string (LC1)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	movl	$0, %eax								# eas <= 0
	call	printf@PLT								# return printf function call 
.L10:
	addl	$1, -4(%rbp)							# (rbp - 4) <- (rbp - 4) + 1 (i <- i + 1)
.L9:
	movl	-4(%rbp), %eax							# eax <- (rbp - 4) (eax <- i)		
	cmpl	-36(%rbp), %eax							# eax <- n (compare i with n i.e. i < n)
	jl	.L11										# if i < n then jump to L11
	nop
	nop
	leave											# restore stack pointer
	.cfi_def_cfa 7, 8
	ret												# return
	.cfi_endproc
.LFE1:
	.size	printArrayWithFrequency, .-printArrayWithFrequency
	.section	.rodata
	.align 8
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:"
	.align 8
.LC3:
	.string	"------------------------------------------------"
	.align 8
.LC4:
	.string	"Input the number of elements to be stored in the array :"
.LC5:
	.string	"%d"
	.align 8
.LC6:
	.string	"Enter each elements separated by space: "
	.text
	.globl	main
	.type	main, @function	
main:
.LFB2:
	.cfi_startproc									# call frame information
	endbr64
	pushq	%rbp									# save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp								# rbp <- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$832, %rsp								# rsp <- rsp - 832 (allocate 832 bytes on stack)
	movq	%fs:40, %rax							# rax <- fs:40 (rax <- address of canary)
	movq	%rax, -8(%rbp)							# (rbp - 8) <- rax (store canary on stack)
	xorl	%eax, %eax								# eax <- eax ^ eax (eax <- 0)
	leaq	.LC2(%rip), %rax						# rax <- address of f-string (LC2)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	call	puts@PLT								# return puts function call
	leaq	.LC3(%rip), %rax						# rax <- address of f-string (LC3)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	call	puts@PLT								# return puts function call
	leaq	.LC4(%rip), %rax						# rax <- address of f-string (LC4)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	movl	$0, %eax								# eax <- 0
	call	printf@PLT								# return printf function call
	leaq	-828(%rbp), %rax						# rax <- (rbp - 828) (rax <- n)
	movq	%rax, %rsi								# rsi <- rax (n)
	leaq	.LC5(%rip), %rax						# rax <- address of f-string (LC5)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	movl	$0, %eax								# eax <- 0
	call	__isoc99_scanf@PLT						# return scanf function call
	leaq	.LC6(%rip), %rax						# rax <- address of f-string (LC6)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	movl	$0, %eax								# eax <- 0
	call	printf@PLT								# return printf function call
	movl	$0, -824(%rbp)							# (rbp - 824) <- 0 (i <- 0)
	jmp	.L13
.L14:												# scanf <line 42>
	leaq	-816(%rbp), %rdx						# rdx <- (rbp - 816) (rdx <- arr1)
	movl	-824(%rbp), %eax						# eax <- (rbp - 824) (eax <- i)
	cltq
	salq	$2, %rax								# eax <- eax * 4 (eax <- i * 4)
	addq	%rdx, %rax								# eax <- eax + rdx (eax <- arr1 + i * 4)
	movq	%rax, %rsi								# rsi <- rax (rsi <- arr1 + i * 4)
	leaq	.LC5(%rip), %rax						# rax <- address of f-string (LC5)
	movq	%rax, %rdi								# rdi <- rax (address of f-string)
	movl	$0, %eax								# eax <- 0
	call	__isoc99_scanf@PLT						# return scanf function call
	addl	$1, -824(%rbp)							# (rbp - 824) <- (rbp - 824) + 1 (i <- i + 1)
.L13:												# scanf loop <line 40-43>	
	movl	-828(%rbp), %eax						# eax <- (rbp - 828) (eax <- n)
	cmpl	%eax, -824(%rbp)						# compare i with n i.e. i < n
	jl	.L14										# if i < n then jump to L14
	movl	$0, -820(%rbp)							# (rbp - 820) <- 0 (j <- 0)
	jmp	.L15										# jump to L15
.L16:
	movl	-820(%rbp), %eax						# eax <- (rbp - 820) (eax <- j)
	cltq
	movl	$-1, -416(%rbp,%rax,4)					# (rbp - 416 + j * 4) <- -1 (fr1[j] <- -1)
	addl	$1, -820(%rbp)							# (rbp - 820) <- (rbp - 820) + 1 (j <- j + 1)
.L15:
	movl	-828(%rbp), %eax						# eax <- (rbp - 828) (eax <- n)
	cmpl	%eax, -820(%rbp)						# compare j with n i.e. j < n <for loop at line 40>
	jl	.L16										# if j < n then jump to L16 <for loop at line 45>
	movl	-828(%rbp), %ecx						# ecx <- (rbp - 828) (ecx <- n)
	leaq	-416(%rbp), %rdx						# rdx <- (rbp - 416) (rdx <- fr1)
	leaq	-816(%rbp), %rax						# rax <- (rbp - 816) (rax <- arr1)
	movl	%ecx, %esi								# esi <- ecx (esi <- n)
	movq	%rax, %rdi								# rdi <- rax (rdi <- arr1)
	call	calculateFrequency						# return calculateFrequency function call <line 50>
	movl	-828(%rbp), %edx						# edx <- (rbp - 828) (edx <- n)
	leaq	-416(%rbp), %rcx						# rcx <- (rbp - 416) (rcx <- fr1)
	leaq	-816(%rbp), %rax						# rax <- (rbp - 816) (rax <- arr1)
	movq	%rcx, %rsi								# rsi <- rcx (rsi <- fr1)
	movq	%rax, %rdi								# rdi <- rax (rdi <- arr1)
	call	printArrayWithFrequency					# return printArrayWithFrequency function call <line 52>
	movl	$0, %eax								# eax <- 0
	movq	-8(%rbp), %rdx							# rdx <- (rbp - 8) (rdx <- return address)
	subq	%fs:40, %rdx							# rdx <- rdx - 40 (rdx <- return address - 40)
	je	.L18										# if rdx == 0 then jump to L18
	call	__stack_chk_fail@PLT					# return __stack_chk_fail function call
.L18:
	leave											# leave function
	.cfi_def_cfa 7, 8								
	ret												# return
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
