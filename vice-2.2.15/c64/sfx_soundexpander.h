/*
 * sfx_soundexpander.h
 *
 * Written by
 *  Marco van den Heuvel <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_SFX_SOUNDEXPANDER_H
#define VICE_SFX_SOUNDEXPANDER_H

#include "types.h"
#include "sound.h"

extern int sfx_soundexpander_enabled;

extern int sfx_soundexpander_resources_init(void);
extern int sfx_soundexpander_cmdline_options_init(void);

extern int sfx_soundexpander_sound_machine_calculate_samples(sound_t *psid, SWORD *pbuf, int nr, int interleave, int *delta_t);
extern int sfx_soundexpander_sound_machine_init(sound_t *psid, int speed, int cycles_per_sec);
extern void sfx_soundexpander_sound_machine_close(sound_t *psid);
extern void sfx_soundexpander_sound_machine_store(sound_t *psid, WORD addr, BYTE val);
extern BYTE sfx_soundexpander_sound_machine_read(sound_t *psid, WORD addr);
extern void sfx_soundexpander_sound_reset(void);

extern void REGPARM2 sfx_soundexpander_sound_address_store(WORD addr, BYTE value);
extern void REGPARM2 sfx_soundexpander_sound_register_store(WORD addr, BYTE value);
extern BYTE REGPARM1 sfx_soundexpander_sound_read(WORD addr);
extern BYTE REGPARM1 sfx_soundexpander_piano_read(WORD addr);

#endif