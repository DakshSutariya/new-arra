#include<iostream>
#include<string.h>

using namespace std;

class Distarns
{
	public:
    int feet;
    
	int inch;
		
};
int main()
{
	Distarns d1,d_1,d2,d_2,sum;
	
	cout<<"enter the 1st distarns"<<endl;
	cout<<"enter the feet=";
	cin>>d1.feet;
	cout<<"enter the inch=";
	cin>>d1.inch;
	
	cout<<"enter the 2nd distarns="<<endl;
	cout<<"enter teh feet=";
	cin>>d2.feet;
	cout<<"enter the inch=";
	cin>>d2.inch;
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"sum of distance"<<endl;
	cout<<"feet="<<sum.feet;
	cout<<"inch="<<sum.inch;
	
	
	
	return 0;
}
