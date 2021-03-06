// -*-c++-*-
/* $Id: seqno.h 1117 2005-11-01 16:20:39Z max $ */

/*
 *
 * Copyright (C) 1998 David Mazieres (dm@uun.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 *
 */


#ifndef _CRYPT_SEQNO_H_
#define _CRYPT_SEQNO_H_ 1

#include "bitvec.h"

class seqcheck {
  u_int64_t bottom;
  const size_t nbits;
  bitvec bv[2];

public:
  seqcheck (size_t n);
  bool check (u_int64_t seqno);
};

#endif /* _CRYPT_SEQNO_H_ */
