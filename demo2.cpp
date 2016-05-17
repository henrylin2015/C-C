#include <iostream>
using namespace std;

//定义常量
#define L  10
#define W  5


//定义一个全局变量
int g = 20;
void test();
void area();
int * max(int *s,int len);
void dump(int *s,int len);
int main()
{
    //局部变量的声明
    int g = 10;
    const int a = 10;
    int b = 10;
    cout << "g = " << g << endl;
    test();
    int *p = NULL;
    p = &b;
    *p = 100;
    std::cout << "b = " << b << std::endl;
    area();
    int arr[] = {1,2,4,7,10,3,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ss = max(arr,len);
    std::cout <<"max = "<< *ss << std::endl;
    //dump(ss,len);
    return 0;
}

void test(){
    std::cout << "g = " << g << std::endl;
}

void  area(){
    int area;
    area = L * W;
    std::cout << "area :" << area << std::endl;
}
int * max(int *s,int len){
    int *temp = s;
    for(int i = 0; i < len; i++){
        if(*temp < *(s+i)){
            *temp = *(s+i);
        }
    }
    return temp;
}
void dump(int *s,int len){
    for(int i = 0;i < len; i++){
        std::cout << " " << *(s+i);
    }
    std::cout  << std::endl;
}