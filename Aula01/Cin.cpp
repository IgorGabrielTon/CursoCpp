#include <iostream>


using namespace std;

int main(){

    cout << "Conhecendo variáveis em C++\n";

    int Idade = 0b0101;
    float Altura = 1.55;
    double decimal = 1.45689;
    char Letra = 'a';
    string Nome = "Igor";

    cout  << "Sua Idade é: " << Idade << ", e seu nome é " << Nome << endl;


    cout << "Agora é sua vez:\nDigite seu nome " << endl;
    cin >> Nome;
    cout << "Seu nome é" << Nome;

 return 0x0;
}
