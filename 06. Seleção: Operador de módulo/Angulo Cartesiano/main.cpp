#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int ang;
	cin >> ang;
	
	int	mod =  ang%360;
	if(mod>= 0){
		cout << mod << endl;
	} else{
		cout << mod+360 << endl;
	}
	
}