#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//一级指针的间接赋值
void getA(int *p){
    *p = 600;
}
int main01(){
    int a = 10;
    int *p = NULL;
    p = &a;
    *p = 100;
    printf("a = %d\n", a);
    {
        *p = 400;
        printf("a = %d\n",a);
    }
    getA(&a);
    printf("a = %d\n", a);
    return 0;
}

/***
 * 二级指针的间接赋值
 */

int main02(){
    char a[100] = {0};
    char *pp = NULL;
    char **pp2 = NULL;
    pp = a;
    pp2 = &pp;
    strcpy(pp,"hello");
    strcpy(*pp2,"hello world!");
    printf("pp = %s\n", pp);
    printf("a = %s\n", a);
    return 0;
}
/***
 * 二级指针的间接赋值(函数)
 */
int getMem(char **p1, int *len1,char **p2,int *len2){
    int ret = 0;
    char *temp1,*temp2;
    temp1 = (char *)malloc(100);
    strcpy(temp1,"1122334455");
    *p1 = temp1;
    *len1 = strlen(temp1);

    temp2 = (char *)malloc(200);
    strcpy(temp2,"aabbccddeeff");
    *p2 = temp2;
    *len2 = strlen(temp2);
    return ret;
}
int main(){
    int ret;
    char *myp1 = NULL;
    int mylen1 = 0;
    char *myp2 = NULL;
    int mylen2 = 0;
    ret = getMem(&myp1,&mylen1,&myp2,&mylen2);
    if(ret != 0){
        printf("func getMem error:%d\n", ret);
        return 0;
    }
    printf("*myp1 = %s,mylen1 = %d\n", myp1,mylen1);
    printf("*myp2 = %s,mylen2 = %d\n", myp2,mylen2);
    if(myp1 != NULL){
        free(myp1);
        myp1 = NULL;
    }
    if(myp2 != NULL){
        free(myp2);
        myp2 = NULL;
    }
    return 0;
}