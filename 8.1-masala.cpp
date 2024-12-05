#include<iostream>
using namespace std;
template<typename T>
T almashtirish(T a,T b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	almashtirish(a,b);
}
