#include "pokemon.hpp"

//matriz de intensificadores para cada tipo de ataque
/*
0 - Normal;
1 - Fogo;
2 - Água;
3 - Grama;
4 - Elétrico;
5 - Lutador;
6 - Veneno;
7 - Terra;
8 - Voador;
9 - Rocha;
10 - Fantasma;
*/
//ataque / defesa
double m[11][11]={
  {1,1,1,1,1,1,1,1,1,0.5,0},

    /*m[0][0]=1;
    m[0][1]=1;
    m[0][2]=1;
    m[0][3]=1;
    m[0][4]=1;
    m[0][5]=1;
    m[0][6]=1;
    m[0][7]=1;
    m[0][8]=1;
    m[0][9]=0.5;
    m[0][10]=0;*/

  {1,0.5,0.5,2,1,1,1,1,1,0.5,1},

    /*m[1][0]=1;
    m[1][1]=0.5;
    m[1][2]=0.5;
    m[1][3]=2;
    m[1][4]=1;
    m[1][5]=1;
    m[1][6]=1;
    m[1][7]=1;
    m[1][8]=1;
    m[1][9]=0.5;
    m[1][10]=1;*/

  {1,2,0.5,0.5,1,1,1,2,1,2,1},

    /*m[2][0]=1;
    m[2][1]=2;
    m[2][2]=0.5;
    m[2][3]=0.5;
    m[2][4]=1;
    m[2][5]=1;
    m[2][6]=1;
    m[2][7]=2;
    m[2][8]=1;
    m[2][9]=2;
    m[2][10]=1;*/

  {1,0.5,2,0.5,1,1,0.5,2,0.5,2,1},

    /*m[3][0]=1;
    m[3][1]=0.5;
    m[3][2]=2;
    m[3][3]=0.5;
    m[3][4]=1;
    m[3][5]=1;
    m[3][6]=0.5;
    m[3][7]=2;
    m[3][8]=0.5;
    m[3][9]=2;
    m[3][10]=1;*/

  {1,1,2,0.5,0.5,1,1,0,2,1,1},

    /*m[4][0]=1;
    m[4][1]=1;
    m[4][2]=2;
    m[4][3]=0.5;
    m[4][4]=0.5;
    m[4][5]=1;
    m[4][6]=1;
    m[4][7]=0;
    m[4][8]=2;
    m[4][9]=1;
    m[4][10]=1;*/

  {2,1,1,1,1,1,0.5,1,0.5,2,0},

    /*m[5][0]=2;
    m[5][1]=1;
    m[5][2]=1;
    m[5][3]=1;
    m[5][4]=1;
    m[5][5]=1;
    m[5][6]=0.5;
    m[5][7]=1;
    m[5][8]=0.5;
    m[5][9]=2;
    m[5][10]=0;*/

  {1,1,1,2,1,1,0.5,0.5,1,0.5,0.5},

    /*m[6][0]=1;
    m[6][1]=1;
    m[6][2]=1;
    m[6][3]=2;
    m[6][4]=1;
    m[6][5]=1;
    m[6][6]=0.5;
    m[6][7]=0.5;
    m[6][8]=1;
    m[6][9]=0.5;
    m[6][10]=0.5;*/

  {1,2,1,0.5,2,1,2,1,0,2,1},

    /*m[7][0]=1;
    m[7][1]=2;
    m[7][2]=1;
    m[7][3]=0.5;
    m[7][4]=2;
    m[7][5]=1;
    m[7][6]=2;
    m[7][7]=1;
    m[7][8]=0;
    m[7][9]=2;
    m[7][10]=1;*/

  {1,1,1,2,0.5,2,1,1,1,0.5,1},

    /*m[8][0]=1;
    m[8][1]=1;
    m[8][2]=1;
    m[8][3]=2;
    m[8][4]=0.5;
    m[8][5]=2;
    m[8][6]=1;
    m[8][7]=1;
    m[8][8]=1;
    m[8][9]=0.5;
    m[8][10]=1;*/

  {1,2,1,1,1,0.5,1,0.5,2,1,1},

    /*m[9][0]=1;
    m[9][1]=2;
    m[9][2]=1;
    m[9][3]=1;
    m[9][4]=1;
    m[9][5]=0.5;
    m[9][6]=1;
    m[9][7]=0.5;
    m[9][8]=2;
    m[9][9]=1;
    m[9][10]=1;*/

  {0,1,1,1,1,1,1,1,1,1,2}

    /*m[10][0]=0;
    m[10][1]=1;
    m[10][2]=1;
    m[10][3]=1;
    m[10][4]=1;
    m[10][5]=1;
    m[10][6]=1;
    m[10][7]=1;
    m[10][8]=1;
    m[10][9]=1;
    m[10][10]=2;*/
  };

