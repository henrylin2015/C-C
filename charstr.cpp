#include <iostream>
#include <string>
using namespace std;


/***
 * string和char的用法
 */
// char
int main01(){
    char str1[100] = "Hello";
    char str2[100] = "World!";
    char str3[100] ={0};
    //把字符str1copy到str3中
    strcpy(str3,str1);
    printf("str3 = %s\n", str3);
    //strlen str3
    int str3len = strlen(str3);
    int sizeofStr3 = sizeof(str3);
    std::cout << "str3len:" << str3len << std::endl;
    std::cout << "sizeofStr3:" << sizeofStr3 << std::endl;
    //strcat 连接字符串 s2 到字符串 s1 的末尾。str1,str2
    strcat(str1,str2);
    std::cout << "strcat(str1,str2):" << str1 << std::endl;
    //strcmp 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
    int n = strcmp(str1,str2);
    std::cout << "strcmp n = " << n << std::endl;
    if(n == 0){
        std::cout << "strcmp(str1,str2):" << "str1 = str2" << std::endl;
    }else if(n < 0){
         std::cout << "strcmp(str1,str2):" << "str2 max" << std::endl;
    }else if(n > 0){
        std::cout << "strcmp(str1,str2):" << "" << std::endl;
    }
    return 0;
}

//string
int main(){
    string ss1 = "Hello";
    string ss2 = "Hello";
    string ss3 = "";
    int len;
    ss3 = ss1 + ss2;
    std::cout << "ss3 = ss1 + ss2: " << ss3 << std::endl;
    len = ss3.size();
    std::cout << "len = ss3.size(): "  << len << std::endl;
    if(ss1 == ss2){
        std::cout << " ss1 == ss2 :" << "相等"<< std::endl;
    }else{
        std::cout << " ss1 == ss2 :" << "不相等"<< std::endl;
    }
    return 0;
}