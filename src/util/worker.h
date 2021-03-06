/*
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
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */
#ifndef _FR_WORKER_H
#define _FR_WORKER_H
/**
 * $Id$
 *
 * @file util/worker.h
 * @brief Functions and data structures for worker threads.
 *
 * @copyright 2016 Alan DeKok <aland@freeradius.org>
 */
RCSIDH(worker_h, "$Id$")

#include <freeradius-devel/util/channel.h>
#include <freeradius-devel/util/transport.h>
#include <freeradius-devel/heap.h>
#include <freeradius-devel/event.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  A data structure to track the worker.
 *
 *  Once spawned, workers exist until they choose to exit.
 */
typedef struct fr_worker_t fr_worker_t;

void *fr_worker(void *arg);

#ifdef __cplusplus
}
#endif

#endif /* _FR_WORKER_H */
