/*
 *
 * Copyright (C) 2017 Samsung Electronics
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <arch/io.h>
#include <soc/dmc_lpddr4phy_init.h>

// phyinit ver A-2017.09

volatile unsigned long const __LPDDR4PHY_REGS_BASE[8] = {
	(unsigned long)(TRAV_LPDDR4PHY_MIF0),
	(unsigned long)(TRAV_LPDDR4PHY_MIF1),
	(unsigned long)(TRAV_LPDDR4PHY_MIF2),
	(unsigned long)(TRAV_LPDDR4PHY_MIF3),
	(unsigned long)(TRAV_LPDDR4PHY_MIF4),
	(unsigned long)(TRAV_LPDDR4PHY_MIF5),
	(unsigned long)(TRAV_LPDDR4PHY_MIF6),
	(unsigned long)(TRAV_LPDDR4PHY_MIF7),
};

void load_pie_binary(int ch)
{
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90000 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90001 << 2), 0x400  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90002 << 2), 0x10e  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90003 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90004 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90005 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90029 << 2), 0xb	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002a << 2), 0x480  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002b << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002c << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002d << 2), 0x448  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002e << 2), 0x139  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9002f << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90030 << 2), 0x478  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90031 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90032 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90033 << 2), 0xe8   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90034 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90035 << 2), 0x2	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90036 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90037 << 2), 0x139  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90038 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90039 << 2), 0x7c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003a << 2), 0x139  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003b << 2), 0x44   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003c << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003d << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003e << 2), 0x14f  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9003f << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90040 << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90041 << 2), 0x47   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90042 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90043 << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90044 << 2), 0x4f   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90045 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90046 << 2), 0x179  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90047 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90048 << 2), 0xe0   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90049 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004b << 2), 0x7c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004c << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004d << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004e << 2), 0x1	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9004f << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90050 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90051 << 2), 0x45a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90052 << 2), 0x9	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90053 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90054 << 2), 0x448  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90055 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90056 << 2), 0x40   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90057 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90058 << 2), 0x179  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90059 << 2), 0x1	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005a << 2), 0x618  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005b << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005c << 2), 0x40c0 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005d << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005e << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9005f << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90060 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90061 << 2), 0x48   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90062 << 2), 0x4040 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90063 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90064 << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90065 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90066 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90067 << 2), 0x48   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90068 << 2), 0x40   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90069 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006a << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006b << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006c << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006d << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9006f << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90070 << 2), 0x78   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90071 << 2), 0x549  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90072 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90073 << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90074 << 2), 0xd49  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90075 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90076 << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90077 << 2), 0x94a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90078 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90079 << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007a << 2), 0x441  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007b << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007c << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007d << 2), 0x42   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007e << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9007f << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90080 << 2), 0x1	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90081 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90082 << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90083 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90084 << 2), 0xe0   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90085 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90086 << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90087 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90088 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90089 << 2), 0x9	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008a << 2), 0x3c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008b << 2), 0x149  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008c << 2), 0x9	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008d << 2), 0x3c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008e << 2), 0x159  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9008f << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90090 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90091 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90092 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90093 << 2), 0x3c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90094 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90095 << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90096 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90097 << 2), 0x48   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90098 << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90099 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009a << 2), 0x58   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009b << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009c << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009d << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009e << 2), 0x2	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9009f << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a0 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a1 << 2), 0x5	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a2 << 2), 0x7c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a3 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a4 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a5 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a6 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40000 << 2), 0x811  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40020 << 2), 0x880  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40040 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40060 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40001 << 2), 0x4008 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40021 << 2), 0x83   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40041 << 2), 0x4f   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40061 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40002 << 2), 0x4040 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40022 << 2), 0x83   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40042 << 2), 0x51   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40062 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40003 << 2), 0x811  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40023 << 2), 0x880  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40043 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40063 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40004 << 2), 0x720  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40024 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40044 << 2), 0x1740 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40064 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40005 << 2), 0x16   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40025 << 2), 0x83   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40045 << 2), 0x4b   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40065 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40006 << 2), 0x716  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40026 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40046 << 2), 0x2001 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40066 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40007 << 2), 0x716  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40027 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40047 << 2), 0x2800 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40067 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40008 << 2), 0x716  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40028 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40048 << 2), 0xf00  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40068 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40009 << 2), 0x720  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40029 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40049 << 2), 0x1400 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40069 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000a << 2), 0xe08  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002a << 2), 0xc15  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000b << 2), 0x623  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002b << 2), 0x15   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004b << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006b << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000c << 2), 0x4028 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002c << 2), 0x80   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004c << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006c << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000d << 2), 0xe08  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002d << 2), 0xc1a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004d << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006d << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000e << 2), 0x623  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002e << 2), 0x1a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4000f << 2), 0x4040 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4002f << 2), 0x80   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4004f << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4006f << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40010 << 2), 0x2604 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40030 << 2), 0x15   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40050 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40070 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40011 << 2), 0x708  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40031 << 2), 0x5	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40051 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40071 << 2), 0x2002 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40012 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40032 << 2), 0x80   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40052 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40072 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40013 << 2), 0x2604 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40033 << 2), 0x1a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40053 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40073 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40014 << 2), 0x708  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40034 << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40054 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40074 << 2), 0x2002 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40015 << 2), 0x4040 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40035 << 2), 0x80   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40055 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40075 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40016 << 2), 0x60a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40036 << 2), 0x15   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40056 << 2), 0x1200 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40076 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40017 << 2), 0x61a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40037 << 2), 0x15   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40057 << 2), 0x1300 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40077 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40018 << 2), 0x60a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40038 << 2), 0x1a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40058 << 2), 0x1200 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40078 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40019 << 2), 0x642  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40039 << 2), 0x1a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40059 << 2), 0x1300 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x40079 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4001a << 2), 0x4808 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4003a << 2), 0x880  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4005a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x4007a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a7 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a8 << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900a9 << 2), 0x11a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900aa << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ab << 2), 0x7aa  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ac << 2), 0x2a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ad << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ae << 2), 0x7b2  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900af << 2), 0x2a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b0 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b1 << 2), 0x7c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b2 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b3 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b4 << 2), 0x2a8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b5 << 2), 0x129  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b6 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b7 << 2), 0x370  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b8 << 2), 0x129  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900b9 << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ba << 2), 0x3c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900bb << 2), 0x1a9  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900bc << 2), 0xc	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900bd << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900be << 2), 0x199  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900bf << 2), 0x14   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c0 << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c1 << 2), 0x11a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c2 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c3 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c4 << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c5 << 2), 0xe	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c6 << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c7 << 2), 0x199  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c8 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900c9 << 2), 0x8568 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ca << 2), 0x108  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900cb << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900cc << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900cd << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ce << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900cf << 2), 0x1d8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d0 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d1 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d2 << 2), 0x8558 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d3 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d4 << 2), 0x70   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d5 << 2), 0x788  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d6 << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d7 << 2), 0x1ff8 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d8 << 2), 0x85a8 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900d9 << 2), 0x1e8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900da << 2), 0x50   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900db << 2), 0x798  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900dc << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900dd << 2), 0x60   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900de << 2), 0x7a0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900df << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e0 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e1 << 2), 0x8310 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e2 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e3 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e4 << 2), 0xa310 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e5 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e6 << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e7 << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e8 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900e9 << 2), 0x6e   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ea << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900eb << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ec << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ed << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ee << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ef << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f0 << 2), 0x8310 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f1 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f2 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f3 << 2), 0xa310 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f4 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f5 << 2), 0x1ff8 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f6 << 2), 0x85a8 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f7 << 2), 0x1e8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f8 << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900f9 << 2), 0x798  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900fa << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900fb << 2), 0x78   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900fc << 2), 0x7a0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900fd << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900fe << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x900ff << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90100 << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90101 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90102 << 2), 0x8b10 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90103 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90104 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90105 << 2), 0xab10 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90106 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90107 << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90108 << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90109 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010a << 2), 0x58   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010b << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010c << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010d << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010e << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9010f << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90110 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90111 << 2), 0x8b10 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90112 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90113 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90114 << 2), 0xab10 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90115 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90116 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90117 << 2), 0x1d8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90118 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90119 << 2), 0x80   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011a << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011b << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011c << 2), 0x18   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011d << 2), 0x7aa  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011e << 2), 0x6a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9011f << 2), 0xa	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90120 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90121 << 2), 0x1e9  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90122 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90123 << 2), 0x8080 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90124 << 2), 0x108  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90125 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90126 << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90127 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90128 << 2), 0xc	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90129 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012a << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012b << 2), 0x9	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012c << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012d << 2), 0x1a9  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9012f << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90130 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90131 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90132 << 2), 0x8080 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90133 << 2), 0x108  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90134 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90135 << 2), 0x7aa  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90136 << 2), 0x6a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90137 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90138 << 2), 0x8568 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90139 << 2), 0x108  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013a << 2), 0xb7   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013b << 2), 0x790  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013c << 2), 0x16a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013d << 2), 0x1f   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9013f << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90140 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90141 << 2), 0x8558 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90142 << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90143 << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90144 << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90145 << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90146 << 2), 0xc	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90147 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90148 << 2), 0x68   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90149 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014a << 2), 0x408  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014b << 2), 0x169  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014c << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014d << 2), 0x8558 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014e << 2), 0x168  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9014f << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90150 << 2), 0x3c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90151 << 2), 0x1a9  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90152 << 2), 0x3	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90153 << 2), 0x370  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90154 << 2), 0x129  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90155 << 2), 0x20   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90156 << 2), 0x2aa  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90157 << 2), 0x9	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90158 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90159 << 2), 0x400  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015a << 2), 0x10e  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015b << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015c << 2), 0xe8   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015d << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015e << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9015f << 2), 0x8140 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90160 << 2), 0x10c  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90161 << 2), 0x10   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90162 << 2), 0x8138 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90163 << 2), 0x10c  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90164 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90165 << 2), 0x7c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90166 << 2), 0x101  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90167 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90168 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90169 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016a << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016b << 2), 0x448  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016c << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016d << 2), 0xf	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016e << 2), 0x7c0  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9016f << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90170 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90171 << 2), 0xe8   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90172 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90173 << 2), 0x47   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90174 << 2), 0x630  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90175 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90176 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90177 << 2), 0x618  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90178 << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90179 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017a << 2), 0xe0   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017b << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017c << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017d << 2), 0x7c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017e << 2), 0x109  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9017f << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90180 << 2), 0x8140 ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90181 << 2), 0x10c  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90182 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90183 << 2), 0x1	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90184 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90185 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90186 << 2), 0x4	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90187 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90188 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90189 << 2), 0x7c8  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9018a << 2), 0x101  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90006 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90007 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90008 << 2), 0x8	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90009 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9000a << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9000b << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0xd00e7 << 2), 0x400  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90017 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x9001f << 2), 0x2a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x90026 << 2), 0x6a   ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d0 << 2), 0x0	  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d1 << 2), 0x101  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d2 << 2), 0x105  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d3 << 2), 0x107  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d4 << 2), 0x10f  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d5 << 2), 0x202  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d6 << 2), 0x20a  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x400d7 << 2), 0x20b  ); 
	apb_wr(__LPDDR4PHY_REGS_BASE[ch] + (0x2003a << 2), 0x2	  ); 
}

