#include<iostream>
using namespace std;

class Myclass{
	
	public:
		int a;
		float f;
};
int main(){
	
	Myclass dh;
	
	cout<<"Enter class values :";
	cin>>dh.a>>dh.f;
	
	cout<<"Ans is"<<dh.a<<" "<<dh.f;
	
	
	
	return 0;
}
