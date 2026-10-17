//
// Created by apple on 10/3/2026.
//
#include <stdio.h>
int main()
{/*
    //x:循环变量
    int x = 10;
    while(x!=0)//重复/循环10次
    {
        printf("%d\n",x);
        x--;//一定要记得这句话，否则循环就变成了死循环/无限循环

    }
    x = 0;
    while(x<10)
    {
        x++;//一定要记得这句话，否则循环就变成了死循环/无限循环
    }
    //使用while循环求1~100的和
    //1+2+3+4+5+6+······+100
    int i = 1;
    int sum = 0;
    while(i<101)
    {
        sum+=i;
        i++;
    }
    printf("sum:%d\n",sum);
    */

    //for循环 求1~100的和
    int sum = 0;
    int i=1;//循环变量i
    //for(;;)//无限循环 while(1)
    for(i=1;i<101;i++)
    {
        sum+=i;

    }
    printf("sum:%d\n",sum);
    int j=1;
    sum = 0;
    for(i=0;i<100;i++)//for循环关注循环执行的次数
    {
        sum+=j;
        j++;
    }
    printf("sum:%d\n",sum);

    //求某个Int类型整数的二进制表达形式中有多少个1
    /*
    int k = 0;
    int x;
    int cnt = 0;
    scanf("%d",&x);
    for(k=0;k<32;k++)
    {
        //求某个bit位上的值
        if ((x>>k) & 1)
        {
            printf("1");
            cnt++;
        }
        else
        {
            printf("0");
        }

    }
    printf("\ncnt:%u\n",cnt);
     */
    //break在switch中的作用
    //如何使用switch语句实现在键盘上输入一个月份，然后输出该月份对应的天数呢？
    /*
    int mon;
    scanf("%d",&mon);
    switch(mon)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("31\n");break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30\n");break;
        case 2:printf("28\n");break;

    }
     */
    /*
    1、程序卡住了
    2、程序异常退出
    3、程序运行的结果和预期的不一致

     */
    return 0;
}