#include <iostream>
#include <string>
using namespace std;

struct Funcionario{
    unsigned int codigo;
    string nome;
    //endereco
    string cargo;
    float salario;
    char estadoCivil; // s, c, v, d
    unsigned int escolaridade; // 1, 2, 3

};

Funcionario iniciaFuncionario(){
    Funcionario f;
    cout << "Informe o codigo do funcionario: ";
    cin >> f.codigo;
    cout << "Informe o nome completo do funcionario: ";
    cin.ignore(); // limpar o buffer do teclado
    getline(cin, f.nome);
    cout << "Informe o salario do funcionario: ";
    cin >> f.salario;
    cout << "Informe o estado civil do funcionario: ";
    cin >> f.estadoCivil;
    cout << "Informe a escolaridade do funcionario: ";
    cin >> f.escolaridade;
    return f;
}

void imprimeFuncionario(Funcionario f){
    cout << "Codigo: " << f.codigo << endl;
    cout << "Nome: " << f.nome << endl;
    cout << "Salario: " << f.salario << endl;
    cout << "Estado Civil: " << f.estadoCivil << endl;
    cout << "Escolaridade: " << f.escolaridade << endl;
}

int main(){
    Funcionario f1, f2;
    f1 = iniciaFuncionario();
    imprimeFuncionario(f1);
    return 0;
}