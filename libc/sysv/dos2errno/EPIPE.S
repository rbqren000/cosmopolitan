//	generated by libc/sysv/dos2errno.sh
#include "libc/nt/errors.h"
#ifndef __x86_64__
        .end
#endif
	.macro	.e doscode systemv
	.short	\doscode
	.long	\systemv
	.endm
	.section .sort.rodata.dos2errno.2,"a",@progbits
	.globl	kDos2Errno.EPIPE
	.type	kDos2Errno.EPIPE,@object
kDos2Errno.EPIPE:
	.e	kNtErrorGracefulDisconnect,EPIPE
	.e	kNtErrorPipeNotConnected,EPIPE
	.e	WSAEDISCON,EPIPE
