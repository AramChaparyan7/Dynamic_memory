#include <stdlib.h>
#include <string.h>

void * custom_calloc(size_t count,size_t size){
	size_t t=count*size;
	void *p=malloc(t);
	if(p){
		memset(p,0,t);
	}
	return p;
}
