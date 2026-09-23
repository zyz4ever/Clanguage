#include <stdio.h>  //告诉编译器，编译之前要先包含 stdio.h
/*这是多行注释
 * c程序的主函数：c语言从主函数的第一条语句开始执行，
然后按照从上往下的顺序执行到最后一条语句
c程序的入口和出口，main函数一结束程序也结束了*/
int main() {
    printf("Hello, World!\n");

/*标识符：只能包含数字、字母和下划线
不能以数字开头
区分大小写*/
/*
 * 当我们在使用C语言进行编程时，某些标识符会被用来表示特殊的含义或者作用并且不能用作他用，
 * 我们就称这些标识符为关键字.
 * c语言提供了32个关键字：
 * 数据类型关键字（12个）
 * char、short、int、long、float、double、unsigned、signed、struct、union、enum、void
 * 控制语句关键字（12个）
 * if、else、switch、case、default、for、do、while、break、continue、goto、return
 * 存储类型关键字（5个）
 * auto、extern、register、static、const
 * 其他关键字（3个）
 * sizeof、typedef、volatile*/
/*
 * 常量：在程序运行过程中，其值不能被改变的量
 * 常量一般出现在表达式或赋值语句中
 * 整型常量：100，200，-100，0
 * 实型常量：3.14，0.125，-3.123
 * 字符型常量：'a','b','1','\n'
 * 字符串常量："a"，"ab","123456"*/

/*
 * 变量：我们可以把变量理解为一个存储数据的容器
 * 在程序运行过程中其值可以被改变
 * 变量在使用前必须要被定义
 * 变量定义的语法：type variable_list
 * 在这里，type必须是一个有效的C数据类型，可以是char、int、float、double或任何用户自定义
 * 的对象,variable_list可以由一个或多个标识符名称组成，多个标识符之间用逗号分隔。下面列出几个有效的声明：
 * int i,j,k;
 * char c,ch;
 * float f,salary;
 * double d;
 * 变量一旦被定义就在内存上占用了一块对应大小的空间
 * 变量的命名规则：
 *  遵循标识符的命名规范：数字、字母、下划线，不能以数字开头
 *  不能使用关键字
 *  见名知义
 * */
    printf("short:%d\n",sizeof(short));
    printf("int:%d\n",sizeof(int));
    printf("long:%d\n",sizeof(long));//编译器是32位的，64位的编译器无法在32位的计算机运行
    printf("long long:%d\n",sizeof(long long));
    //字节是处理数据的基本单位
    return 0;
}
