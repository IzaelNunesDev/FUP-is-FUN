#include<iostream>
using namespace std;
int main(){
	int n1, n2, final, media;
	cin >> n1 >> n2 >> final;
	media = (n1 + n2)/2;
	
	if(media>7){
		cout << "aprovado" << endl;
	} else if(media<4){
		cout << "reprovado" << endl;
	} else{
		media = (media + final)/2;
		if(media>=5){
			cout << "aprovado na final" << endl;
		} else{
			cout << "reprovado na final" << endl;
		}
	} 
	
}