	.file	"Pointers.c"
	.text
	.globl	strlen1
	.def	strlen1;	.scl	2;	.type	32;	.endef
	.seh_proc	strlen1
strlen1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
.L2:
	incl	-4(%rbp)
	movq	16(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, 16(%rbp)
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L2
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	strncat1
	.def	strncat1;	.scl	2;	.type	32;	.endef
	.seh_proc	strncat1
strncat1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L5
.L6:
	incq	-8(%rbp)
.L5:
	movq	-8(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L6
	jmp	.L7
.L9:
	movq	24(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, 24(%rbp)
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -8(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	decq	32(%rbp)
.L7:
	cmpq	$0, 32(%rbp)
	je	.L8
	movq	24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L9
.L8:
	movq	-8(%rbp), %rax
	movb	$0, (%rax)
	movq	16(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	my_strncat
	.def	my_strncat;	.scl	2;	.type	32;	.endef
	.seh_proc	my_strncat
my_strncat:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	%r8d, 32(%rbp)
.L12:
	incq	16(%rbp)
	movq	16(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L12
	movl	$0, -4(%rbp)
	jmp	.L13
.L15:
	movl	-4(%rbp), %eax
	cltq
	movq	24(%rbp), %rdx
	addq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	movq	16(%rbp), %rcx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	incl	-4(%rbp)
.L13:
	movl	-4(%rbp), %eax
	cmpl	32(%rbp), %eax
	jge	.L14
	movl	-4(%rbp), %eax
	cltq
	movq	24(%rbp), %rdx
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L15
.L14:
	movl	-4(%rbp), %eax
	cltq
	movq	16(%rbp), %rdx
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	16(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	mystrncat
	.def	mystrncat;	.scl	2;	.type	32;	.endef
	.seh_proc	mystrncat
mystrncat:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rcx
	call	strlen1
	movl	%eax, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L18
.L19:
	movq	24(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, 24(%rbp)
	movl	-8(%rbp), %edx
	movslq	%edx, %rcx
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rcx
	movq	16(%rbp), %rdx
	addq	%rcx, %rdx
	movzbl	(%rax), %eax
	movb	%al, (%rdx)
	incl	-4(%rbp)
	decq	32(%rbp)
.L18:
	cmpq	$0, 32(%rbp)
	jne	.L19
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movl	-4(%rbp), %eax
	cltq
	addq	%rax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
	movq	16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	strncopy1
	.def	strncopy1;	.scl	2;	.type	32;	.endef
	.seh_proc	strncopy1
strncopy1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L22
.L24:
	movq	24(%rbp), %rdx
	leaq	1(%rdx), %rax
	movq	%rax, 24(%rbp)
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rcx
	movq	%rcx, -8(%rbp)
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	decq	32(%rbp)
.L22:
	cmpq	$0, 32(%rbp)
	je	.L25
	movq	24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L24
	jmp	.L25
.L26:
	movq	-8(%rbp), %rax
	leaq	1(%rax), %rdx
	movq	%rdx, -8(%rbp)
	movb	$0, (%rax)
	decq	32(%rbp)
.L25:
	cmpq	$0, 32(%rbp)
	jne	.L26
	movq	16(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Hello \0"
	.align 8
.LC1:
	.ascii "Printing from Copied character Array: %s\12\0"
.LC2:
	.ascii "Length: %d\12\0"
	.align 8
.LC3:
	.ascii "=---===-=--=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-\0"
.LC4:
	.ascii "Hello\0"
.LC5:
	.ascii "World!\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movl	$9, %r8d
	movq	%rax, %rcx
	call	strncopy1
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	strlen1
	movl	%eax, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	leaq	.LC3(%rip), %rcx
	call	puts
	leaq	.LC4(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rax
	movl	$13, %r8d
	movq	%rax, %rcx
	call	my_strncat
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	puts
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
