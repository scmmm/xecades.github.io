#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m;
	int i;
	int k; 
	while(1)
	{
		cout<<"����һ������:";
		cin>>m;
		k=(int)sqrt((double)m);
		for(i=2;i<=k && m%i!=0;i++);
		if(i>k)
			cout<<m<<"������"<<endl;
		else
			cout<<m<<"��������"<<endl;
	}
    system("pause");
	return 0;
}
