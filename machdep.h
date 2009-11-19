/* -*- mode: C; c-file-style: "k&r"; -*-
 *---------------------------------------------------------------------------*
 *
 * Copyright (c) 2000, Johan Bengtsson
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *---------------------------------------------------------------------------*/

#ifndef MACHDEP_H
#define MACHDEP_H

#include <unistd.h>
#ifdef __minix
#include <sys/time.h>
#include <sys/times.h>
#include <sys/types.h>

struct rusage {
     struct timeval ru_utime;
     struct timeval ru_stime;
};

pid_t wait4(pid_t pid, int *status, int options, struct rusage *rusage);
#endif

typedef struct {
     unsigned long utime_ms;
     unsigned long stime_ms;
     unsigned long rss_kb;
     unsigned long vsize_kb;
} memtime_info_t;

pid_t sampling_fork();
int get_sample(memtime_info_t *info);
unsigned long get_time();
int set_mem_limit(unsigned long maxbytes);
int set_cpu_limit(unsigned long maxseconds);

#endif /* MACHDEP_H */
