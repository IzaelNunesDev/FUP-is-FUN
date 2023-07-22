#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	
	int res = a % 3;
	
	if((a%3 == 0 && b%3 == 0)|| (a%5==0 && b%5==0)){ 
		cout << "sim" << endl;
	}else{
		cout << "nao" << endl;
	}
	
}