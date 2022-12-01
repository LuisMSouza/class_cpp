#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Car
{
public:
    string marca, cor;
    int anoFabricacao;
    float valor;
    float vi, ipva, vAno;
    float CalcIPVA(int anoAtual)
    {
        vi = (valor * 0.05);
        vAno = anoAtual - anoFabricacao;
        vi = vi - (vi * 0.1 * vAno);
        if (vi < 0)
        {
            ipva = 0;
        }
        else
        {
            ipva = vi;
        }
        return ipva;
    }
};

int main()
{
    system("cls");
    Car carro;
    float preco;
    int anoFab;
    string cor, marca;
    cout << "Digite o valor do veículo: ";
    cin >> preco;
    carro.valor = preco;
    cout << "Digite o ano de fabricação: ";
    cin >> anoFab;
    carro.anoFabricacao = anoFab;
    cout << "Digite a cor: ";
    cin >> cor;
    carro.cor = cor;
    cout << "Digite a marca: ";
    cin >> marca;
    carro.marca = marca;
    float final = carro.CalcIPVA(2022);
    cout << "O valor do IPVA é: " << final << endl;
    return 0;
}