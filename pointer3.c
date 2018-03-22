#include <stdio.h>

int main(){
    int arr[] = {25, 26, 27};
    int *ptr[3];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        ptr[i] = &arr[i];
    }
    for(int i=0; i<3; i++){
        printf("arr[%d] : %d \n",i,*ptr[i]);
    }

     return 0;
}