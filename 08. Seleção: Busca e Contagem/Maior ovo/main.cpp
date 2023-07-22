#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int maior = a;
	if(b>maior){
		maior = b;
	}
	if(c>maior){
		maior = c;
	} 
	if(d>maior){
		maior = d;
	}
	cout << maior << endl;
}