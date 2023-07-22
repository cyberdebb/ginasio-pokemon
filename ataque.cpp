#include "ataque.hpp"

int Ataque::getPoder()
{
  return m_poder;
}

string Ataque::getNomeAtaque()
{
  return m_nomeAtaque;
}

int Ataque::getTipoDoAtaque()
{
  return m_tipoDoAtaque;
}

void Ataque::upgrade(float valor)
{
  m_poder*=valor; //aumenta o poder do golpe
}

void Ataque::operator *= (float valor)
{
  upgrade(valor); //chama a funcao upgrade com operador
}

vector<Ataque> Ataque::ataquesDoTipo(int num)
{
  vector<Ataque> todoOsAtaques; //define todos os ataques disponiveis
  vector<Ataque> listaDeAtaques; //define os 4 ataques selecionados

  //ataques do tipo normal
  int x=0;
  Ataque a1("Quick Attack", 40, x);
  Ataque a2("Tail Whip", 1, x);
  Ataque a3("Roar", 1, x);
  Ataque a4("Leer", 1, x);
  Ataque a5("Defense Curl", 1, x);
  Ataque a6("Growl", 1, x);
  Ataque a7("Screech", 1, x);
  Ataque a8("SonicBoom", 1, x);
  Ataque a9("Selfdestruct", 50, x);
  Ataque a10("Tackle", 40, x);
  Ataque a11("Swift", 60, x);
  Ataque a12("Harden", 1, x);
  Ataque a13("Stomp", 65, x);
  Ataque a14("Scratch", 40, x);
  Ataque a15("Wrap", 15, x);
  Ataque a16("Slam", 80, x);

  todoOsAtaques.push_back(a1);
  todoOsAtaques.push_back(a2);
  todoOsAtaques.push_back(a3);
  todoOsAtaques.push_back(a4);
  todoOsAtaques.push_back(a5);
  todoOsAtaques.push_back(a6);
  todoOsAtaques.push_back(a7);
  todoOsAtaques.push_back(a8);
  todoOsAtaques.push_back(a9);
  todoOsAtaques.push_back(a10);
  todoOsAtaques.push_back(a11);
  todoOsAtaques.push_back(a12);
  todoOsAtaques.push_back(a13);
  todoOsAtaques.push_back(a14);
  todoOsAtaques.push_back(a15);
  todoOsAtaques.push_back(a16);

  if(num==1)
  {
    x=1;
    //ataques do tipo fogo
    Ataque a17("Ember", 40, x);
    Ataque a18("Flamethrower", 95, x);
    Ataque a19("Fire Spin", 35, x);
    Ataque a20("Fire Punch", 75, x);
    Ataque a21("Fire Blast", 110, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==2)
  {
    x=2;
    //ataques do tipo agua
    Ataque a17("Bubble", 40, x);
    Ataque a18("Clamp", 35, x);
    Ataque a19("Hydro Pump", 110, x);
    Ataque a20("Surf", 90, x);
    Ataque a21("Water Gun", 40, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==3)
  {
    x=3;
    //ataques do tipo grama
    Ataque a17("Absorb", 20, x);
    Ataque a18("Leech Seed", 1, x);
    Ataque a19("Mega Drain", 40, x);
    Ataque a20("Petal Dance", 120, x);
    Ataque a21("Solar Beam", 120, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==4)
  {
    x=4;
    //ataques do tipo eletrico
    Ataque a17("Thunder", 110, x);
    Ataque a18("Thunder Punch", 75, x);
    Ataque a19("Thunderbolt", 90, x);
    Ataque a20("Thunder Shock", 40, x);
    Ataque a21("Thunder Wave", 1, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);
  }

  if(num==5)
  {
    x=5;
    //ataques do tipo lutador
    Ataque a17("Counter", 1, x);
    Ataque a18("Double Kick", 30, x);
    Ataque a19("High Jump Kick", 130, x);
    Ataque a20("Karate Chop", 50, x);
    Ataque a21("Low Kick", 1, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==6)
  {
    x=6;
    //ataques do tipo veneno
    Ataque a17("Acid", 40, x);
    Ataque a18("Poison Gas", 1, x);
    Ataque a19("Poison Sting", 15, x);
    Ataque a20("Smog", 30, x);
    Ataque a21("Toxic", 1, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==7)
  {
    x=7;
    //ataques do tipo terra
    Ataque a17("Bone Club", 65, x);
    Ataque a18("Bonemerang", 50, x);
    Ataque a19("Dig", 80, x);
    Ataque a20("Earthquake", 100, x);
    Ataque a21("Sand Attack", 1, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==8)
  {
    x=8;
    //ataques do tipo voador
    Ataque a17("Drill Peck", 80, x);
    Ataque a18("Fly", 90, x);
    Ataque a19("Gust", 40, x);
    Ataque a20("Mirror Move", 1, x);
    Ataque a21("Peck", 35, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);
    todoOsAtaques.push_back(a20);
    todoOsAtaques.push_back(a21);

  }

  if(num==9)
  {
    x=9;
    //ataques do tipo rocha
    Ataque a17("Rock Slide", 75, x);
    Ataque a18("Rock Trow", 50, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
  }

  if(num==10)
  {
    x=10;
    //ataques do tipo fantasma
    Ataque a17("Confuse Ray", 1, x);
    Ataque a18("Lick", 30, x);
    Ataque a19("Night Shade", 1, x);

    todoOsAtaques.push_back(a17);
    todoOsAtaques.push_back(a18);
    todoOsAtaques.push_back(a19);

  }

  //garante que todos os ataques serao diferentes entre si
  int random1 = rand() % todoOsAtaques.size();

  redo2:
  int random2 = rand() % todoOsAtaques.size();
  if(random2==random1)
  goto redo2;

  redo3:
  int random3 = rand() % todoOsAtaques.size();
  if(random3==random1 || random3==random2)
  goto redo3;

  redo4:
  int random4 = rand() % todoOsAtaques.size();
  if(random4==random1 || random4==random2 || random4==random3)
  goto redo4;

  //define aleatoriamente os ataques dentro do escopo do tipo de Pokemon selecionado
  listaDeAtaques.push_back(todoOsAtaques.at(random1));
  listaDeAtaques.push_back(todoOsAtaques.at(random2));
  listaDeAtaques.push_back(todoOsAtaques.at(random3));
  listaDeAtaques.push_back(todoOsAtaques.at(random4));

  return listaDeAtaques;
}
