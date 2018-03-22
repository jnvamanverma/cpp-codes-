#include<stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area = LENGTH * WIDTH ;
    printf("area is %d %C", area, NEWLINE);
    printf("%c",NEWLINE);
    return 0;
}