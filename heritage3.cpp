#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	public :
		int id;
		char name[100];
		public :
			void set(){
				cout<<"Enter id = "<<endl;
				cin>>id;
				cout<<"Enter name = "<<endl;
				cin>>name;
			}
			void get(){
				cout<<"Employee is = "<<id<<endl
				    <<"Employee name = "<<name<<endl;
			}
};
class Employee1{
	public :
		char role[100];
		int salary;
		public :
			void set1(){
				cout<<"Enter role = "<<endl;
				cin>>role;
				cout<<"Enter salary = "<<endl;
				cin>>salary;
			}
			void get1(){
				cout<<"Enter role = "<<role<<endl
				    <<"Enter salary = "<<salary<<endl;
			}
};
class Employee2 : public Employee1 , public Employee{
	public :
		char contact[10];
	    public :
	    	void print(){
	    		cout<<"Enter contact = "<<endl;
	    		cin>>contact;
	    		cout<<"====================="<<endl;
			}
			void print1(){
				cout<<"Enter contact = "<<contact<<endl;
			}
};
int main()
{
	Employee2 e;
	e.set();
	e.set1();
	e.print();
    e.get();
	e.get1();
	e.print1();	
}
