#include<iostream.h>
void main()
{
	float x;
	cout<<"������һ������������";
	cin>>x;
    if(x<10)
		cout<<"xС��10"<<endl;
    else
	   if(x<100)
		   cout<<"x����9С��100"<<endl;
	   else
		   if(x<1000)
			   cout<<"x����99С��1000"<<endl;
		   else
		       cout<<"x����10000"<<endl;
}