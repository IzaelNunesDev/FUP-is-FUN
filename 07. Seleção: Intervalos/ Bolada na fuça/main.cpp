#include<iostream>
using namespace std;
int main(){
	int P, F, T;
	char car;
	cin >> car >> F;
	if(car == 'b'){
		T = 20;
		P = ((F * T) - 80) / 10;
	} else{
		T = 18;
		P = ((F * T) - 80) / 10;
	}
	if(P<150){
		cout << "Fraco, nem passou" << endl;
	} else if(P>=150 && P<180){
		cout << "Perfeito" << endl;
	} else if(P>=180 && P<210){
		cout << "Satisfeito" << endl;
	} else {
		cout << "Muito forte, bola fora" << endl;
	}
		
}