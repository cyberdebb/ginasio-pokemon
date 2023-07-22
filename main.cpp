#include "pokemonMaisForte.hpp"
#include "mensagem.hpp"

int main()
{
  setlocale(LC_ALL,"Portuguese"); //permite acentos
  srand((unsigned) time(NULL)); //seed dos numeros aleatórios

  Mensagem dialogos;
  Mensagem arte;
  dialogos.logo(); //mostra a logo ao iniciar do jogo

  dialogos.operator++(1); //aumenta um fator nas falas
  dialogos.falas(); //printa as falas respectivas

   string nomeJogador=dialogos.getNomeJogador();

   //pokemons do personagem
   Pokemon *pidgeot=new Pokemon("Pidgeot", "Voador", "Masculino", 80, 75, 83);
   Pokemon *vaporeon=new Pokemon("Vaporeon", "Água", "Masculino", 65, 60, 130);
   Pokemon *arcanine=new Pokemon("Arcanine", "Fogo", "Feminino", 110, 80, 90);
   Pokemon *geodude=new Pokemon("Geodude", "Rocha", "Feminino", 80, 100, 40);
   Pokemon *raichu=new Pokemon("Raichu", "Elétrico", "Masculino", 90, 55, 60);
   Pokemon *haunter=new Pokemon("Haunter", "Fantasma", "Feminino", 50, 45, 45);

   //pokemon dos oponentes
   Pokemon *voltorb=new Pokemon("Voltorb", "Elétrico", "Sem gênero", 30, 50, 40);
   Pokemon *staryu=new Pokemon("Staryu", "Água", "Sem gênero", 45, 55, 30);
   Pokemon *gloom=new Pokemon("Gloom", "Grama", "Masculino", 65, 70, 60);
   Pokemon *pikachu=new Pokemon("Pikachu", "Elétrico", "Feminino", 55, 40, 35);
   Pokemon *ponyta=new Pokemon("Ponyta", "Fogo", "Feminino", 85, 55, 50);
   Pokemon *machop=new Pokemon("Machop", "Lutador", "Masculino", 80, 50, 70);
   Pokemon *ivysaur=new Pokemon("Ivysaur", "Grama", "Masculino", 62, 63, 60);
   Pokemon *wartortle=new Pokemon("Wartortle", "Água", "Masculino", 63, 80, 59);
   Pokemon *psyduck=new Pokemon("Psyduck", "Água", "Feminino", 52, 48, 50);
   Pokemon *victreebel=new Pokemon("Victreebel", "Grama", "Feminino", 105, 65, 80);
   Pokemon *tangela=new Pokemon("Tangela", "Grama", "Feminino", 55, 115, 65);
   Pokemon *vileplume=new Pokemon("Vileplume", "Grama", "Masculino", 80, 85, 75);

   PokemonMaisForte *arbok=new PokemonMaisForte("Arbok", "Veneno", "Feminino", 95, 69, 60);
   PokemonMaisForte *weezing=new PokemonMaisForte("Weezing", "Veneno", "Masculino", 90, 120, 65);
   PokemonMaisForte *lickitung=new PokemonMaisForte("Lickitung", "Normal", "Masculino", 55, 75, 90);
   PokemonMaisForte *machamp=new PokemonMaisForte("Machamp", "Lutador", "Masculino", 130, 80, 90);

   //aumenta (sob o fator determinado) as estatísticas do Pokemon
   arbok->operator*=(1.25);
   weezing->operator*=(1.5);
   lickitung->operator*=(1.75);
   machamp->operator*=(2);

   //cria os vetores onde os Pokemon serao guardados
   vector <Pokemon> lista_meus_pokemons;
   vector <Pokemon> lista_op_pokemons;

   lista_meus_pokemons.push_back(*pidgeot);
   lista_meus_pokemons.push_back(*vaporeon);
   lista_meus_pokemons.push_back(*arcanine);
   lista_meus_pokemons.push_back(*geodude);
   lista_meus_pokemons.push_back(*raichu);
   lista_meus_pokemons.push_back(*haunter);

   lista_op_pokemons.push_back(*voltorb);
   lista_op_pokemons.push_back(*staryu);
   lista_op_pokemons.push_back(*gloom);
   lista_op_pokemons.push_back(*pikachu);
   lista_op_pokemons.push_back(*ponyta);
   lista_op_pokemons.push_back(*machop);
   lista_op_pokemons.push_back(*ivysaur);
   lista_op_pokemons.push_back(*wartortle);
   lista_op_pokemons.push_back(*psyduck);
   lista_op_pokemons.push_back(*victreebel);
   lista_op_pokemons.push_back(*tangela);
   lista_op_pokemons.push_back(*vileplume);

   lista_op_pokemons.push_back(*arbok);
   lista_op_pokemons.push_back(*weezing);
   lista_op_pokemons.push_back(*lickitung);
   lista_op_pokemons.push_back(*machamp);

   /*
   0 - Voltorb
   1 - Staryu
   2 - Gloom
   3 - Pikachu
   4 - Ponyta
   5 - Machop
   6 - Ivysaur
   7 - Wartortle
   8 - Psyduck
   9 - Victreebel
   10 - Tangela
   11 - Vileplume
   12 - Arbok
   13 - Weezing
   14 - Lickitung
   15 - Machamp
   */

int pv=5;
int killed_pokemons=0;
int menu;
int poke_adv=0;
int poke;

Ataque meu;
Ataque oponente;

loop_batalha:
system ("CLS");

cout<<endl;
cout<<"Escolha seu Pokémon"<< endl;
cout<<"1 - Pidgeot"<<endl;
cout<<"2 - Vaporeon"<<endl;
cout<<"3 - Arcanine"<<endl;
cout<<"4 - Geodude"<<endl;
cout<<"5 - Raichu"<<endl;
cout<<"6 - Haunter"<<endl;

int numero;
cin>>numero;

//se um Pokemon valido for escolhido, seleciona esse Pokemon
if(numero>=1 && numero<=6){
poke=numero-1;
arte.showPoke(lista_meus_pokemons.at(poke)); //printa a arte do Pokemon selecionado
cout<<"Vá "<<lista_meus_pokemons.at(poke).getNome()<<"!"<<endl;}

else{
cout<<"\nEscolha um Pokémon válido!";
sleep(1);
goto loop_batalha;}

int TIPO_POKE = lista_meus_pokemons.at(poke).getTipo();
vector<Ataque> vetor_meupokemon = meu.ataquesDoTipo(TIPO_POKE);

bool batalha=true;
int numero_da_batalha=0;

menu:
while(batalha){

//pega os Pokemon adversarios na ordem que eles foram criados
cout<<"O oponente enviou "<<lista_op_pokemons.at(poke_adv).getNome()<<
" ("<<lista_op_pokemons.at(poke_adv).getNomeTipo()<<")!"<<endl<<endl;

//menu
cout<<"O quê "<<lista_meus_pokemons.at(poke).getNome()<<" fará?"<<endl<<endl;
cout<<"1 - POKEDEX"<<endl;
cout<<"2 - LUTAR"<<endl;
cout<<"3 - STATUS DO POKEMON"<<endl;
cout<<"4 - CURAR POKEMON"<<endl;

cin>>menu;

if(menu>=1 && menu<=4)
menu-=1;

else{
cout<<"\nEscolha uma opção válida!";
sleep(1);
system ("CLS");
goto menu;}

if(menu<=0) //troca o Pokemon selecionado
{
  retornar:
  system ("CLS");
  vetor_meupokemon.clear();

  cout<<endl;
  cout<<"Escolha seu Pokémon"<< endl;
  cout<<"1 - Pidgeot"<<endl;
  cout<<"2 - Vaporeon"<<endl;
  cout<<"3 - Arcanine"<<endl;
  cout<<"4 - Geodude"<<endl;
  cout<<"5 - Raichu"<<endl;
  cout<<"6 - Haunter"<<endl;

  int numero;
  cin>>numero;

  //se um Pokemon valido for escolhido, seleciona esse Pokemon
  if(numero>=1 && numero<=6){
  poke=numero-1;
  arte.showPoke(lista_meus_pokemons.at(poke)); //printa a arte do Pokemon selecionado
  cout<<"Vá "<<lista_meus_pokemons.at(poke).getNome()<<"!"<<endl;}

  else{
  cout<<"\nEscolha um Pokémon válido!";
  sleep(1);
  goto retornar;}

  int TIPO_POKE = lista_meus_pokemons.at(poke).getTipo();
  vector<Ataque> vetor_meupokemon = meu.ataquesDoTipo(TIPO_POKE);

continue;
}

if(menu==1) //inicia a luta
{
  int numero_ataque, escolha_ataque;
  //sleciona aleatoriamente o ataque do oponente
  int adv_ataque = rand() % 4; //de 0 a 3
  system ("CLS");

  //carrega os ataques
  int TIPO_POKE = lista_meus_pokemons.at(poke).getTipo();
  vector<Ataque> vetor_meupokemon = meu.ataquesDoTipo(TIPO_POKE);

  int TIPO_POKE_OPONENTE = lista_op_pokemons.at(poke_adv).getTipo();
  vector<Ataque> vetor_oponente = oponente.ataquesDoTipo(TIPO_POKE_OPONENTE);

  if(poke_adv==12){
  for(int i=0;i<vetor_oponente.size();i++)
  vetor_oponente.at(i)*=1.5;}

  if(lista_meus_pokemons.at(poke).getVida()<=0) //se o Pokemon nao tiver mais vida
  {
    cout<<"\nEste Pokémon está machucado demais para LUTAR."<<endl<<endl;
    sleep(1);
    goto retornar;
  }

  escolhendo_ataque:
  cout<<"\nEscolha seu ataque!"<<endl;

  for(int i=0; i<4; i++) //mostra os ataques disponiveis a partir do tipo do Pokemon selecionado
  {
  cout<<i+1<<" - "<<vetor_meupokemon.at(i).getNomeAtaque();

  string tipo_do_ataque;
 if(vetor_meupokemon.at(i).getTipoDoAtaque()==0)
 tipo_do_ataque = "Normal";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==1)
 tipo_do_ataque = "Fogo";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==2)
 tipo_do_ataque = "Água";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==3)
 tipo_do_ataque = "Grama";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==4)
 tipo_do_ataque = "Elétrico";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==5)
 tipo_do_ataque = "Lutador";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==6)
 tipo_do_ataque = "Veneno";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==7)
 tipo_do_ataque = "Terra";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==8)
 tipo_do_ataque = "Voador";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==9)
 tipo_do_ataque = "Rocha";

 if(vetor_meupokemon.at(i).getTipoDoAtaque()==10)
 tipo_do_ataque = "Fantasma";

 cout<<" /Tipo: "<<tipo_do_ataque<<endl;
}

  cin>>numero_ataque;

  if(numero_ataque>=1 && numero_ataque<=4){
  escolha_ataque=numero_ataque-1;
  }

  else{
  cout<<"\nEscolha um ataque válido!";
  sleep(1);
  system ("CLS");
  goto escolhendo_ataque;}

  system ("CLS");

  //inicia a luta propriamente dita
  lista_meus_pokemons.at(poke).fight(vetor_meupokemon.at(escolha_ataque), vetor_oponente.at(adv_ataque), &lista_meus_pokemons.at(poke), &lista_op_pokemons.at(poke_adv));
  cout<<endl;

  if(lista_op_pokemons.at(poke_adv).getVida()<=0) //se o Pokemon adverário estiver sem vida
  {
  cout<<lista_op_pokemons.at(poke_adv).getNome()<<" desmaiou!"<<endl;
  poke_adv++;
  numero_da_batalha++;
  }

  if(numero_da_batalha==3){
  vetor_meupokemon.clear();
  numero_da_batalha=0;
  batalha=false;
  }

  else
  continue;

  system ("CLS");
}

