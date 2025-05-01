#include <stdio.h>
#include "dyn_mem.h"

int main(){
	int n=0;
	scanf("%d",&n);
	int *p=malloc_int(n);
	for(int i=0;i<n;++i){
		printf("%d ",p[i]);
	}
	printf("\n");
	char str[100];
	char *cp=malloc_char(str);
	printf("%s\n",cp);
	float* fp=calloc_float(n,sizeof(float));
	for(int i=0;i<n;++i){
		printf("%f ",fp[i]);
	}
	printf("\n");
	int a=0;
	scanf("%d",&a);
	int *rp=my_realloc(n,p,a);
	for(int i=0;i<a;++i){
		printf("%d ",rp[i]);
	}
	printf("\n");
	return 0;
}
