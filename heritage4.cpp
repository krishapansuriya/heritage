#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string comp_name;
		string address;
		string email;
		long long int contact;
	public :
		void setter()
		{
			cout<<"Enter id = ";
			cin>>id;
			cout<<"Enter name = ";
			cin>>name;
			cout<<"Enter role = ";
			cin>>role; 
		}
};
class B : public A{
	public : 
	void setter(){
		cout<<"Enter salary = ";
		cin>>salary;
		cout<<"Enter experience = ";
		cin>>experience;
	}
};
class C : public B{
	public :
		void setter(){
		cout<<"Enter company name =";
		cin>>comp_name;
		cout<<"Enter address =";
		cin>>address;
	}
	void getter(){
		cout<<"name = "<<name<<endl
		    <<"role = "<<role<<endl
		    <<"slary = "<<salary<<endl;
	}
};
class D : public C{
	public :
		void getter(){
			cout<<"id = "<<id<<endl
			    <<"name = "<<name<<endl
			    <<"role = "<<role<<endl
			    <<"salary ="<<salary<<endl
			    <<"experience ="<<experience<<endl
			    <<"company name = "<<comp_name<<endl
			    <<"email = "<<email<<endl
			    <<"contact = "<<contact<<endl;
		}
};
int main()
{
	D d;
	d.A::setter();
	d.B::setter();
	d.C::setter();
	d.D::setter();
	cout<<endl;
	d.getter();
}
