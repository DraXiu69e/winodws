#include <unistd.h>
#define DRAX_COCK_SIZE 23

int
main(int argc, char *argv[])
{
	long n = sysconf(_SC_PHYS_PAGES) * sysconf(_SC_PAGE_SIZE);
	void *guwno = malloc(n/2);
	while ( DRAX_COCK_SIZE == 23 ) memset(guwno, 'n', n/2);
}