void Pokemon::display() //mostra as infos sobre o Pokemon
{
  if(m_vida<0)
  m_vida=0;

  cout << "-----------------------" << endl;
  cout << "Nome: " << m_nome << endl;
  cout << "Tipo: " << m_tipo << endl;
  cout << "Sexo: " << m_sexo << endl;
  cout << "Defesa: " << m_defesa << endl;
  cout << "Ataque: " << m_ataque << endl;
  if(m_vida<0)
  m_vida==0; //garante que a vida não seja negativa
  cout << "Vida: " << m_vida << endl;
  cout << "-----------------------" << endl;
}

int Pokemon::getVida()
{
  return m_vida;
}

int Pokemon::getVidaOriginal()
{
  return vida_original;
}

void Pokemon::tirarVida(int valor)
{
  m_vida-=valor;
}

void Pokemon::operator -= (int valor)
{
  tirarVida(valor);
}

int Pokemon::getAtaque()
{
  return m_ataque;
}

int Pokemon::getDefesa()
{
  return m_defesa;
}

string Pokemon::getNome()
{
  return m_nome;
}

string Pokemon::getNomeTipo()
{
  return m_tipo;
}

int Pokemon::getTipo() //retorna o valor numerico do tipo do Pokemon
{
  int tipo_numero;
  /*
  0 - Normal;
  1 - Fogo;
  2 - Água;
  3 - Grama;
  4 - Elétrico;
  5 - Lutador;
  6 - Veneno;
  7 - Terra;
  8 - Voador;
  9 - Rocha;
  10 - Fantasma;
  */

 if(m_tipo=="Normal")
 tipo_numero = 0;

 if(m_tipo=="Fogo")
 tipo_numero = 1;

 if(m_tipo=="Água")
 tipo_numero = 2;

 if(m_tipo=="Grama")
 tipo_numero = 3;

 if(m_tipo=="Elétrico")
 tipo_numero = 4;

 if(m_tipo=="Lutador")
 tipo_numero = 5;

 if(m_tipo=="Veneno")
 tipo_numero = 6;

 if(m_tipo=="Terra")
 tipo_numero = 7;

 if(m_tipo=="Voador")
 tipo_numero = 8;

 if(m_tipo=="Rocha")
 tipo_numero = 9;

 if(m_tipo=="Fantasma")
 tipo_numero = 10;

 return tipo_numero;

}

void Pokemon::curar(int quanto_curar)
{
  m_vida+=quanto_curar; //aumenta a vida do Pokemon
}

void Pokemon::operator += (int valor)
{
  curar(valor); //realiza a funcao curar
}

