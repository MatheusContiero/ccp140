#include <iostream>
using namespace std;

class Data{
    private:
        int dia, mes, ano;

    public:
        Data(int dia, int mes, int ano){
            this->dia = dia;
            this->mes = mes;
            this->ano = ano;
        }

        string getData(){
            return to_string(dia)+"/"+to_string(mes)+"/"+to_string(ano);
        }

};