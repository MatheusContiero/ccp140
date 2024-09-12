#include <iostream>
#include "Pessoa.cpp"
using namespace std; 

// g++ main.cpp -> rodar só um arquivo declarado pelo nome colocado
// g++ *.cpp -> rodar mais de um arquivo
// ./a.out

int main (){
    Pessoa p;
    p.setNome("Nome");
    p.setSobrenome("sobrenome");
    p.setCPF(123456789);

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
}