#include<iostream.h>
void main()
{
	int x,b;
	b=0;
	cout<<"������һ��С��10000������"<<endl;
	cin>>x;
	
	

	while(x!=0)
	{
		if(b<4)
		{
		b++;
		x=x/10;
		}
		else
			cout<<"��������!!!";
	}
	switch(b)
	{
	  case 0:cout<<"x����0";break;
	  case 1:cout<<"xС��10";break;
      case 2:cout<<"x����9С��100";break;
	  case 3:cout<<"x����99С��1000";break;
	  case 4:cout<<"x����999";break;
	}
}