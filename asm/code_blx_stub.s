
	.include "macro.inc"

	thumb_func_start ClearOam_t
ClearOam_t: @ 0x0809FA90
	bx pc
	nop
_0809FA94:
	.byte 0x1A, 0x82, 0xFD, 0xEA

	thumb_func_start TmApplyTsa_t
TmApplyTsa_t: @ 0x0809FA98
	bx pc
	nop
_0809FA9C:
	.byte 0x66, 0x82, 0xFD, 0xEA

	thumb_func_start sub_809FAA0
sub_809FAA0: @ 0x0809FAA0
	bx pc
	nop
_0809FAA4:
	.byte 0x3F, 0x82, 0xFD, 0xEA

	thumb_func_start sub_809FAA8
sub_809FAA8: @ 0x0809FAA8
	bx pc
	nop
_0809FAAC:
	.byte 0xE0, 0x81, 0xFD, 0xEA

	thumb_func_start sub_809FAB0
sub_809FAB0: @ 0x0809FAB0
	bx pc
	nop
_0809FAB4:
	.byte 0x49, 0x82, 0xFD, 0xEA

	thumb_func_start sub_809FAB8
sub_809FAB8: @ 0x0809FAB8
	bx pc
	nop

	.arm

	b sub_8000360
