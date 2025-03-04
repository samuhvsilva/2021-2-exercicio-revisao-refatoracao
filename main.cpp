#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
    cliente1.Cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
    cliente2.Cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
    cliente3.Cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
    cliente4.Cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
    cliente5.Cep = "13061981";
    cliente5.print();


    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.nome = "Peter Parker";
    e01.idade = "46";
    e01.rgFunc = 27061975;
    e01.SalarioBase = 3000;
    e01.especialidade = "Fotografia";


    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.nome = "Tony Stark";
    e02.idade = "56";
    e02.rgFunc = 4041965;
    e02.SalarioBase = 1000;
    e02.especialidade = "Consertos de equipamentos eletronicos";


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.nome = "Wanda Maximoff";
    e03.idade = "32";
    e03.rgFunc = 16021989;
    e03.SalarioBase = 5000;
    e03.especialidade = "Engenharia e Designeeeeer";


    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;


    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.valor = 100;
    comissao01 += e01.comissao(v01.valor);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.valor = 100;
    comissao02 += e02.comissao(v02.valor);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.valor = 150;
    comissao01 += e01.comissao(v03.valor);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.valor = 10;
    comissao02 += e02.comissao(v04.valor);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.valor = 10000;
    comissao03 += e03.comissao(v05.valor);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.valor = 3000;
    comissao03 += e03.comissao(v06.valor);
    numAtendimentos03+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.valor = 3000;


    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.valor = 5000;
    comissao03 += e03.comissao(v07.valor);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.valor = 80;
    comissao02 += e02.comissao(v08.valor);
    numAtendimentos02+=1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl;
}
