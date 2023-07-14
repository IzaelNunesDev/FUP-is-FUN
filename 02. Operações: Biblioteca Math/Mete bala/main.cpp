#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
 	float xA{}, yA{}, xB{}, yB 	{};
	cin>> xA >> yA >> xB >> yB;

	float distancia =  sqrt(pow((xB-xA),2)+pow((yB-yA),2));
	cout << std::setprecision(2) << fixed;
	cout << distancia << '\n';
}