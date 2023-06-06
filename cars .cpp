#include<iostream>
#include<string.h>

using namespace std;

class Cars
{
public :

char company_name[100];
char modal_name[100];
	
};

int main()
{
	Cars c1,c2;
	
	
	strcpy(c1.company_name,"toyota");
	strcpy(c1.modal_name,"supra");
	strcpy(c2.company_name,"nissan");
	strcpy(c2.modal_name,"GTR");
	
	cout<<"company name = "<<c1.company_name<<endl;
	cout<<"modal name = "<<c1.modal_name<<endl;
	cout<<"company name = "<<c2.company_name<<endl;
	cout<<"modal name = "<<c2.modal_name<<endl;
	

	return 0;
}
