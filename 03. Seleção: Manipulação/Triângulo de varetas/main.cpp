#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >>c ;
	if((a<b+c) && (b <a+c) && (c <a+b)){
		cout << "True" << endl;
	} else{
		cout << "False" << endl;
	}
}