#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***
 * 字符串的comp
 */
void copy_str(char *from,char *to){
    for(; *from!='\0'; from++,to++){
        *to = *from;
    }
    *to ='\0';
    return ;
}

void copy_str2(char *from,char *to){
    while ((*to = *from) != '\0') {
        to++;
        from++;
    }
    return ;
}

void copy_str3(char *from,char *to){
    while ((*to++ = *from++) != '\0') {
        ;
    }
    return ;
}

int main(){
    char *str1 = "hello";
    char buf[100];
    //copy_str(str1,buf);
    //copy_str2(str1,buf);
    copy_str3(str1,buf);
    printf("buf=%s\n", buf);
    return 0;
}