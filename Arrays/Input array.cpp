
#include <iostream>
using namespace std;

int main() {
	int arr[6];
	for (int i=0;i<6;++i){
		cin>>arr[i];
	}
	for (int i=1;i<=6;++i){
		cout<< "Marks of student " <<i<<" is "<<arr[i-1]<<endl;
	}
    	return 0;
    		
	}

