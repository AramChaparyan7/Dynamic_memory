#include <stdio.h>
#include <stdlib.h>

float* calloc_float(const int size,const size_t sz){
	float *p=(float*)malloc(size*sz);
	for(int i=0;i<size;++i){
		scanf("%f",p+i);
	}
	return p;
}
