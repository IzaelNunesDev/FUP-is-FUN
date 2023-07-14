#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double valor_televisao, valor_parcela, valor_total;
    int parcelas;

    cin >> valor_televisao;
    cin >> parcelas;

    // Calcular o valor da parcela de acordo com o número de parcelas
    switch (parcelas) {
        case 1:
            valor_parcela = valor_televisao;
            break;
        case 2:
            valor_parcela = (valor_televisao)/2 * 1.05;
            break;
        case 3:
            valor_parcela = (valor_televisao)/3 * 1.10;
            break;
        case 4:
            valor_parcela = (valor_televisao)/4 * 1.15;
            break;
        case 5:
            valor_parcela = (valor_televisao)/5 * 1.20;
            break;
        case 6:
            valor_parcela = (valor_televisao)/6 * 1.25;
            break;
        case 7:
            valor_parcela = (valor_televisao)/7 * 1.30;
            break;
        case 8:
            valor_parcela = (valor_televisao)/8 * 1.35;
            break;
        case 9:
            valor_parcela = (valor_televisao)/9 * 1.40;
            break;
        case 10:
            valor_parcela = (valor_televisao)/10 * 1.45;
            break;
        default:
            std::cout << "Numero de parcelas invalido." << std::endl;
            return 0;
    }

    // Calcular o valor total a ser pago
    valor_total = valor_parcela * parcelas;

    // Imprimir os resultados
    cout << std::fixed << setprecision(2);
    cout << valor_parcela << endl;
    cout << valor_total << endl;

    return 0;
}