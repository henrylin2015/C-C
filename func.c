#include <stdio.h>
#include <string.h>

int add(int a,int b){
    return a + b;
}
int max(int a,int b){
    return a > b ? a:b;
}
/***
    题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
    程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）
 */
int tuzi(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }
    return tuzi(n-1) + tuzi(n-2);
}
char *mystrchar(char *s,char str){
    while (*s) {
        if( *s == str){
            return s;
        }
        s++;
    }
    return NULL;
}
int main(){
    int (*p)(int ,int);
    int input;
    int num;
    scanf("%d",&input);
    if(input == 0){
        p  = add;
    }else if(input ==1) {
        p = max;
    }
    num = p(5,7);
    printf("num = %d\n",num );
    printf("查找字符在函数\n");
    char str[] = "hello world!";
    char *ss = mystrchar(str,'e');
    printf("*ss = %s\n", ss);
    printf("%p\n", ss);
    printf("兔子生崽\n");
    int tt = tuzi(40);
    printf("%d\n",tt );
    return 0;
}