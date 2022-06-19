#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){


int valor, resposta, r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, tentativa;


do{

unsigned seed = time(0);
srand (seed);
valor = 1+rand()%100;


for(int i = 7; i >=1 ;i--){

cout<< "[" <<  i << "]" << "escolha um numero de 1 a 100: " << endl;
cin >> resposta;

if(resposta==valor){

cout<< endl << "PARABENS VOCE ACERTOU!" << endl;
break;
}

if(resposta > valor){

cout << endl << resposta << "-->" << "maior que o valor sortiado"<< endl;

}

if(resposta < valor){

cout << endl << resposta << "-->" << "menor que o valor sortiado"<< endl;

}

if (i == 7 && resposta > valor || i == 7 && resposta < valor){
	r1 = resposta;
	cout << "numeros selecionados pelo player: " << r1 << "." << endl;

} else {
	if (i == 6 && resposta > valor || i == 6 && resposta < valor){
	r2 = r2 + resposta;
	cout << "numeros selecionados pelo player: " << r2 << ", " << r1 << "."<< endl;

} else {
	if (i == 5 && resposta > valor || i == 5 && resposta < valor){
	r3 = r3 + resposta;
	cout << "numeros selecionados pelo player: " << r3 << ", " << r2 << ", " << r1;
	cout << "." << endl;
	
} else {
	if (i == 4 && resposta > valor || i == 4 && resposta < valor){
	r4 = r4 + resposta;
	cout << "numeros selecionados pelo player: " << r4 << ", " << r3 << ", " << r2;
	cout << ", " << r1 << "." << endl;

} else {
	if (i == 3 && resposta > valor || i == 3 && resposta < valor){
	r5 = r5 + resposta;
	cout << "numeros selecionados pelo player: " << r5 << ", " << r4 << ", " << r3;
	cout << ", " << r2 << ", " << r1 << "." << endl;

} else {
	if (i == 2 && resposta > valor || i == 2 && resposta < valor){
	r6 = r6 + resposta;
	cout << "numeros selecionados pelo player: " << r6 << ", " << r5 << ", " << r4;
	cout << ", " << r3 << ", " << r2 << ", " << r1 << "." << endl;

} else {
	if (i == 1 && resposta > valor || i == 1 && resposta < valor){
	r7 = r7 + resposta;
	cout << "numeros selecionados pelo player: " << r7 << ", " << r6 << ", " << r5;
	cout << ", " << r4 << ", " << r3 << ", " << r2 << ", " << r1 << "." << endl;

} else {
	return 0;
}
}
}
}
}
}
}
}

cout << "valor sortiado:" << valor << endl;
cout << endl << "gostaria de tentar novamente ?" << endl;
cout << "[1] - SIM" << " " << "[2] - NAO" << endl;
cin >> tentativa;

}

while(tentativa == 1);

if(tentativa = 2){
cout << endl << "FIM DE JOGO" << endl;



}

return 0;
}
