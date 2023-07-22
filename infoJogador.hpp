#ifndef INFOJOGADOR_HPP
#define INFOJOGADOR_HPP

#include <cstring>
#include <algorithm>
#include <iostream>

class InfoJogador
{
protected:
  string m_nomeJogador;
  int m_sexoJogador;

public:
  InfoJogador() : m_nomeJogador(""), m_sexoJogador(0) {};

  void setInfo() //recebe e define as informacoes do jogador
  {
    cout<<endl<<"Digite seu nome:"<<endl;

    while(getline(cin, m_nomeJogador)) //recebe a mensagem escrita pelo usuario
     if(m_nomeJogador != ""){ //limpar o buffer para usar o getline
            break;
      }
    transform(m_nomeJogador.begin(), m_nomeJogador.end(), m_nomeJogador.begin(), ::toupper);

    cout<<endl<<"Selecione seu personagem:" <<endl<< "Menino(1)/Menina(2)"<<endl;
    int sexo_num;

    while(true)
    {
    cin>>sexo_num;

    if(sexo_num==1 || sexo_num==2){
    m_sexoJogador=sexo_num;
    break;
    }

    else //se o sexo selecionado for uma opção invalida
    cout<<"Selecione uma alternativa válida"<<endl;
    }

  }


};

#endif
