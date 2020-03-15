	.file	"ArithAssembly.c"
	.text
	.globl	switchStmt
	.def	switchStmt;	.scl	2;	.type	32;	.endef
	.seh_proc	switchStmt
switchStmt:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	cmpl	$1, 16(%rbp)
	je	.L2
	cmpl	$2, 16(%rbp)
	je	.L3
	jmp	.L6
.L2:
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L3:
	movl	-4(%rbp), %eax
	subl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	jmp	.L5
.L6:
	movl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
	nop
.L5:
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	ipwr_for
	.def	ipwr_for;	.scl	2;	.type	32;	.endef
	.seh_proc	ipwr_for
ipwr_for:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L8
.L10:
	movl	24(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L9
	movl	-4(%rbp), %eax
	imull	16(%rbp), %eax
	movl	%eax, -4(%rbp)
.L9:
	movl	16(%rbp), %eax
	imull	%eax, %eax
	movl	%eax, 16(%rbp)
	shrl	24(%rbp)
.L8:
	cmpl	$0, 24(%rbp)
	jne	.L10
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	resum
	.def	resum;	.scl	2;	.type	32;	.endef
	.seh_proc	resum
resum:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L12
.L13:
	movl	-4(%rbp), %eax
	imull	16(%rbp), %eax
	movl	%eax, -4(%rbp)
	decl	16(%rbp)
.L12:
	cmpl	$1, 16(%rbp)
	jg	.L13
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	absdifv2
	.def	absdifv2;	.scl	2;	.type	32;	.endef
	.seh_proc	absdifv2
absdifv2:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	cmpl	24(%rbp), %eax
	jle	.L15
	movl	16(%rbp), %eax
	subl	24(%rbp), %eax
	jmp	.L16
.L15:
	movl	24(%rbp), %eax
	subl	16(%rbp), %eax
.L16:
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	absdif
	.def	absdif;	.scl	2;	.type	32;	.endef
	.seh_proc	absdif
absdif:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	cmpl	24(%rbp), %eax
	jle	.L19
	movl	16(%rbp), %eax
	subl	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L20
.L19:
	movl	24(%rbp), %eax
	subl	16(%rbp), %eax
	movl	%eax, -4(%rbp)
.L20:
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	gt
	.def	gt;	.scl	2;	.type	32;	.endef
	.seh_proc	gt
gt:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	cmpl	24(%rbp), %eax
	setg	%al
	movzbl	%al, %eax
	popq	%rbp
	ret
	.seh_endproc
	.globl	simplecomparison
	.def	simplecomparison;	.scl	2;	.type	32;	.endef
	.seh_proc	simplecomparison
simplecomparison:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	16(%rbp), %eax
	cmpl	24(%rbp), %eax
	jle	.L25
	movl	$1, %eax
	jmp	.L26
.L25:
	movl	$-1, %eax
.L26:
	popq	%rbp
	ret
	.seh_endproc
	.globl	simplebitcomparison
	.def	simplebitcomparison;	.scl	2;	.type	32;	.endef
	.seh_proc	simplebitcomparison
simplebitcomparison:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$0, 24(%rbp)
	sete	%al
	movzbl	%al, %eax
	andl	16(%rbp), %eax
	testl	%eax, %eax
	je	.L28
	movl	$-1, %eax
	jmp	.L27
.L28:
.L27:
	popq	%rbp
	ret
	.seh_endproc
	.globl	arith
	.def	arith;	.scl	2;	.type	32;	.endef
	.seh_proc	arith
arith:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	%r8d, 32(%rbp)
	movl	16(%rbp), %edx
	movl	24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	32(%rbp), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	16(%rbp), %eax
	addl	$4, %eax
	movl	%eax, -12(%rbp)
	movl	24(%rbp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	sall	$4, %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-8(%rbp), %eax
	imull	-20(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
