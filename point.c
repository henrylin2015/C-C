#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/***
 * 冒泡排序法
 */
int *maopao(int *s,int len);
/***
 * 这个方法是求出数组中最大的那个数，
 * 返回一个数
 */
int arrMax(int *s,int len);

/***
 * 这个是打印数组
 */
void dump(int *s,int len);

/***
 * 这个是打印数组(字符串)
 */
void dumpStr(char *s,int len);

/***
 * 字符串的倒置(意思就是字符串从后面一个一个向前输出),ru hell-》lleh
 */
char *strll(char *s,int len);

int main(){
    int arr[] = {11,22,44,55,79,80,12,45,78,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", len);
    int *p = maopao(arr,len);
    dump(p,len);
    int max = arrMax(arr,len);
    printf("max = %d\n", max);
    char str1[] = "hello";
    int ll = strlen(str1);
    printf("原来的字符串:%s\n", str1);
    char *ss = strll(str1,ll);
    printf("倒置的字符串:");
    dumpStr(ss,ll);
    return 0;
}

char *strll(char *s,int len){
    int low = 0;
    int high = len -1;
    while (low < high) {
        char temp = *(s+low);
        *(s+low) = *(s+high);
        *(s+high) = temp;
        low++;
        high--;
    }
    return s;
}

int arrMax(int *s,int len){
    int i;
    int max = *s;
    for(i = 1; i < len;i++){
        if(max < *(s+i))
        {
            max = *(s+i);
        }
    }
    return max;
}

int *maopao(int *s,int len){
    int i;
    int j;
    for(i = 0;i < len; i++){
        for(j =0 ; j < len-i-1;j++){
            if(*(s+j) > *(s+j+1)){
                int temp = *(s+j);
                *(s+j) = *(s+j+1);
                *(s+j+1) = temp;
            }
        }
    }
    return s;
}

void dump(int *s,int len){
    int i;
    for(i = 0; i < len; i++){
        printf("  %d  ", *(s+i));
    }
    printf("\n");
}

void dumpStr(char *s,int len){
    int i;
    for(i = 0; i < len; i++){
        printf("%c", *(s+i));
    }
    printf("\n");
}