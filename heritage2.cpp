#include<iostream>
#include<string.h>
using namespace std;
class Animal{
	public :
		int age;
		char name[100];
		char origing[100];
		void set(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
		}
};
class Zebra{
	public :
		int age;
		char name[100];
		void setdata(){
			cout<<"name = "<<endl;
			cin>>name;
			cout<<"age = "<<endl;
			cin>>age;
		}
};
class Dolphin : public Zebra , public Animal{
	public :
		void get(){
			cout<<"origing = "<<endl;
			cin>>origing;
		}
};
int main()
{
	Dolphin d;
	d.setdata();
	d.get();
}
