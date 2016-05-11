#include <stdio.h>
int main(){
    int i;
    printf("%lu\n", sizeof(i));
    char s[] = {0};
    printf("%lu\n",sizeof(s));
    short ss;
    printf("%lu\n", sizeof(ss));
    return 0;
}