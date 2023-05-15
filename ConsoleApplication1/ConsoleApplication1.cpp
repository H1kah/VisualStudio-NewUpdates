#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//está nomeando a classe que será utilizada para o resto da programação. Dessa forma, será possível ter várias variações a partir dessa aqui
class JogoAdivinhacao {
    //O private fará com que o código fique privado. Ou seja, todas as características que forem colocadas nesse bloco não afetarão o resto do código.
private:
    int numerosecreto;
    int tentativas;
    //enquanto o private é para privar, o public é para deixar aberto. Dessa forma, dá para usar tais bases para outras variações
public:
    JogoAdivinhacao() {
        //para que o código se repita, esta estrutura foi montada. Assim ela se repetirá até descobrir qual é o 
        // número secreto que foi sorteado pelo programa, mostrando a quantidade de tentativas feitas.
        srand(time(0));
        numerosecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    //Para que o programa não se repita infinitamente, o void foi adicionado para que ele não volte à cada resposta que for dada.
    void jogar() {
        //mostra o resultado de cada situação que der. Se errar, a resposta será uma. Se acertrar, será outra (no caso, o quão perto está o número)
        int palpite;
        do {
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numerosecreto) {
                cout << "O número secreto é menor!" << endl;
            }
            else if (palpite < numerosecreto) {
                cout << "O número secreto é maior" << endl;
            }
            else {
                cout << "Parabéns, você acertou o número em " << tentativas << " tentativas" << endl;
            }
            //Caso a resposta seja diferente do número secreto, ela retornará e dará uma resposta, repetindo até que o código seja igual. Ou seja, a certa.
        } while (palpite != numerosecreto);
    }
};
//está fazendo com que o programa seja iniciando, colocando as infromações já feitas nas partes anteriores.
int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}

