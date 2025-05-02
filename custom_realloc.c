#include <string.h>
#include <stdlib.h>

void * custom_realloc(void* ptr,size_t size){
	if(ptr){
		free(ptr);
	}
	void *p=malloc(size);
	memcpy(p,ptr,size);
	return p;
}
