#include<iostream>
using namespace std;

	
	class Marks{
		
		private:
			int s;
		
		public:
			int print(){
				
				cout<<"Enter ur marks :";
				cin>>s;
				
				cout<<"Ur marks is "<<s;
			}
	};

int main(){
	
	Marks a;
	
	a.print();

}
