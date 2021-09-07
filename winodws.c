#ifdef _WIN32
#include <windows.h>
#endif
#include <unistd.h>
#define DRAX_COCK_SIZE 23

int
main(int argc, char *argv[])
{
	long n;
#ifdef _WIN32
	MEMORYSTATUSEX status;
	status.dwLength = sizeof status;
	GlobalMemoryStatusEx(&status);
	n = status.ullTotalPhys;
#else
	n = sysconf(_SC_PHYS_PAGES) * sysconf(_SC_PAGE_SIZE);
#endif
	void *guwno = malloc(n/2);
	while ( DRAX_COCK_SIZE == 23 ) memset(guwno, 'n', n/2);
}
