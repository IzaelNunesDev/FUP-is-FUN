#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(x!=y && x !=z){
		cout << "jog1" << endl;
	} else if(y!=x &&  y!=z){
		cout << "jog2" << endl;
	} else if(z!=x && z!=y){
		cout << "jog3" << endl;
	} else{
		cout << "empate" << endl;
	}
}