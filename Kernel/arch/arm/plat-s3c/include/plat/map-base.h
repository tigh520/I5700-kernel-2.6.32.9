/* linux/arch/arm/plat-s3c/include/plat/map-base.h
 *
 * Copyright 2003, 2007 Simtec Electronics
 *	http://armlinux.simtec.co.uk/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C - Memory map definitions (virtual addresses)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_PLAT_MAP_H
#define __ASM_PLAT_MAP_H __FILE__

/* Fit all our registers in at 0xF4000000 upwards, trying to use as
 * little of the VA space as possible so vmalloc and friends have a
 * better chance of getting memory.
 *
 * we try to ensure stuff like the IRQ registers are available for
 * an single MOVS instruction (ie, only 8 bits of set data)
 */

#define S3C_ADDR_BASE	(0xF4000000)

#ifndef __ASSEMBLY__
#define S3C_ADDR(x)	((void __iomem __force *)S3C_ADDR_BASE + (x))
#else
#define S3C_ADDR(x)	(S3C_ADDR_BASE + (x))
#endif

#define S3C_VA_IRQ	S3C_ADDR(0x00000000)	/* irq controller(s) */
#define S3C_VA_SYS	S3C_ADDR(0x00100000)	/* system control */
#define S3C_VA_MEM	S3C_ADDR(0x00200000)	/* system control */
#define S3C_VA_TIMER	S3C_ADDR(0x00300000)	/* timer block */
#define S3C_VA_WATCHDOG	S3C_ADDR(0x00400000)	/* watchdog */
#define S3C_VA_LCD	S3C_ADDR(0x00600000)	/* LCD */
#define S3C_VA_UART	S3C_ADDR(0x01000000)	/* UART */
#define S3C_VA_SROMC	S3C_ADDR(0x01100000)	/* SROM SFR */
#define S3C_VA_SYSTIMER	S3C_ADDR(0x01200000)	/* SROM SFR */
#define S3C_VA_NAND     S3C_ADDR(0x01400000)    /* NAND */
#define S3C_VA_ONENAND	S3C_ADDR(0x01800000)	/* onenand */

#endif /* __ASM_PLAT_MAP_H */
