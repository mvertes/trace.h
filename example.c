#include <assert.h>
#include "trace.h"

int main(int argc, char **argv)
{
	int a = 10;
	double b = 1.0;

	t_d(a += 5 * 3);
	t_v(assert(a == 25));
	t_d(t_d(a));
	t_s(argv[0]);
	t_g(b / 7.0);
	t_p(&b);
	return 0;
}
