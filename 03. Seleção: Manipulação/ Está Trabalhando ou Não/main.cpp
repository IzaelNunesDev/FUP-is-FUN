#include<iostream>
using namespace std;
int main(){
	int dia, hora, min;
	cin >> dia >> hora >> min;
	if(dia<=6){
		if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)  ){
			cout << "SIM" << endl;
		} else {
			cout << "NAO" << endl;
		}
	}else if(hora >= 8 && hora < 12){
			cout << "SIM" << endl;
	} else {
			cout << "NAO" << endl;
	}
	
}