#include<iostream>
using namespace std;
int a[][3]={1,2,3,4,5,6,7,8,9};
int main(){
	int (*pa)[3](a);
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		for(int j=0;j<3;j++)
			cout<<*(*(pa+i)+j)<<" ";
	}
	cout<<"\n";
}
