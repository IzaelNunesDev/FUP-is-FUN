#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	float sal;
	cin >> sal;
	
	if(sal<=1000){
		sal += sal*0.20;
	} else if(sal<=1500){
		sal += sal*0.15;
	} else if(sal <=2000){
		sal += sal*0.10;
	} else {
		sal += sal*0.05;
	}
	
	cout <<fixed << setprecision(2) << sal << endl;
	
}