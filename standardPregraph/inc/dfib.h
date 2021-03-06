/*
 * inc/dfib.h
 *
 * This file is part of SOAPdenovo.
 *
 */

/*-
 * Copyright 1997, 1998-2003 John-Mark Gurney.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *  $Id: dfib.h,v 1.8 2007/04/24 12:16:41 zerbino Exp $
 *
 */

#ifndef _DFIB_H_
#define _DFIB_H_

#include <stdio.h>
#include "def2.h" //#include "globals.h"

/* functions for key heaps */
DFibHeap * dfh_makekeyheap ( void );
DFibHeapNode * dfh_insertkey ( DFibHeap *, Time, unsigned int );
Time dfh_replacekey ( DFibHeap *, DFibHeapNode *, Time );
unsigned int dfh_replacekeydata ( DFibHeap *, DFibHeapNode *, Time, unsigned int );

unsigned int dfh_extractmin ( DFibHeap * );
unsigned int dfh_replacedata ( DFibHeapNode *, unsigned int );
unsigned int dfh_delete ( DFibHeap *, DFibHeapNode * );
void dfh_deleteheap ( DFibHeap * );

// DEBUG
IDnum dfibheap_getSize ( DFibHeap * );
Time dfibheap_el_getKey ( DFibHeapNode * );
// END DEBUG

#endif              /* _FIB_H_ */
