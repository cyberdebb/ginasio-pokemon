#ifndef POKEMONMAISFORTE_HPP
#define POKEMONMAISFORTE_HPP

#include "pokemon.hpp"

class PokemonMaisForte : public Pokemon
{
protected:
  float m_intensificador;

public:
  PokemonMaisForte(string n, string t, string s, int a, int d, int hp, float intensificador=0)
  : Pokemon(n, t, s, a, d, hp), m_intensificador(intensificador){};

  void modificador(float valor) //aumenta os status dos Pokemon mais fortes dependendo da variavel valor
  {
    m_intensificador=valor;

    m_vida*=m_intensificador;
    m_defesa*=m_intensificador;
    m_ataque*=m_intensificador;
  }

  void operator *= (float valor)
  {
    modificador(valor); //operador que modifica os status
  }


};

#endif
