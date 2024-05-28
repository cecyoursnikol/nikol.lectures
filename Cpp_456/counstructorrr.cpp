#include<iostream>
using namespace std;

class Data{
	
	public:
		
		void nothing(){
			
			cout<<"I m useless";
		}
		 Data(){
			
			cout<<"THis is called itself";
//			return 0;
		}
		
	
};

int main(){

//	int az;
	Data az;
	
	az.nothing();
	return 0;
}