if(menu==2) //mostra os status do Pokemon
{
  system ("CLS");
  lista_meus_pokemons.at(poke).display();
  continue;
}

if(menu==3) //cura o Pokemon selecionado
{
  if(pv>0 && lista_meus_pokemons.at(poke).getVida()!=lista_meus_pokemons.at(poke).getVidaOriginal())
  {
  cout<<"\nOkay, levarei seu Pokémon por alguns segundos."<<endl;
  sleep(4);

  int quanto_curar;
  quanto_curar=lista_meus_pokemons.at(poke).getVidaOriginal()-lista_meus_pokemons.at(poke).getVida();
  lista_meus_pokemons.at(poke)+=quanto_curar;
  cout<<"Obrigado, por esperar. Curamos toda a saúde de seu "<<lista_meus_pokemons.at(poke).getNome()<<" ! "<<endl<<endl;
  pv--;
  cout<<"Agora você tem "<<pv<<" PVs restantes"<<endl;
  sleep(3);
  system ("CLS");
  cout<<endl;
  continue;
  }

  if(pv>0 && lista_meus_pokemons.at(poke).getVida()==lista_meus_pokemons.at(poke).getVidaOriginal())
  {
  cout<<"Este Pokémon está com a vida cheia."; //Se o Pokemon estiver com a vida cheia
  sleep(1);
  system ("CLS");
  continue;
  }

  if(pv==0)
  {
  cout<<"Seus PVs acabaram."<<endl;

  for(int i=0; i<lista_meus_pokemons.size(); i++){
  if(lista_meus_pokemons.at(i).getVida()<=0)
  killed_pokemons++;

  if(killed_pokemons==lista_meus_pokemons.size()){
  cout<<"Você não tem mais Pokémon disponíveis!"<<endl;
  goto gameover;} //se os Pokemon e os PV acabarem
  }
  continue;
  }
system ("CLS");

}
}

