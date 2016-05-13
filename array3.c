#include <stdio.h>
#include <string.h>


int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int (*p)[4]; //数组指针
    p = arr;
    printf("arr[0][0]地址:%p %p\n",p, *(p+0) );
    printf("arr[0][1]地址:%p\n", *(p)+1 );
    printf("arr[0][2]地址:%p\n", *(p)+2 );
    printf("arr[0][3]地址:%p\n", *(p)+3 );
    printf("arr[0][3]值:%d\n", *(*(p)+3) );
    printf("arr[1][0]地址:%p\n",p+1 );
    printf("arr[1][0]值:%d\n",*(*(p+1)) );
    printf("arr[2][1]地址:%p\n", *(p+2)+1 );
    printf("arr[2][1]值:%d\n", *(*(p+2)+1) );
    return 0;
}