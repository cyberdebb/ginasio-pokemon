#ifndef ATAQUE_HPP
#define ATAQUE_HPP

#include <iostream>
#include <locale.h>
#include <utility>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <vector>
#include <thread>
#include <chrono>
#include <string>
#include <sstream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

class Ataque
{
protected:
  string m_nomeAtaque;
  int m_poder;
  int m_tipoDoAtaque;

public:
  Ataque()
  : m_nomeAtaque(""), m_poder(0), m_tipoDoAtaque(0) {};

  Ataque(string nomeAtaque, int poder, int tipoDoAtaque)
  : m_nomeAtaque(nomeAtaque), m_poder(poder), m_tipoDoAtaque(tipoDoAtaque) {};

  //getters
  int getPoder();
  string getNomeAtaque();
  int getTipoDoAtaque();

  void upgrade(float valor);
  void operator *= (float valor);
  vector<Ataque> ataquesDoTipo(int num);

  ~Ataque() {};

};

#endif
