#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int hora{}, min{};
	int dia{}, mes{}, ano{};
	
	cin>> hora >> min >> dia >> mes >> ano;
	
	cout 
	<< setw(2) << setfill('0') << hora <<":" 
	<< setw(2) << setfill('0') << min <<" "
	<< setw(2) << setfill('0') << dia <<"/"
	<< setw(2) << setfill('0') << mes <<"/"
	<< setw(2) << setfill('0') << ano%100 <<endl;
	
}