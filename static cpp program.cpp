#include<iostream>
using namespace std;
class add
{
	private:
		static int count;
		public:
			void demo()
			{
				static int count=0;
				cout<<count<<endl;
				count++;
			}
};
int main()
{
	add mydemo;
	for(int i=0;i<=5;i++)
	{
		mydemo.demo();
	}
}