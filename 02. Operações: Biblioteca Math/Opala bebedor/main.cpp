#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
 	float velocidade{}, min{}, consumo{}, desempenho{};
	cin>> velocidade >> min >> consumo;
	min = min/60;
	float distancia = velocidade*min;
	desempenho = distancia/consumo;
	cout << std::setprecision(2) << fixed;
	cout << desempenho << '\n';
}