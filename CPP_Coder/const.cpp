#include<iostream>
using namespace std;

class Myclass{
	
	public:
		
		
		
		int add(int a,int b){
			
			cout<<(a+b);
		}
		
		Myclass(){
			
			cout<<"Yes I am";
		}
};

int main(){
	
	Myclass ob;
	
	ob.add(2,2);
	
	return 0;
}
