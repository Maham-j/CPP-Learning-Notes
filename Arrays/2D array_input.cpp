#include <iostream>
using namespace std;

int main() {
	int arr[2][3] ;
	
	for (int i=0;i<2;++i){
		for (int j=0;j<3;++j){
//			cout <<"The value at index "<<i<<","<<j<<" is "<< arr[i][j]<<endl;
			cin >> arr[i][j];
		}
	}
	
	for (int i=0;i<2;++i){
		for (int j=0;j<3;++j){
//			cout <<"The value at index "<<i<<","<<j<<" is "<< arr[i][j]<<endl;
			cout<< arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
	
	}
