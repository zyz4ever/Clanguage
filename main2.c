//
// Created by apple on 9/27/2026.
//
#include <stdio.h>
int main2(){
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
    // 关系运算符
    int a1 =3,b1 = 3;
    printf("a == b:%d\n",a1 == b1);
    printf("a != b:%d\n",a1 != b1);
    printf("a < b:%d\n",a1 < b1);
    printf("a > b:%d\n",a1 > b1);
    printf("a <= b:%d\n",a1 <= b1);
    printf("a >= b:%d\n",a1 >= b1);
    //逻辑运算符
    int x1;
    x1 = 75;
    //在C语言中 用数学表达式m<=x<=n是不能判断x是否大于等于m并且小于等于n
    printf("%d\n",60<=x1<=70);
    printf("!x : %d\n",!x1);
    printf("x>=60&&x<=70:%d\n",x1 >=60 && x1 <= 70);
    printf("x>=60||x<=70:%d\n",x1 >=60 || x1 <= 70);

    //位运算
    //按位与 &:0和任意值按位与得0
    char A = 60;
    char B = 30;
    printf("A & B : %d\n",A & B);
    //按位或 |:1和任意值按位或得1
    printf("A | B : %d\n",A | B);
    //按位异或 ^:相同为0 不同为1
    //结论: 0和任意值异或 得 任意值     1和任意值异或 得 任意值取反
    printf("A ^ B : %d\n",A ^ B);
    //按位取反~: ~0=>1 ~1=>0
    printf("~A :%d\n",~A);
    //按位左移: << 左移n位，将最左边的n个bit位删除，右边补n个0
    //左移n位: 乘以2的n次方
    printf("5<<2:%d\n",5<<2);

    //按位右移: >> 右移n位，将最右边的n个bit位删除，左边补符号位(正数补n个0，负数补n个1)
    //右移n位: 除以2的n次方
    //逗号运算符:最后结果是表达式1的结果
    int a10 = 3;
    int b10;
    //逗号运算符：=号优先级高于逗号，先计算=，=从右至左结合性，先计算右侧表达式
    b10 = a10 *= 2,a10 += 4;
    printf("b:%d,a:%d\n",b10,a10);
    //流程控制
    //if语句
    /*
    int a11;
    scanf("%d",&a11);//从键盘上输入一个整数保存到变量a中
    //如果a的值大于10 打印 a>10
    if (a11>10)
    {
        printf("a>10\n");
    }
    else
    {
        printf("a<=10\n");
    }
     */
    /*
    //在键盘上输入三个整数，输出最大值
    //1、从键盘上输入三个整数，分别保存到变量a,b,c中
    int a12,b12,c12;
    printf("plz input 3 integer numbers\n");
    scanf("%d %d %d",&a12,&b12,&c12);
    //2、使用变量max 保存a和b之间的最大值
    int max;
    //如果a>b，max=a,否则max=b
    if (a12>b12)
    {
        max = a12;
    }
    else
    {
        max = b12;
    }
    //3、拿max和c比较大小
    if(c12>max)
    {
        max = c12;
    }
    printf("max:%d\n",max);
*/
    /*
    //在键盘上输入一个年份，判断该年是否为闰年
    //闰年:能够被4整除但是不能够被100整除，或者能够被400整除 ||
    int year;
    printf("plz input a year number\n");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("leap year\n");
    }
    else
    {
        printf("Not leap year\n");
    }
    */
    int day;
    printf("plz input a number\n");
    scanf("%d",&day);
    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("not define\n");
    }
    return 0;
}