void Pokemon::fight(Ataque &meu, Ataque &op, Pokemon *eu, Pokemon *oponente)
{
  int tanto_que_eu_perdi;
  int tanto_que_o_oponente_perdeu;
  bool ataque_do_oponente=false;

  int critico_meu = 1 + rand() % 2;
  int critico_op = 1 + rand() % 2;
  int random_meu = 1 + rand() % 3;
  int random_op = 1 + rand() % 3;

  cout<<endl;

  //mostra a vida dos Pokemon
  cout<<eu->getNome()<<" tem "<<eu->getVida()<<" de vida."<<endl;
  cout<<oponente->getNome()<<" tem "<<oponente->getVida()<<" de vida."<<endl<<endl;
  getch(); //espera qualquer tecla ser pressionada para passar a proxima info

  //mostra o ataque selecionado pelo Pokemon do jogador
  cout<<eu->getNome()<<" usou "<<meu.getNomeAtaque()<<"!"<<endl<<endl;
  getch();

  //de acordo com o tipo do ataque e o tipo do Pokemon adversario, mostra a efetividade do ataque
  if(m[meu.getTipoDoAtaque()][oponente->getTipo()]==0.5)
  cout<<"Foi pouco efetivo!"<<endl;

  if(m[meu.getTipoDoAtaque()][oponente->getTipo()]==1);

  if(m[meu.getTipoDoAtaque()][oponente->getTipo()]==2)
  cout<<"Foi super efetivo!"<<endl;

  if(critico_meu==2) //intensificador "critico" aleatorio
  cout<<"Foi crítico!"<<endl;

  //balanceamento do dano de acordo com o poder do ataque
  int divisao1;
  if(meu.getPoder()==1)
  divisao1=2;
  else
  divisao1=35;

  //calcula o dano e tira a vida do Pokemon adversário
  tanto_que_o_oponente_perdeu=((critico_meu+2)*meu.getPoder()*(eu->getAtaque()/oponente->getDefesa())+2)/divisao1 * m[meu.getTipoDoAtaque()][oponente->getTipo()]*random_op;
  oponente->operator-=(tanto_que_o_oponente_perdeu+10);
  int vida_oponente;
  vida_oponente=oponente->getVida();
  if(oponente->getVida()<0)
  vida_oponente=0;
  cout<<oponente->getNome()<<" tem "<<vida_oponente<<" de vida."<<endl<<endl;
  getch();

  if(oponente->getVida()>0) //se o ponente tiver sobrevivido, ele ataca
  {
  ataque_do_oponente=true;

  //mostra o ataque aleatoriamente selecionado pelo oponente
  cout<<oponente->getNome()<<" usou "<<op.getNomeAtaque()<<"!"<<endl<<endl;
  getch();

  if(m[op.getTipoDoAtaque()][getTipo()]==0.5)
  cout<<"Foi pouco efetivo!"<<endl;

  else if(m[op.getTipoDoAtaque()][getTipo()]==1);

  else if(m[op.getTipoDoAtaque()][getTipo()]==2)
  cout<<"Foi super efetivo!"<<endl;
  getch();

  if(critico_op==2) //intensificador "critico" aleatório
  cout<<"Foi crítico!"<<endl;
  getch();

  //balanceamento do dano de acordo com o poder do ataque
  int divisao2;
  if(op.getPoder()==1)
  divisao2=2;
  else
  divisao2=40;

  //calcula o dano e tira a vida do Pokemon do jogador
  tanto_que_eu_perdi=((critico_op+2)*op.getPoder()*(oponente->getAtaque()/eu->getDefesa())+2)/divisao2 * m[op.getTipoDoAtaque()][getTipo()]*random_meu;
  eu->operator-=(tanto_que_eu_perdi+10);
  int vida_meupoke;
  vida_meupoke=eu->getVida();
  if(eu->getVida()<0)
  vida_meupoke=0; //garante a vida apresentada nao seja menor que zero
  cout<<eu->getNome()<<" tem "<<vida_meupoke<<" de vida."<<endl<<endl;
  getch();
  }

  cout<<"Dano causado: "<<tanto_que_o_oponente_perdeu+10<<endl;
  if(ataque_do_oponente)
  cout<<"Dano recebido: "<<tanto_que_eu_perdi+10<<endl;
  getch();
  system ("CLS");

}
