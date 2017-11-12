#include<iostream.h>
void main()
{
	float x;
	cout<<"输入一个整数:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"小于10"<<endl;
	else
		if(x>=10,x<100)
			cout<<"大于等于10，小于100"<<endl;
		else
			if(x>=100,x<1000)
				cout<<"大于等于100，小于1000"<<endl;
			else
				if(x>=1000)
					cout<<"大于等于1000"<<endl;
}