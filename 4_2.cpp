#include<stdio.h>
void Judge(int y)
{
 while(1)
 {
 printf("������Ҫ��������:\n");
 scanf("%d",&y);
 if((y%100==0)&&(y%400==0)||(y%100!=0)&&(y%4==0))
 printf("%d�������꣬����2�·���29��\n",y);
 else 
 printf("%d����ƽ�꣬����2�·���28��\n",y);
 printf("\n");
 }
}
void main()
{
 int year; 
 Judge(year);
}