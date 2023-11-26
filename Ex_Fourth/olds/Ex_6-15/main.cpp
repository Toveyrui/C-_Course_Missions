#include<iostream>
using namespace std;
class A{
	public:
		A(int i,int j){
			A1=i;A2=j;}
		void print(){
			cout<<A1<<","<<A2<<endl;}
	private:
		int A1,A2;
};
class B{
	public:
		B(int i,int j,int k):a(i,j),b(k){}
		void print();
	private:
		A a;
		int b;
};
void B::print(){
	a.print();
	cout<<b<<endl;
}
int main(){
	B b(6,7,8);
	b.print();
}
