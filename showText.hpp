#ifndef SHOWTEXT_HPP
#define SHOWTEXT_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

class ShowText
{
protected:
public:
  ShowText() {};

  void show(Pokemon poke) //carrega as artes do Pokemon selecionado
  {
    if(poke.getNome()=="Pidgeot")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/pidgeot.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line)) //carrega o txt linha por linha
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

    if(poke.getNome()=="Vaporeon")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/vaporeon.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line))
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

    if(poke.getNome()=="Arcanine")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/arcanine.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line))
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

    if(poke.getNome()=="Geodude")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/geodude.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line))
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

    if(poke.getNome()=="Raichu")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/raichu.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line))
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

    if(poke.getNome()=="Haunter")
    {
      system("CLS");
      string line;
      ifstream myfile ("./txts/pokemons/haunter.txt");
      if (myfile.is_open())
      {
        while (getline(myfile,line))
        {
          cout<<line<<'\n';
        }
        myfile.close();
      }
      cout<<endl<<endl;
    }

  }

  void intro() //carrega a arte do inicio dos jogo
  {
    system("CLS");
    string line;
    ifstream myfile ("./txts/geral/logo.txt");
    if (myfile.is_open())
    {
      while (getline(myfile,line))
      {
        cout<<line<<'\n';
      }
      myfile.close();
    }
    cout<<endl<<endl;

    stringstream sst;
    sst<<
    "                  Pressione qualquer tecla para continuar!"
    <<endl<<endl;

    cout<<sst.str();
    getch();
    system ("CLS");

  }

  void zemane() //carrega a arte do gameover
  {
    system("CLS");
    string line;
    ifstream myfile ("./txts/geral/gameover.txt");
    if (myfile.is_open())
    {
      while (getline(myfile,line))
      {
        cout<<line<<'\n';
      }
      myfile.close();
    }
    cout<<endl<<endl;
    getch();
  }

  void parabens() //carrega a arte da vitoria
  {
    system("CLS");
    string line;
    ifstream myfile ("./txts/geral/vitoria.txt");
    if (myfile.is_open())
    {
      while (getline(myfile,line))
      {
        cout<<line<<'\n';
      }
      myfile.close();
    }
    cout<<endl<<endl;
    getch();
  }

};

#endif
