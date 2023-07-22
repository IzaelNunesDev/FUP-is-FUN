#include<iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	
	num = num%360;
	
	if(num<0){
		num += 360;
		cout << num << endl;
	} else{
		cout << num << endl;
	}
	
}