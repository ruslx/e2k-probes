	.file	"test.c"
	.ignore	ld_st_style
	.ignore	strict_delay
	.text
	.global	main
	.type	main, #function
	.align	8
main:
	{
	  setwd	wsz = 0x8, nfx = 0x1, dbl = 0x0
	  setbn	rsz = 0x3, rbs = 0x4, rcur = 0x0
	  disp	%ctpr1, puts
	}
	{
	  addd,0	0x0, [ _f64,_lts0 .LC.2 ], %b[0]
	}
	{
	  nop 2
	  getsp,0	_f32s,_lts0 0xfffffff0, %r2
	}
.LCS.1:
	{
	  call	%ctpr1, wbs = 0x4
	}
	{
	  nop 5
	  return	%ctpr3
	  addd,0	0x0, 0x0, %r0
	}
	{
	  ct	%ctpr3
	}
.LCS.2:
	.size	main, .- main
	.section .rodata
	.align	16
.LC.2:
	.ascii	"Hello World\000"
	.weak	elbrus_optimizing_compiler_v1.23.20_Sep__4_2019
	elbrus_optimizing_compiler_v1.23.20_Sep__4_2019 = 0x0
