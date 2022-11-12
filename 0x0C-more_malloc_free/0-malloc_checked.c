#include "main.h"
/**
 * *malloc_checked - allocates the specified memory space
 * @int b: Bytes to be allocated.
 * Returns: Pointer to the memory location
 */
void *malloc_checked(unsigned int b) {
	void *p;

	p = malloc(b);
	if (p == NULL) {
		exit(98);
	} else {
		return (p);
	}
}
