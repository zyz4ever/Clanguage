//
// Created by apple on 9/27/2026.
//
#include <stdio.h>
int main(){
    //算术运算符
    //整数乘浮点数得到的是浮点数
    int x = 11;
    float y = 3.5;
    float z = x*y;
    printf("z: %f\n",z);

    int a,b;
    a = 10;
    b = 3;
    float c = 10/3;//整型数据/整型数据 => 整型数据
    float m = 3.0;
    c = a/m;//整型数据/浮点型数据=>浮点型数据
    printf("c: %f\n",c);

//    printf("10/0: %d\n",10/0);//c语言中不允许进行除0操作！！！
//    printf("10%3.3: %d\n",10%3.3);//取模操作只能够在整数和整数之间进行

    //前自增运算符的使用
    a = 2;
    b = ++a;//先计算，后引用
    printf("a:%d,b:%d\n",a,b);

    //后自增运算符的使用
    a = 2;
    b = a++;//先引用,后计算
    printf("a:%d,b:%d\n",a,b);
    return 0;
}