#include<iostream>
using namespace std;
int main(){
	char nome[20];
	int idade;
	cin >> nome >> idade;
	if(idade<12){
		cout << nome << " eh crianca"<< endl;
	} else if(idade<18){
		cout << nome << " eh jovem" << endl;
	} else if(idade<65){
		cout << nome << " eh adulto" << endl;
	} else if(idade<1000){
		cout << nome << " eh idoso" << endl;
	} else {
		cout << nome << " eh mumia" << endl;
	}
}