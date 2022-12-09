/**
 * @file
 *
 * AMD Family_10 Microcode patch.
 *
 * Fam10 Microcode Patch rev 01000086 for 1041 or equivalent.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/FAMILY/0x10/REVC
 * @e \$Revision: 5832 $   @e \$Date: 2008-04-15 16:30:24 -0700 (Tue, 15 Apr 2008) $
 *
 */
/*
 ******************************************************************************
 *
 * Copyright (c) 2011, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */
/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

// Patch code 01000086 for 1041 and equivalent
CONST MICROCODE_PATCHES ROMDATA CpuF10MicrocodePatch01000086 =
{
0x08,
0x20,
0x01,
0x05,
0x86,
0x00,
0x00,
0x01,
0x00,
0x80,
0x20,
0x00,
0x04,
0xde,
0x30,
0x03,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x41,
0x10,
0x00,
0x00,
0x00,
0xaa,
0xaa,
0xaa,
0xa0,
0x09,
0x00,
0x00,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0x97,
0xd1,
0x7f,
0x00,
0x83,
0x3f,
0x36,
0xc0,
0xa0,
0x1b,
0xf8,
0x13,
0x0e,
0xbf,
0x0c,
0xb4,
0xf2,
0x1f,
0xf8,
0xa7,
0x3c,
0xfc,
0x03,
0xfc,
0x40,
0x03,
0x54,
0x00,
0x92,
0xff,
0xe0,
0xbf,
0xe7,
0xe1,
0x1f,
0xe0,
0x5f,
0x9e,
0xfa,
0xff,
0x9f,
0x87,
0x7f,
0x80,
0x03,
0xf8,
0xff,
0xc6,
0x01,
0x0e,
0xfc,
0xbd,
0x00,
0xa0,
0x2a,
0x69,
0x1f,
0xc0,
0x7f,
0xe0,
0xe0,
0xdf,
0xf0,
0x0f,
0x7f,
0x00,
0xff,
0x81,
0x80,
0x7f,
0xc3,
0x3f,
0xfe,
0x01,
0xfc,
0x07,
0x00,
0xfe,
0x0d,
0xff,
0x3d,
0x00,
0xf0,
0xff,
0xf0,
0x0f,
0xe0,
0x3f,
0x07,
0xf0,
0x6f,
0xf8,
0xc0,
0x3f,
0x80,
0xff,
0x1f,
0xc0,
0xbf,
0xe1,
0x03,
0xff,
0x00,
0xfe,
0x7f,
0x00,
0xff,
0x86,
0xff,
0x1e,
0x00,
0xf8,
0x1f,
0xf8,
0x07,
0xf0,
0xfc,
0x03,
0xf8,
0x37,
0x7f,
0xe0,
0x1f,
0xc0,
0xf0,
0x0f,
0xe0,
0xdf,
0xff,
0x81,
0x7f,
0x00,
0xc3,
0x3f,
0x80,
0x7f,
0xfc,
0x7f,
0x0f,
0x00,
0xf8,
0x0f,
0xfc,
0x03,
0x1b,
0xfe,
0x01,
0xfc,
0xe0,
0x3f,
0xf0,
0x0f,
0x6f,
0xf8,
0x07,
0xf0,
0x80,
0xff,
0xc0,
0x3f,
0xbf,
0xe1,
0x1f,
0xc0,
0x00,
0xfe,
0xbf,
0x07,
0x01,
0xfc,
0x07,
0xfe,
0xfe,
0x0d,
0xff,
0x00,
0x07,
0xf0,
0x1f,
0xf8,
0xf8,
0x37,
0xfc,
0x03,
0x1f,
0xc0,
0x7f,
0xe0,
0xe0,
0xdf,
0xf0,
0x0f,
0x03,
0x00,
0xff,
0xdf,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0xfc,
0x03,
0xf8,
0x0f,
0x01,
0xfc,
0x1b,
0xfe,
0xf0,
0x0f,
0xe0,
0x3f,
0x07,
0xf0,
0x6f,
0xf8,
0xef,
0x01,
0x80,
0xff,
0x81,
0x7f,
0x00,
0xff,
0x3f,
0x80,
0x7f,
0xc3,
0x07,
0xfe,
0x01,
0xfc,
0xff,
0x00,
0xfe,
0x0d,
0x1f,
0xf8,
0x07,
0xf0,
0xfc,
0x03,
0xf8,
0x37,
0xff,
0xf7,
0x00,
0xc0,
0xff,
0xc0,
0x3f,
0x80,
0xe1,
0x1f,
0xc0,
0xbf,
0xfe,
0x03,
0xff,
0x00,
0x86,
0x7f,
0x00,
0xff,
0xf8,
0x0f,
0xfc,
0x03,
0x1b,
0xfe,
0x01,
0xfc,
0xe0,
0xff,
0x7b,
0x00,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x01,
0xfc,
0x07,
0xfe,
0xfe,
0x0d,
0xff,
0x00,
0x00,
0xf0,
0xff,
0x3d,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0x1e,
0x00,
0xf8,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0x81,
0x7f,
0x00,
0xff,
0x3f,
0x80,
0x7f,
0xc3,
0x7f,
0x0f,
0x00,
0xfc,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xc0,
0x3f,
0x80,
0xe1,
0x1f,
0xc0,
0xbf,
0xfe,
0xbf,
0x07,
0x00,
0xfc,
0x07,
0xfe,
0x01,
0x0d,
0xff,
0x00,
0xfe,
0xf0,
0x1f,
0xf8,
0x07,
0x37,
0xfc,
0x03,
0xf8,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0xdf,
0x03,
0x00,
0xfe,
0x03,
0xff,
0xff,
0x86,
0x7f,
0x00,
0x03,
0xf8,
0x0f,
0xfc,
0xfc,
0x1b,
0xfe,
0x01,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x01,
0x80,
0xff,
0xef,
0x7f,
0x00,
0xff,
0x81,
0x80,
0x7f,
0xc3,
0x3f,
0xfe,
0x01,
0xfc,
0x07,
0x00,
0xfe,
0x0d,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xd7,
0x00,
0x80,
0xfb,
0xc0,
0x3f,
0x80,
0xff,
0x1f,
0xc0,
0xbf,
0xe1,
0x03,
0xff,
0x00,
0xfe,
0x7f,
0x00,
0xff,
0x86,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0xfd,
0x6b,
0x00,
0xa0,
0xff,
0xfe,
0xff,
0xcb,
0xf0,
0xef,
0xf5,
0x7f,
0x8f,
0x40,
0x3f,
0x00,
0x83,
0xbf,
0xb7,
0xd7,
0xfc,
0x07,
0xfe,
0x01,
0x0d,
0xff,
0x00,
0xfe,
0xf0,
0xff,
0x3d,
0x00,
0xe4,
0x7f,
0xf9,
0x0f,
0x79,
0xf8,
0x07,
0xf8,
0x80,
0xff,
0xc0,
0x3f,
0xbf,
0xe1,
0x1f,
0xc0,
0x00,
0xfe,
0x03,
0xff,
0xff,
0x86,
0x7f,
0x00,
0x00,
0xf0,
0x32,
0x19,
0x07,
0xf0,
0x1f,
0xf8,
0xf8,
0x37,
0xfc,
0x03,
0x1f,
0xc0,
0x7f,
0xe0,
0xe0,
0xdf,
0xf0,
0x0f,
0x7f,
0x00,
0xff,
0x81,
0x80,
0x7f,
0xc3,
0x3f,
0x0f,
0x00,
0xfc,
0x7f,
0xfc,
0x03,
0xf8,
0x0f,
0x01,
0xfc,
0x1b,
0xfe,
0xf0,
0x0f,
0xe0,
0x3f,
0x07,
0xf0,
0x6f,
0xf8,
0xc0,
0x3f,
0x80,
0xff,
0x1f,
0xc0,
0xbf,
0xe1,
0xbf,
0x07,
0x00,
0xfe,
0x07,
0xfe,
0x01,
0xfc,
0xff,
0x00,
0xfe,
0x0d,
0x1f,
0xf8,
0x07,
0xf0,
0xfc,
0x03,
0xf8,
0x37,
0x7f,
0xe0,
0x1f,
0xc0,
0xf0,
0x0f,
0xe0,
0xdf,
0xff,
0xdf,
0x03,
0x00,
0xfe,
0x03,
0xff,
0x00,
0x86,
0x7f,
0x00,
0xff,
0xf8,
0x0f,
0xfc,
0x03,
0x1b,
0xfe,
0x01,
0xfc,
0xe0,
0x3f,
0xf0,
0x0f,
0x6f,
0xf8,
0x07,
0xf0,
0x80,
0xff,
0xef,
0x01,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x01,
0xfc,
0x07,
0xfe,
0xfe,
0x0d,
0xff,
0x00,
0x07,
0xf0,
0x1f,
0xf8,
0xf8,
0x37,
0xfc,
0x03,
0x00,
0xc0,
0xff,
0xf7,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0xfc,
0x03,
0xf8,
0x0f,
0x01,
0xfc,
0x1b,
0xfe,
0x7b,
0x00,
0xe0,
0xff,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0x81,
0x7f,
0x00,
0xff,
0x3f,
0x80,
0x7f,
0xc3,
0x07,
0xfe,
0x01,
0xfc,
0xff,
0x00,
0xfe,
0x0d,
0xff,
0x3d,
0x00,
0xf0,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xc0,
0x3f,
0x80,
0xe1,
0x1f,
0xc0,
0xbf,
0xfe,
0x03,
0xff,
0x00,
0x86,
0x7f,
0x00,
0xff,
0xf8,
0xff,
0x1e,
0x00,
0xf0,
0x1f,
0xf8,
0x07,
0x37,
0xfc,
0x03,
0xf8,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x00,
0xfc,
0x7f,
0x0f,
0x03,
0xf8,
0x0f,
0xfc,
0xfc,
0x1b,
0xfe,
0x01,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0x07,
0x00,
0xfe,
0xbf,
0xfe,
0x01,
0xfc,
0x07,
0x00,
0xfe,
0x0d,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0xdf,
0x03,
0x00,
0xff,
0x03,
0xff,
0x00,
0xfe,
0x7f,
0x00,
0xff,
0x86,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xef,
0x01,
0x80
};

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */
