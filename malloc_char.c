#include <stdio.h>
#include <stdlib.h>

char* malloc_char(char *str){
	scanf("%s",str);
	int size=0;
	while(*(str+size)){
		++size;
	}
	char *p=(char*)malloc(size*sizeof(char));
	for(int i=0;i<size;++i){
		*(p+i)=*(str+i);
	}
	return p;
}
