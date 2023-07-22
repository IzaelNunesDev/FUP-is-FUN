#include<iostream>
using namespace std;
int main(){
	int M, A, B;
	cin >> M >> A >> B;
	int C = M-(A+B);
	int maior = A;
	if(B>maior){
		maior = B;
	}
	if(C>maior){
		maior = C;
	}
	cout << maior << endl;
	
}