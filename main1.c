#include <stdio.h>  //告诉编译器，编译之前要先包含 stdio.h
/*这是多行注释
 * c程序的主函数：c语言从主函数的第一条语句开始执行，
然后按照从上往下的顺序执行到最后一条语句
c程序的入口和出口，main函数一结束程序也结束了*/
int main1() {
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
    //整型数据的输出格式
    printf("************************************\n");
    short b = -123;
    printf("short :%hd\n",b);
    unsigned short b1 = 123;
    printf("unsigned short:%hu\n",b1);

    int c = -1234;
    printf("int:%d\n",c);
    unsigned int c1=1234;
    printf("unsigned int:%u\n",c1);

    long d = -12345;
    printf("long : %ld\n",d);
    unsigned long d1 = 12345;
    printf("unsigned long :%lu\n",d1);

    long long e = -123456;
    printf("long long : %lld\n",e);
    unsigned long long e1 = 123456;
    printf("unsigned long long: %llu\n",e1);
    /*
     * 字符型变量用于存储一个单一字符
     * char和unsigned char定义变量
     * 每个字符变量都会占用1个字节(1 Byte)
     * 用一对英文半角格式的单引号('')引用
     * 使用%c输出
     * */
    printf("********************\n");
    //字符型数据
    char ch;
    ch = 'A';
    printf("char : %c\n",ch);
    //char的本质是一个字节大小的整型
    //字符在内存中存储时是以这个字符的ASCII编码进行存储的，ASCII码对照表如下：
    ch = 83;
    printf("83 : %c\n",ch);
    printf("'S' : %d\n",ch);

    /*ASCII码大致由以下两部分组成：
     * ASCII非打印控制字符：ASCII表上数字0-31分配给了控制字符，用于控制打印机等一些外围设备。
     * ASCII打印字符：数字32-126分配给了能在键盘上找到的字符，当查看或打印文档时就会出现。数字127代表Del命令。
     * */
    /*
     * 大小写转换
     * 大写转小写：+32/+0x20
     * 小写转大写：-32/-0x20
     * 整数的字符形式
     * 整数转字符形式：+48/+'0'
     * 字符形式转整数：-48/-'0'
     * */
    printf("A -> a (A+32/-0x20):%c\n",'A'+0x20);
    printf("a -> A (a-32/-0x20):%c\n",'a'-32);
    //整数的字符形式转整数形式
    printf("'1'->1('1'-'0'):%d\n",'1'-'0');
    //整数的整数形式转字符形式
    printf("4->'4'('4'+'0'):%c\n",4+'0');

    //转义字符\n
    printf("\n");
    //\t tab键
    printf("1\t2\t3\t4\n");
    printf("%d\n",sizeof('\t'));

    printf("\\n");
    printf("%d\n",sizeof('\n'));//字符本质上是一个占一个字节的整数，取的\n的ASCII码值，整数占4个
    printf("%d\n",sizeof("\\n"));
    printf("\"Hello World\"\n");//"Hello World"

    /*
     * 实型(浮点型):float、double
     * 单精度浮点型:float、精确到小数点后6位
     * 双精度浮点型:double、精确到小数点后12位
     * 不以f结尾的常量默认是double类型，以f结尾的常量(如3.14)是float类型。
     * */
    float f = 23.145678912f;//23.14是float类型 23.14F
    double f2 = 23.123456789123;
    printf("float: %f\n",f);
    printf("double: %.12lf\n",f2);
    printf("float: %10.3f\n",f);//f =        23.145  %n.mf n一共几位 m小数点后几位

    /*进制也就是进位制，是人们规定的一种进位方法。对于任何一种进制-X进制，就表示某一位置上的数运算时是逢x进一位。
     * 十进制是逢十进一，十六进制是逢十六进一，二进制就是逢二进一，以此类推，x进制就是逢x进位*/
    char ch10 = 0b11110010;
    unsigned char ch11 = 0b11110010;
    printf("%d\n",ch10);
    printf("%d\n",ch11);
    printf("%f\n",3/2);//结果为0引发的思考
    //练习：
    char c10= 250;
    unsigned char d10;
    char f10;
    f10 = c10 + 249;
    d10 = c10 +249;
    printf("d = %u\n",d10);
    printf("f=%u\n",f10);
    printf("f=%d\n",f10);

//    int x;
//    scanf("%d",&x);
//    printf("x: %d\n",x);


//    char y;
//    scanf("%c",&y);
//    printf("y: %c\n",y);

    int a,b5;
    char c5;
    scanf("%d %c",&a,&c5);
    printf("a: %d,c: %c\n",a,c5);
    getchar();//捕获回车键
    char d5;
    scanf("%c",&d5);//捕获的是键盘输入的回车键，保存在内存缓冲区
    printf("d:%c\n",d5);
    return 0;
}
