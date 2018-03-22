#include <stdio.h>
int main(){
    char *str[] = {"aman", "shivani", "sumit", "prashant", "prince"};
    for(int i=0; i < sizeof(str)/sizeof(str[0]); i++){
        printf("str[%d] : %s \n",i,str[i]);
    }
    return 0;
}