#include <iostream>
#include "Pessoa.cpp"
using namespace std; 

// g++ main.cpp -> rodar só um arquivo declarado pelo nome colocado
// g++ *.cpp -> rodar mais de um arquivo
// ./a.out

int main (){
    Endereco e("Rua R", 2, "Bairro B");
    Pessoa p("Nome", "Sobrenome", 123456789, 12, 06, 2024, e); // endereco é agregado

    cout << "Dados da pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
    cout << "Endereco: " << p.getEndereco() << endl;
}