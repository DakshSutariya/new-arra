#include<iostream>
#include<string.h>

using namespace std;

class House
{
   public :
   int h_no;
   char h_name[100];
   char h_address[100];
};
int main()
{
	House h;
	h.h_no=1;
	strcpy(	h.h_name,"DS");
	strcpy(	h.h_address,"sarthana");
	
	cout<<"house no.="<<h.h_no<<endl;
	cout<<"house name="<<h.h_name<<endl;
	cout<<"house address="<<h.h_address<<endl;
	
	
	return 0;
}
