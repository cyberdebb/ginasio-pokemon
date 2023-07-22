#ifndef POKEMON_HPP
#define POKEMON_HPP

#include "ataque.hpp"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

class Pokemon
{
protected:
  string m_nome;
  string m_tipo;
  string m_sexo;
  int m_ataque;
  int m_defesa;
  int m_vida;
  int vida_original; //vida base do Pokemon

public:
  Pokemon()
  :m_nome(""), m_tipo(""), m_sexo(""), m_ataque(0), m_defesa(0), m_vida(0), vida_original(0) {};

  Pokemon(string n, string t, string s, int a, int d, int hp)
	{
    m_nome = n;
	  m_tipo = t;
	  m_sexo = s;
	  m_ataque = a;
	  m_defesa = d;
    m_vida = vida_original = hp;
	}

	//getters
  int getVida();
  int getVidaOriginal();
  int getAtaque();
	int getDefesa();
  string getNome();
  string getNomeTipo();
  int getTipo();

  //setters
  void display();

  void tirarVida(int valor);
  void operator -= (int valor);

  void curar(int quanto_curar);
  void operator += (int valor);

  void fight(Ataque &meu, Ataque &op, Pokemon *eu, Pokemon *oponente);

  ~Pokemon() {};

};


#endif
