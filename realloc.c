#include <stdio.h>
#include <stdlib.h>

int* my_realloc(const int size,int* arr,const int newsize){
	int *p=(int*)realloc(arr,size*sizeof(int));
	for(int i=size;i<newsize;++i){
		scanf("%d",p+i);
	}
	return p;
}
