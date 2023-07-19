#include<iostream>
using namespace std;
int main(){
	int b,t, a;
	cin >> b >> t;
	a = (b+t)*35;
	
	if(a>35*160){
		cout<<1<<endl;
	}else if( a<35*160) {
		cout <<2<<endl;
	}else{
		cout<<0<<endl;
	}
}