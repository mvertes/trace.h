# trace.h
Macros for temporary debug traces

## Installation
Install with [clib]
```sh
$ clib install mvertes/trace.h
```

## Usage
Enclose your statements with `t_X()` to instrument your code and
output automatic smart traces with filename, function, line number
and value of expression, where type *X* can be: *c* (char), *d*
(decimal int), *g* (floating point double), *p* (hexa-decimal
pointer), *s* (string), *u* (unsigned), *x* (hexa-decimal int), *v*
(void), following [printf(3)] convention for types.

## Example
```c
#include <stdio.h>
#include "trace.h"

int main(int argc, char **argv)
{
	t_s(argv[0]);
	t_d(printf("Hello World!\n"));
	return 0;
}
```

Outputs:
```sh
[hello.c:6 main] './hello'
Hello World!
[hello.c:7 main] printf("Hello World!\n"): 13
```

## License
MIT

[clib]: https://github.com/clibs/clib
[printf(3)]: http://man7.org/linux/man-pages/man3/printf.3.html
