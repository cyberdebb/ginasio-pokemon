#ifndef MENSAGEM_HPP
#define MENSAGEM_HPP

#include "pokemon.hpp"
#include "showText.hpp"
#include "infoJogador.hpp"

using namespace std;

class Mensagem : public InfoJogador //recebe as informacoes do jogador
{
protected:
  int m_numeroMensagem;

  ShowText *imagem_txt = new ShowText(); //instacia dinamicamente uma classe

public:
  Mensagem() : m_numeroMensagem(0), imagem_txt(NULL) {};

  string getNomeJogador()
  {
    return m_nomeJogador;
  }

  void delay(int x, string f) //usada para printar letra por letra
  {
    for(int i = 0; i < f.length(); i++) {
      cout << f[i];
      std::this_thread::sleep_for(std::chrono::milliseconds(x));
      }
  }

  void logo()
  {
    imagem_txt->intro();
  }

  void falas(){ //aqui estao todas as falas do jogo
    stringstream sst;
    if(m_numeroMensagem==1){
  sst<<endl<<
  "Ap�s uma longa jornada, voc� finalmente encontra o gin�sio Pok�mon que voc� tanto procurou: "<<endl<<
  "O gin�sio da cidade de Erodab!"<<endl;

  delay(30, sst.str()); //printa as letras com 30 milissegundos de espacamento
  sst.str(""); //limpa a "string"
  getch(); //passa para proxima fala se o jogador pressionar qualquer tecla

  sst<<
  "Logo � sua frente, voc� encontra um anci�o que parece conhecer aquela cidade como a palma de sua m�o."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Ele se aproxima e diz: "<<endl<<endl<<
  "-Parece que tem sangue novo na cidade!"<<endl<<"Imagino que voc� veio pelo gin�sio, n�o foi? "<<endl<<
  "Eu conhe�o seu tipo, vejo jovem igual a voc� o tempo todo.. Ali�s, quem � voc�?"<<endl;

  delay(30, sst.str());
  sst.str("");

  setInfo();

  cout<<endl;

  sst<<
  "-Certo! Ent�o eu imagino que voc� j� saiba como funcionam os gin�sios, certo "<<m_nomeJogador<<"?"<<endl<<
  "Sim-s / N�o-n"<<endl;

  delay(30, sst.str());
  sst.str("");

  insira_de_novo:
  char c;
  cin>>c;

  if(c=='n')
  {
    sst<<endl<<
    "Os gin�sios s�o locais onde voc� pode batalhar contra os Pok�mon de treinadores rivais."<<endl<<
    "Treinadores lutam pelo controle dos gin�sios."<<endl<<
    "Voc� ter� que batalhar com alguns treinadores para conseguir vencer por meio de batalhas Pok�mon."<<endl<<
    "Voc� ter� 5 pontos de vida (PV) para curar seus pokemons entre as batalhas. Use-os sabiamente!"<<endl;
  }

  else if(c=='s')
  sst<<"Eu imaginei.."<<endl;

  else
  goto insira_de_novo;

  delay(30, sst.str());
  sst.str("");

  getch();
  sst<<endl<<
  "-Mas independente de qualquer coisa, tome cuidado com a Erika, a l�der desse gin�sio! "<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Depois n�o diga que eu n�o avisei..."<<endl;

  delay(100, sst.str()); //printa as letras com 100 milissegundos de espacamento
  sst.str("");

  sst<<endl<<
  "Boa sorte, "<<m_nomeJogador<<"!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();
  system ("CLS");

  sst<<endl<<
  "Quanto mais voc� se aproxima do gin�sio, mais voc� sente que foi feito pra isso."<<endl<<
  "Batalhas Pok�mon s�o a coisa que voc� mais gosta de fazer."<<endl<<
  "E hoje � o dia pra provar pra todos que voc� sabe o que est� fazendo!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  string depende_do_sexo;

  if(m_sexoJogador==1)
  depende_do_sexo="aquele garoto";
  if(m_sexoJogador==2)
  depende_do_sexo="aquela garota";

  sst<<endl<<
  "Uma garota com uma grande e vermelha fita no cabelo vem em sua dire��o, e....."<<endl<<endl<<
  "-Ahhhh ent�o voc� deve ser "<<depende_do_sexo<<" de quem tava todo mundo falando!!!!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Eu me chamo Fiona!! Prazer!! :3333"<<endl<<
  "J� vamos come�ar sua primeira batalha no gin�sio!!!"<<endl<<
  "Isso n�o � empolgante?"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Logo ap�s dizer isso, a garota se posiciona e prepara sua pok�bola."<<endl<<
  "Voc� sente que a batalha ir� come�ar."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

}

    if(m_numeroMensagem==2){
  sst<<endl<<
  "-Nossa "<<m_nomeJogador<<"! Voc� � melhor do que eu esperava!!!"<<endl<<
  "Muuuita boa sorte nessa jornada! Espero te ver mais vezes!!!!!!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Assim que a Fiona sai do local, voc� j� pega suas pok�bolas na ansiedade da pr�xima batalha."<<endl<<
  "J� se forma um clima tenso no ar enquanto o pr�ximo treinador se aproxima..."<<endl<<
  "Com cara de poucos amigos e cabelo na cara, ele diz: "<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "-Oi, eu me chamo Pedro."<<endl<<
  "Vamo acabar logo com isso, n�o tenho tempo a perder."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Voc� se prepara para a batalha novamente."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

}

    if(m_numeroMensagem==3){
  sst<<endl<<
  "-Ah...... Eu nem queria ganhar mesmo."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Voc� sente que est� se saindo bem."<<endl<<
  "Quando, de repente, uma mulher alta e um pouco desconfiada se aproxima."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  string depende_do_sexo;

  if(m_sexoJogador==1)
  depende_do_sexo="novato";
  if(m_sexoJogador==2)
  depende_do_sexo="novata";

  sst<<endl<<
  "-Ol� "<<depende_do_sexo<<", eu sou a Vanessa.. Pronto pra receber uma surra??"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Ela fala com tanta confian�a que chega a intimidar"<<endl<<
  "Mas ningu�m pode te amedrontar!"<<endl<<
  "Afinal, voc� est� aqui pra ganhar."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();
  system ("CLS");
}

    if(m_numeroMensagem==4){

  string depende_do_sexo;

  if(m_sexoJogador==1)
  depende_do_sexo="Um novato";
  if(m_sexoJogador==2)
  depende_do_sexo="Uma novata";

  sst<<endl<<
  "-COMOOOO???????"<<endl<<
  "EU TO INDIGNADA!!!! NAO PODE SER! "<<endl<<
  depende_do_sexo<<" me derrotar assim???? Deve ser fim de carreira mesmo!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Mas pelo menos eu sei que a Erika vai fazer o trabalho dela..."<<endl;

  delay(100, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Assim que Vanessa diz isso, entra na sala uma mulher <extremamente> forte."<<endl<<
  "Ela se parece muito com um Bulldog mas voc� jamais teria coragem de falar isso na cara dela."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "-E a�, "<<m_nomeJogador<<" ?"<<endl<<
  "J� comprou o caix�o dos seus Pok�mon??"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Voc� vai precisar logo logo."<<endl;

  delay(100, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Voc� sente que vai ser dif�cil, mas tem que estar pronto!"<<endl<<
  "Essa Erika vai ter o que merece!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();
}

    if(m_numeroMensagem==5){
  sst<<endl<<
  "Com uma cara de surpresa, Erika diz:"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "-N�o pode ser!"<<endl<< "Como algu�m como voc� pode derrotar algu�m como eu??"<<endl<<
  "Eu simplesmente n�o aceito!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Acho que vou ter que chamar uma ~ajudinha~"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "EQUIPE ROCKET!!!!!! EU PRECISO DE VOC�S!!!!!!!!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  cout<<endl<<
  "Assim que a Erika diz isso, Jessie, James e Meowth da Equipe Rocket se aproximam:"<<endl<<endl;
  getch();

  cout<<"-Prepare-se para encrenca!"<<endl;
  sleep(1);
  cout<<"-Encrenca em dobro!"<<endl;
  sleep(1);
  cout<<"-Para proteger o mundo da devasta��o!"<<endl;
  sleep(1);
  cout<<"-Para unir as pessoas de nossa na��o!"<<endl;
  sleep(1);
  cout<<"-Pra denunciar os males da verdade e do amor!"<<endl;
  sleep(1);
  cout<<"-Pra estender nosso poder as estrelas!"<<endl;
  sleep(1);
  cout<<"-Jessie."<<endl;
  sleep(1);
  cout<<"-James."<<endl;
  sleep(1);
  cout<<"-Equipe rocket decolando na velocidade da luz!"<<endl;
  sleep(1);
  cout<<"-Renda-se agora."<<endl;
  sleep(1);
  cout<<"-Ou prepare-se para lutar!"<<endl;
  sleep(1);
  cout<<"-Miau � isso ai!"<<endl;
  sleep(1);

  getch();

  sst<<endl<<
  "-Voc� achou que eu, Erika n�o iria contar com apoio pra proteger meu gin�sio?"<<endl<<
  "HAHAHHAHAHAHHAHAHH COITADO!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

}

    if(m_numeroMensagem==6){
  sst<<endl<<
  "-Eu realmente acho que te subestimei, "<<m_nomeJogador<<"..."<<
  "Acho que voc� provou ter merecido vencer os treinadores deste gin�sio."<<endl<<endl<<
  "Com muito desgosto, Erika diz:"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "PARAB�NS "<<m_nomeJogador<<endl;

  delay(150, sst.str());
  sst.str("");
  getch();

}
  }

  void operator ++ (int valor)
  {
    m_numeroMensagem+=valor;
  }

  void showPoke(Pokemon poke) //mostra a arte do Pok�mon
  {
    imagem_txt->show(poke);
  }

  void gameover() //mostra a arte do gameover
  {
    imagem_txt->zemane();
  }

  void vitoria() //mostra a arte da vit�ria
  {
    imagem_txt->parabens();
  }

  ~Mensagem() {delete imagem_txt;};

};

#endif
