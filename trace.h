/*
  Macros for temporary debug traces.
  Copyright (c) 2008 Marc Vertes <mvertes@free.fr>
 
  Enclose your statements with t_X() to instrument
  your code and output automatic smart traces with
  filename, function, line number and value of expression.
  X follows the printf(3) convention for types and can be:
  c (char), d (decimal int), g (floating point double),
  p (hexa pointer), s (string), u (unsigned), x (hexa int),
  v (void)
*/

#ifndef TRACE_H
#define TRACE_H

#include <stdio.h>

#define _tr(fmt, type, exp) { \
	type ___ = (exp); \
	fprintf(stderr, "[%s:%d %s] %s: " fmt, \
		__FILE__, __LINE__, __func__, #exp, ___); ___; }

#define t_c(s)	_tr("'%c'\n", char, s)
#define t_d(s)	_tr("%ld\n", long int, s)
#define t_g(s)	_tr("%g\n", double, s)
#define t_i(s)	_tr("%d\n", int, s)
#define t_p(s)	_tr("%p\n", void *, s)
#define t_s(s)	_tr("'%s'\n", char *, s)
#define t_u(s)	_tr("%lu\n", unsigned long int, s)
#define t_x(s)	_tr("0x%lx\n", unsigned long int, s)
#define t_v(s)  {fprintf(stderr, "[%s:%d %s] %s\n", __FILE__, __LINE__, __func__, #s); (void)(s);}

#endif /* TRACE_H */
