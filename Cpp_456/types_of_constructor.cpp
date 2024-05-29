#include<iostream>
#include<string.h>

using namespace std;


class Students{
	
	public:
		
		int rollno;
		
//		Students(){
//			
//			cout<<"Enter ur roll no :";
//			cin>>rollno;
//		}
//		
//		Students(string name){
//			
//			cout<<"Enter ur name :";
//			cin>>name;
//		}
		
		Students(Students &ob){
			
			cout<<"THis is copy constructor";
		}
	
};

int main(){
	
	Students ob(ob);
//	Students s1("sakshi");
//	Students ob;
	
	return 0;
}
