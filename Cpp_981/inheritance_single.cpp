//Single Level

#include<iostream>
using namespace std;

class Car{
	public:
	
	string car_name;
	
	int tp(){
		cout<<"Time  pass";
	}
	
};

class Owner:public Car{
	
	public:
		int print(){
			car_name = "BMW";
		cout<<car_name;		
		}
	
	
};

int main(){
	Owner s1;
	s1.tp();
	
	s1.print();
	return 0;
}
