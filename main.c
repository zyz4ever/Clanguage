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
#if 0//程序卡住了
    /*
    1、程序卡住了
    2、程序异常退出11
    3、程序运行的结果和预期的不一致

     */
    int x=11;
    char ch;
    int a = 10,b  = 100;
    printf("plz input a number:\n");
    scanf("%d",&x);//捕获从键盘上输入的内容,并且把这些内容当成整数形式保存到变量x中
    printf("[%s %d]x:%d\n",__func__ ,__LINE__,x);
/*
    char buff[10] = {0};
    scanf("%s",buff);
    printf("%s\n",buff);*/
    printf("plz input a number:\n");
    scanf("%d",&a);//捕获从键盘上输入的内容,并且把这些内容当成整数形式保存到变量x中
    printf("[%s %d]x:%d\n",__func__ ,__LINE__,a);

    //陷入了无限循环(死循环)
    //循环变量忘记自增或者自减
    /*int i1;
    for (i1=0;i1<10;)
    {
        printf("Hello");
    }*/
    int i1,y=10;
    //如果陷入了死循环，将i和y的值打印出来，判断为啥i会一直小于y
    /*
    for(i1=0;i1<y;)
    {
        //在循环中,y的值发生了变化,导致i1永远小于y 导致无限循环
        printf("[%s %d] i:%d,y:%d\n",__func__ ,__LINE__,i1,y);
        i1++;

    }
     */
    printf("[%s %d]\n",__func__ ,__LINE__);
    i1 = 0;
    int sum1  = 0;
    while(i1<y)
    {
        //在循环体中 i1的值忘记增加了 导致无限循环
        sum1 += i1 ;
        //如果陷入了死循环，将i和y的值打印出来，判断为啥i会一直小于y
        printf("[%s %d] i:%d,y:%d\n",__func__ ,__LINE__,i1,y);
        i1++;
    }
#endif

    //程序异常退出了
    int x,y;
    printf("plz input two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("val:%d\n",x/y);
    return 0;
}