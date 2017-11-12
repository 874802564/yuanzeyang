#include<iostream.h>
void main()
{
	int i,y,x;
	y=1,x=10;
		cout<<"请输入一个整数:";
	cin>>i;
	while(i>=x)
	{
		y++,x=x*10;
	}
switch(y)
{
case 1:cout<<"i小于10\n";break;
case 2:cout<<"i小于100\n";break;
case 3:cout<<"i小于1000\n";break;
default:cout<<"i大于等于1000\n";break;
}
}