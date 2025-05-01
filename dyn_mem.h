#include <stdlib.h>

void* custom_calloc(size_t,size_t);
void* custom_realloc(void*,size_t);
int* my_realloc(const int size,int* arr,const int newsize);
int* malloc_int(const int size);
float* calloc_float(const int size,const int size_t);
char* malloc_char(char* str);

