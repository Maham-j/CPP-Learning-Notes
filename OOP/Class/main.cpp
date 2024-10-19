#include <iostream>
#include <string>
using namespace std;

class Employee{
	public:
		string name;
		int salary;
		
	void printDetails(){
		cout << "The name of employee is " << this->name << " and her salary is " << this->salary <<" Dollars"<<endl;
	}
};
int main() {
   
   Employee emp;
   emp.name = "Maham";
   emp.salary = 100;
   emp.printDetails();
   
   Employee emp2;
   emp2.name = "Jamil";
   emp2.salary = 150;
   emp2.printDetails();
    return 0; 
}
