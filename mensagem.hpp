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
  "Após uma longa jornada, você finalmente encontra o ginásio Pokémon que você tanto procurou: "<<endl<<
  "O ginásio da cidade de Erodab!"<<endl;

  delay(30, sst.str()); //printa as letras com 30 milissegundos de espacamento
  sst.str(""); //limpa a "string"
  getch(); //passa para proxima fala se o jogador pressionar qualquer tecla

  sst<<
  "Logo à sua frente, você encontra um ancião que parece conhecer aquela cidade como a palma de sua mão."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Ele se aproxima e diz: "<<endl<<endl<<
  "-Parece que tem sangue novo na cidade!"<<endl<<"Imagino que você veio pelo ginásio, não foi? "<<endl<<
  "Eu conheço seu tipo, vejo jovem igual a você o tempo todo.. Aliás, quem é você?"<<endl;

  delay(30, sst.str());
  sst.str("");

  setInfo();

  cout<<endl;

  sst<<
  "-Certo! Então eu imagino que você já saiba como funcionam os ginásios, certo "<<m_nomeJogador<<"?"<<endl<<
  "Sim-s / Não-n"<<endl;

  delay(30, sst.str());
  sst.str("");

  insira_de_novo:
  char c;
  cin>>c;

  if(c=='n')
  {
    sst<<endl<<
    "Os ginásios são locais onde você pode batalhar contra os Pokémon de treinadores rivais."<<endl<<
    "Treinadores lutam pelo controle dos ginásios."<<endl<<
    "Você terá que batalhar com alguns treinadores para conseguir vencer por meio de batalhas Pokémon."<<endl<<
    "Você terá 5 pontos de vida (PV) para curar seus pokemons entre as batalhas. Use-os sabiamente!"<<endl;
  }

  else if(c=='s')
  sst<<"Eu imaginei.."<<endl;

  else
  goto insira_de_novo;

  delay(30, sst.str());
  sst.str("");

  getch();
  sst<<endl<<
  "-Mas independente de qualquer coisa, tome cuidado com a Erika, a líder desse ginásio! "<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Depois não diga que eu não avisei..."<<endl;

  delay(100, sst.str()); //printa as letras com 100 milissegundos de espacamento
  sst.str("");

  sst<<endl<<
  "Boa sorte, "<<m_nomeJogador<<"!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();
  system ("CLS");

  sst<<endl<<
  "Quanto mais você se aproxima do ginásio, mais você sente que foi feito pra isso."<<endl<<
  "Batalhas Pokémon são a coisa que você mais gosta de fazer."<<endl<<
  "E hoje é o dia pra provar pra todos que você sabe o que está fazendo!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  string depende_do_sexo;

  if(m_sexoJogador==1)
  depende_do_sexo="aquele garoto";
  if(m_sexoJogador==2)
  depende_do_sexo="aquela garota";

  sst<<endl<<
  "Uma garota com uma grande e vermelha fita no cabelo vem em sua direção, e....."<<endl<<endl<<
  "-Ahhhh então você deve ser "<<depende_do_sexo<<" de quem tava todo mundo falando!!!!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Eu me chamo Fiona!! Prazer!! :3333"<<endl<<
  "Já vamos começar sua primeira batalha no ginásio!!!"<<endl<<
  "Isso não é empolgante?"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Logo após dizer isso, a garota se posiciona e prepara sua pokébola."<<endl<<
  "Você sente que a batalha irá começar."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

}

    if(m_numeroMensagem==2){
  sst<<endl<<
  "-Nossa "<<m_nomeJogador<<"! Você é melhor do que eu esperava!!!"<<endl<<
  "Muuuita boa sorte nessa jornada! Espero te ver mais vezes!!!!!!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<
  "Assim que a Fiona sai do local, você já pega suas pokébolas na ansiedade da próxima batalha."<<endl<<
  "Já se forma um clima tenso no ar enquanto o próximo treinador se aproxima..."<<endl<<
  "Com cara de poucos amigos e cabelo na cara, ele diz: "<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "-Oi, eu me chamo Pedro."<<endl<<
  "Vamo acabar logo com isso, não tenho tempo a perder."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Você se prepara para a batalha novamente."<<endl;

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
  "Você sente que está se saindo bem."<<endl<<
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
  "-Olá "<<depende_do_sexo<<", eu sou a Vanessa.. Pronto pra receber uma surra??"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Ela fala com tanta confiança que chega a intimidar"<<endl<<
  "Mas ninguém pode te amedrontar!"<<endl<<
  "Afinal, você está aqui pra ganhar."<<endl;

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
  "Ela se parece muito com um Bulldog mas você jamais teria coragem de falar isso na cara dela."<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "-E aí, "<<m_nomeJogador<<" ?"<<endl<<
  "Já comprou o caixão dos seus Pokémon??"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Você vai precisar logo logo."<<endl;

  delay(100, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Você sente que vai ser difícil, mas tem que estar pronto!"<<endl<<
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
  "-Não pode ser!"<<endl<< "Como alguém como você pode derrotar alguém como eu??"<<endl<<
  "Eu simplesmente não aceito!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "Acho que vou ter que chamar uma ~ajudinha~"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "EQUIPE ROCKET!!!!!! EU PRECISO DE VOCÊS!!!!!!!!"<<endl;

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
  cout<<"-Para proteger o mundo da devastação!"<<endl;
  sleep(1);
  cout<<"-Para unir as pessoas de nossa nação!"<<endl;
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
  cout<<"-Miau é isso ai!"<<endl;
  sleep(1);

  getch();

  sst<<endl<<
  "-Você achou que eu, Erika não iria contar com apoio pra proteger meu ginásio?"<<endl<<
  "HAHAHHAHAHAHHAHAHH COITADO!"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

}

    if(m_numeroMensagem==6){
  sst<<endl<<
  "-Eu realmente acho que te subestimei, "<<m_nomeJogador<<"..."<<
  "Acho que você provou ter merecido vencer os treinadores deste ginásio."<<endl<<endl<<
  "Com muito desgosto, Erika diz:"<<endl;

  delay(30, sst.str());
  sst.str("");
  getch();

  sst<<endl<<
  "PARABÉNS "<<m_nomeJogador<<endl;

  delay(150, sst.str());
  sst.str("");
  getch();

}
  }

  void operator ++ (int valor)
  {
    m_numeroMensagem+=valor;
  }

  void showPoke(Pokemon poke) //mostra a arte do Pokémon
  {
    imagem_txt->show(poke);
  }

  void gameover() //mostra a arte do gameover
  {
    imagem_txt->zemane();
  }

  void vitoria() //mostra a arte da vitória
  {
    imagem_txt->parabens();
  }

  ~Mensagem() {delete imagem_txt;};

};

#endif
