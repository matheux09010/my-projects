#include <iostream>
#include <string>
#include <cmath>
 using namespace std;
 int main()
 {
     char app;
 cout << "selecione qual aplicativo irá utilizar: " << endl;
 cout << "(1.calculadora)" << endl;
 cout << "(2.Banco)" << endl;
 cout << "(3.google)" << endl;
 cin >> app;
  if (app == '1') {
      float n1, n2,resultado;
      char operacao;
      cout << "Digite um número: ";
      cin >> n1;
      cout << "Selecione a operação" << endl;  
      cout << "1.adição" << endl;
      cout << "2.subtração" << endl;
      cout << "3.multiplicação" << endl;
      cout << "4.divisão" << endl;
      cin >> operacao;
      cout << "digite outro numero" << endl;
      cin >> n2;
      switch (operacao) 
      {
     case '1': 
     resultado = n1+n2;
     break;
     case '2':
    resultado = n1-n2;
    break;
    case '3': 
    resultado = n1*n2;
    break;
    case '4':
    if (n2 != 0){
          resultado = n1/n2;
    }
    else {
        cout << "ERROR! DIVISÃO POR ZERO!";
        return 1; 
    }
    break;
    }
    cout << "o resultado é: " << resultado << endl;
  } else if (app == '2') {
      char opcao, Cpix, conf;
      float saldo = 2500;
        cout << "Bem-vindo(a) ao Banco Frutífero!" << endl;
   
        cout << "1.ver saldo" << endl;
        cout << "2.fazer pix" <<  endl;
        cin >> opcao;
         
         if (opcao == '1')
         {
             cout << "você selecionou ver saldo " << endl;
         }
         
      if (opcao == '2')
      {
          cout << "você selecionou fazer pix" << endl;
      }
        switch (opcao)
        {
            case '1':
            cout << "O seu saldo é " << saldo;
            break;
        
        case '2':
        cout << "Digite a chave pix do destinatrio´: ";
        cin >> Cpix;
        if (Cpix == '1'){
            cout << "O pix será para Matheus Ramos Pereira? (s/n) ";
           cin >> conf;
                    if (conf == 's' || conf == 'S') {
                        cout << "Transação confirmada. Transferência realizada." << endl;
                    } else {
                        cout << "Transação cancelada." << endl;
                    }
                } else {
                    cout << "Chave PIX inválida." << endl;
                }
                
           
        }
    
        
        
    } 
    else if (app == '3') {
        cout << "Você selecionou o Google." << endl;
    } 
    else {
        cout << "Opção inválida." << endl;
        return 1;
    }
    return 0;
    }