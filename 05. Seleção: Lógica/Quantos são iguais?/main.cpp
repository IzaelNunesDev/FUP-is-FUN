#include<iostream>
using namespace std;
int main(){
	int a,b,c, res;
	cin >> a >> b >> c;
	if(a == b && b == c){
		res = 3;
	} else if(a == b || a == c || b == c){
		res = 2;
	} else{
		res = 0;
	}
	cout << res << endl;
}