#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
	float n1{}, n2{}, n3{}, p{};
	cin>> n1 >> n2 >> n3;
	p = (n1+n2+n3)/2;
	float area = sqrt(p*(p-n1)*(p-n2)*(p-n3));
	cout << std::setprecision(2) << fixed;
	cout << area << '\n';
}