#include<iostream>
using namespace std;

int main(){
    char esc, esc2;
    cin >> esc >> esc2;
    
    if((esc == 'R' && esc2 == 'S') || (esc == 'S' && esc2 == 'P') || (esc == 'P' && esc2 == 'R')){
        cout << "jog1" << endl;
    } else if(esc == esc2){
        cout << "empate" << endl;
    } else {
        cout << "jog2" << endl;
    }
    
    return 0;
}