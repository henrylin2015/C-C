#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***
 * c语言strstr函数的扩展，查找出字符串出现的次数
 * C语言的精华就是通过地址修改数据
 */
int getCount(char *p,char *str,int *count){ //c语言的精华所在，
    int ret = 0;
    char *tmpStr = p;
    int tmp = 0;
    if(tmpStr == NULL && str == NULL && count == NULL){
        ret = -1;
        printf("func getCount err:%d,p == NULL && str == NULL && count == NULL\n", ret);
        return ret;
    }
    while ((tmpStr = strstr(tmpStr,str))) {
        tmp++;
        tmpStr = tmpStr + strlen(str);
        if(*tmpStr == '\0'){
            break;
        }
    }
    *count = tmp;
    return ret;
}
/***
 * 出语言  字符串翻转
 */
int getNewStr(char *p,int len){
    int ret = 0;
    char *str = p;
    int low = 0;
    int high = len-1;
    if(p ==NULL && len ==0){
        ret = -1;
        printf("func *p ==NULL && len ==0, %d\n",ret);
        return ret;
    }
    while (low < high) {
        char tmp = *(str+low);
        *(str+low) = *(str+high);
        *(str+high) = tmp;
        low++;
        high--;
    }
    return ret;
}
int main(){
    char *str = "abcd112233abdcdiijddfd12";
    char buf[] = "abcd";
    int count = 0;
    int ret;
    char str2[50]="abcd";
    printf("str2 = %s\n",str2);
    int len = strlen(str2);
    printf("len = %d\n",len);
    int ret2;
    ret2 = getNewStr(str2,len);
    if(ret2 !=0){
        printf("func getNewStr err:%d\n",ret2);
        return ret2;
    }
    printf("翻转后 str2 = %s\n", str2);
    ret = getCount(str,buf,&count); //间接修改值
    if(ret != 0){
        printf("func getCount err:%d\n", ret);
        return ret;
    }
    printf("count :%d\n",count);
    return 0;
}