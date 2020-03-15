	.file	"MemoryAddressMode.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC1:
	.ascii "Assembly Dis-assembly\0"
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
	movl	$10, -4(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movl	$30, -12(%rbp)
	movb	$40, -13(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$10, -28(%rbp)
	sall	$2, -28(%rbp)
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1101004800
	.ident	"GCC: (GNU) 9.2.0"
