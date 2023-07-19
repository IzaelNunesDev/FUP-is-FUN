#include<iostream>
using namespace std;
int main(){
	double A, G, Ra, Rg;
	cin >> A >> G >> Ra >> Rg;
	
	double custoA = A/Ra;
	
	double custoG = G/Rg;
	
	if(custoA < custoG){
		cout << 'A' << endl;
	} else if(custoA > custoG){
		cout << 'G' << endl;
	} else{
		cout << 'G' << endl;
	}
}	