cout<<endl;

//as falas a partir do adversario derrotado
if(poke_adv==3){
cout<<nomeJogador<<" derrotou Fiona"<<endl;
sleep(1);
dialogos.operator++(1);
dialogos.falas();}

if(poke_adv==6){
cout<<nomeJogador<<" derrotou Pedro"<<endl;
sleep(1);
dialogos.operator++(1);
dialogos.falas();}

if(poke_adv==9){
cout<<nomeJogador<<" derrotou Vanessa"<<endl;
sleep(1);
dialogos.operator++(1);
dialogos.falas();}

if(poke_adv==12){
cout<<nomeJogador<<" derrotou Erika"<<endl;
sleep(1);
dialogos.operator++(1);
dialogos.falas();

for(int i=0; i<lista_meus_pokemons.size(); i++){
  int quanto_curar;
  quanto_curar=lista_meus_pokemons.at(i).getVidaOriginal()-lista_meus_pokemons.at(i).getVida();
  lista_meus_pokemons.at(i)+=quanto_curar;}

cout<<"\nTodos os seus Pokémon foram curados!"<<endl;
sleep(2);
}

//se todos os Pokémon adversarios tiverrem sido derrotados
if(poke_adv==16){
dialogos.operator++(1);
dialogos.falas();
arte.vitoria();}

goto loop_batalha;

gameover:
arte.gameover();

   delete pidgeot;
   delete vaporeon;
   delete arcanine;
   delete geodude;
   delete raichu;
   delete haunter;

   delete voltorb;
   delete staryu;
   delete gloom;
   delete pikachu;
   delete ponyta;
   delete machop;
   delete ivysaur;
   delete wartortle;
   delete psyduck;
   delete victreebel;
   delete tangela;
   delete vileplume;

   delete arbok;
   delete weezing;
   delete lickitung;
   delete machamp;

  return 0;

}
