#include<iostream.h>
void main()
{int a;
 int grade=0;
 cin>>a;
 if(a<10) grade=1;
 if(a>=10&&a<=99) grade=2;
 if(a>=100&&a<=1000) grade=3;
 if(a>=1000) grade=4;
 switch(grade)
 {
  case 1:
  cout<<a<<endl;break;
  case 2:
  cout<<a<<endl;break;
  case 3:
  cout<<a<<endl;break;
  case 4:
  cout<<a<<endl;break;
 }
}