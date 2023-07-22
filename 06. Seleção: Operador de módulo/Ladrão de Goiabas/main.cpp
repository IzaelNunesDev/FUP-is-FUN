#include<iostream>
using namespace std;
int main(){
	int C, QB, QG, QM, R,R1;
	
	cin>> C >> QB >> QG >> QM;
	R = QB+QM+QG;
	R1= (R/C)+(R%C!=0);	
	cout << R1 << endl;
	
	
}