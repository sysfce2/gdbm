/* gdbmexists.c - Check to see if a key exists */

/* This file is part of GDBM, the GNU data base manager.
   Copyright (C) 1993, 2007  Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */

/* Include system configuration before all else. */
#include "autoconf.h"

#include "gdbmdefs.h"
#include "gdbmerrno.h"

/* This is nothing more than a wrapper around _gdbm_findkey().  The
   point?  It doesn't alloate any memory. */

int
gdbm_exists (gdbm_file_info *dbf, datum key)
{
  char *find_data;		/* Dummy */
  int hash_val;			/* Dummy */

  return (_gdbm_findkey (dbf, key, &find_data, &hash_val) >= 0);
}
