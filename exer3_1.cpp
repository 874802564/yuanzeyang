#include<iostream.h>
void main()
{
	float x;
	cout<<"����һ������:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"С��10"<<endl;
	else
		if(x>=10,x<100)
			cout<<"���ڵ���10��С��100"<<endl;
		else
			if(x>=100,x<1000)
				cout<<"���ڵ���100��С��1000"<<endl;
			else
				if(x>=1000)
					cout<<"���ڵ���1000"<<endl;
}