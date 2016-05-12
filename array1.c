#include <stdio.h>
int main(){
    int arr[2][3] = { {1,2,3},{4,5,6}};//定义一个二维数组
    int (*p)[3]; //定义一个指针p 这个指针指向3这个地址
    p = arr; //指针p指向数组
    printf("二维数组的地址:%p\n", &arr);
    printf("p指针的地址:%p\n", p);
    printf("p指针的地址:%p\n", *p);
    printf("p指针自己的地址:%p\n", &p);
    printf("arr[0][0]的地址:%p\n",*(p+0)+0);
    printf("arr[0][0]的值:%d\n",*(*(p)));
    printf("arr[0][1]的地址:%p\n",*(p)+1);
    printf("arr[0][2]的地址:%p\n",*(p)+2);
    printf("%d\n",*p[0] );
    printf("%d\n",(*p)[0] );
    printf("%d\n",p[0][1] );
    printf("%d\n",*(*(p+0)+0) );
    printf("arr[0][2]的地址:%p\n",*(p+0)+2);
    printf("%p\n",p+0+1 );
    printf("%p\n",*(p+0)+2 );
    //for 二维数组
    int i ;
    int j ;
    printf("用指针打印二维数组：\n");
    for(i = 0; i < 2; i++){
        for(j =0; j < 3; j++){
            //打印地址
            printf("  %p", *(p+i)+j);
        }
        printf("\n");
    }
    int buf[] = {1,3,4,2,5};
    int *ss;
    ss = buf;
    printf("buf[0]地址:%p\n", ss);
    printf("buf[0]值:%d\n", *ss);
    int arr3[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    int (*q)[2][2];
    q = arr3;
    printf("arr3[0][0][0]地址:%p\n",&arr3 );
    printf("arr3[0][0][0]地址:%p\n",q);
    printf("arr3[0][0][0]地址:%p\n",*(*(q+0)+0)+0);
    printf("arr3[1][1][1]值:%d\n",*(*(*(q+1)+1)+1));
    return 0;
}