#include<iostream>
using namespace std;
class point{
	public:
		int x,y;
		point(){x=y=0;}
		void in()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<x<<y<<endl;
		}
		point operator+(point p )
		{
			point temp;
			temp.x=p.x+x;
			temp.y=p.y+y;
			return temp;
			
		}
};
int main()
{
	point a,b,c;
	a.in();
	b.in();
	c=a+b;
	a.show();
	b.show();
	c.show();
}