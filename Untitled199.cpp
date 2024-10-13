#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int rollno;
		string fathername;
		student()
		{
			name="empty";
			fathername="empty";
			rollno=0;
		}
		~student()
		{
			cout<<"program end";
		}
};
int main()
{
	student alina;
	alina.name="student alina";
	alina.fathername="Zulfiqar";
	alina.rollno =10;
	 cout<<"Student name:"<<alina.name<<endl;
	 cout<<"Student fathername:"<<alina.fathername<<endl;
	 cout<<"Student rollno:"<<alina.rollno<<endl;
}