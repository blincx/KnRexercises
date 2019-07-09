	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2               ## -- Begin function main
LCPI0_0:
	.long	1082137422              ## float 4.00333309
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	leaq	L_.str(%rip), %rdi
	movss	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movl	$0, -4(%rbp)
	movss	%xmm0, -8(%rbp)
	cvttss2si	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	cvttss2si	-8(%rbp), %rcx
	movq	%rcx, -24(%rbp)
	movq	-24(%rbp), %rsi
	movb	$0, %al
	callq	_printf
	cmpl	$5, -12(%rbp)
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	jle	LBB0_2
## %bb.1:
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -44(%rbp)         ## 4-byte Spill
LBB0_3:
	movslq	-12(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jge	LBB0_5
## %bb.4:
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	jmp	LBB0_6
LBB0_5:
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -52(%rbp)         ## 4-byte Spill
LBB0_6:
	leaq	L_.str.6(%rip), %rdi
	leaq	L_.str.5(%rip), %rax
	movb	%al, %cl
	movl	$111, -28(%rbp)
	movb	%cl, -29(%rbp)
	movl	-28(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	-4(%rbp), %esi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$64, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%lu"

L_.str.1:                               ## @.str.1
	.asciz	"nope"

L_.str.2:                               ## @.str.2
	.asciz	"yeps"

L_.str.3:                               ## @.str.3
	.asciz	"A1"

L_.str.4:                               ## @.str.4
	.asciz	"A2"

L_.str.5:                               ## @.str.5
	.asciz	"B"

L_.str.6:                               ## @.str.6
	.asciz	"%d"


.subsections_via_symbols
