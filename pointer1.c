#include<stdio.h>

int main(){
    int var = 20;
    int *p;
    p = NULL;
    printf("var %p\n", p);
    printf("&var %p\n", &p);
    printf("*var %d\n", *p);
    return 0;
}