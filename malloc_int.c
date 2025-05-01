#include <stdio.h>
#include <stdlib.h>

int* malloc_int(const int size){
	int *p=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;++i){
		scanf("%d",p+i);
	}
	return p;
}
