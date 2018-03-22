#include <stdio.h>

int main(){
    int arr[] = {25, 26, 27};
    int *ptr;
    ptr = arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(n)
    {
        printf("address arr[%d] : %p \n",3-n,ptr);
        printf("value of arr[%d] : %d \n",3-n,*ptr);
        ptr++;
        n--;
    }
    return 0;
}