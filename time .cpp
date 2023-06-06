#include<iostream>

using namespace std;


class Time
{
	public:
    int hour;
	int min;
	int sec;
		
};
int main()
{
	Time t;
	
	cout<<"enter the second=";
	cin>>t.sec;
	
	t.hour=t.sec/3600;
	t.min=(t.sec%3600)/60;
	t.sec=(t.sec%3600)%60;
	
	cout<<"time="<<endl;
	cout<<t.hour<<endl;
	cout<<t.min<<endl;
	cout<<t.sec<<endl;
	
	
	
	return 0;
}
