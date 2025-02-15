//inheritance om cpp
#include<iostream>

using namespace std;


//parent class
class A{
	
	private:
		
	void print(){
		
		cout<<"\nTHis is Parent Class\n";
	}
	
};



//child class

class B : public A{
	
	public:
	void out(){
		
		cout<<"This is Child CLass";
		
		print();
		
	}
};

int main(){
	
	B a1;
	
	a1.out();
	return 0;
}


