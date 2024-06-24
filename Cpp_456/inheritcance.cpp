#include<iostream>
using namespace std;

class A{
	public:
		int func(){
		cout<<"I am Class A\n";	
		}
		
	
};

class B:public A{
	public:
		int fun(){
			cout<<"I am Class B";
		}
	
};

int main(){
	
	B b1;
	b1.func()
;	b1.fun();
	
	
	
	return 0;
}
