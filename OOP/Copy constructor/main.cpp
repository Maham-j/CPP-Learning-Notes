#include <iostream>
using namespace std;

int count = 0;
class num{
	int a;
	public:
		num(){
			 a = 0;
		}
		num(int n){
			 a = n;	
		}
		//When no copy constructor is called, compiler supplies its own copy constrcutor
		num(num &obj){
			cout << "Copy constructor called!";
			 a = obj.a;
		}
		
		void display(){
			cout << "The value for this object is " << a << endl;
		}
		
};
int main(){
	num x,y,z(45),z2;
	x.display();
	y.display();
	z.display();
	
	num z1(z); //copy constructor invoked
	z1.display();
	//z1 should exacly resemble like z or x or y
	
	z2 = z; //copy constructer will not invoked
	z2.display();
	
	num z3 = z; //copy constructor invoked
	
	
	
	
	return 0;
}
