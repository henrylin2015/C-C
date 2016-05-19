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
int main(){
    char *str = "abcd112233abdcdiijddfd12";
    char buf[] = "abcd";
    int count = 0;
    int ret;
    ret = getCount(str,buf,&count); //间接修改值
    if(ret != 0){
        printf("func getCount err:%d\n", ret);
        return ret;
    }
    printf("count :%d\n",count);
    return 0;
}