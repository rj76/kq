/*
   KQ is Copyright (C) 2002 - Josh Bolduc

   This file is part of KQ... a freeware RPG.

   KQ is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 2, or (at your
   option) any later version.

   KQ is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with KQ; see the file COPYING.  If not, write to
   the Free Software Foundation,
       675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __ITEMMENU_H
#define __ITEMMENU_H

void camp_item_menu (void);     /*  menu.c  */
int check_inventory (int, int); /*  many functions ;)  */
int item_effects (int, int, int);       /*  heroc.c  */
void remove_item (int, int);    /*  (eqp|shop)menu.c, heroc.c  */

extern int useup_item (int);

#define MAX_ITEMS           9

#endif /*  __ITEMMENU_H  */