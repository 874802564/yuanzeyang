#include<iostream.h>
void main()
{
	int i,y,x;
	y=1,x=10;
		cout<<"������һ������:";
	cin>>i;
	while(i>=x)
	{
		y++,x=x*10;
	}
switch(y)
{
case 1:cout<<"iС��10\n";break;
case 2:cout<<"iС��100\n";break;
case 3:cout<<"iС��1000\n";break;
default:cout<<"i���ڵ���1000\n";break;
}
}