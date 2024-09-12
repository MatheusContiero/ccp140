#include <iostream>
#include "Pessoa.cpp"
using namespace std; 

// g++ main.cpp -> rodar só um arquivo declarado pelo nome colocado
// g++ *.cpp -> rodar mais de um arquivo
// ./a.out

int main (){
    Pessoa p("Nome", "Sobrenome", 123456789, 12, 06, 2024);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
}