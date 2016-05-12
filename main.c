#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "head.h"
int main(){
    int i = 5;
    int n1 = fun(i);
    printf("n = %d\n", n1);
    //二级指针
    int  s = 10;
    int *p = &s;
    int **pp = &p;
    printf("s的地址:%p\n",&s);
    printf("*p的地址:%p\n",p);
    printf("*p本身的地址:%p\n",&p);
    printf("**pp的地址:%p\n", pp);
    //用二级指针改变s的值
    **pp = 200;
    printf("s改变后的值为:%d\n", s);
    return 0;
}

int fun(int n){
    if(n ==1){
        return 1;
    }
    return n * fun(n-1);
}