#ifndef ASM_MACH_SPICA_REV_H

#define ASM_MACH_SPICA_REV_H

#define CONFIG_SPICA_TEST_REV00	0x00	
#define CONFIG_SPICA_TEST_REV01	0x01	
#define CONFIG_SPICA_TEST_REV02	0x02	
#define CONFIG_SPICA_TEST_REV03	0x03	

#ifdef CONFIG_BOARD_REVISION
#define CONFIG_SPICA_REV	0x02 //CONFIG_BOARD_REVISION
#else
#error	"Board revision is not defined!"
#endif

#endif
