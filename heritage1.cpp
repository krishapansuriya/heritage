#include<iostream>
using namespace std;
class Mother{
	public :
		void disp()
		{
			cout<<"My Mother is housewife."<<endl;
		}
};
class Daugther : public Mother{
	public :
		void disp()
		{
			cout<<"My daugther study in S V Patel collage."<<endl;
		}
};
int main()
{
	Daugther d;
	d.M::disp();
	d.D::disp();
	return 0;
}
