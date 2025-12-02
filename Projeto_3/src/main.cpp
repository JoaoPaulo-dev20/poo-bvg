#include <iostream>
#include <vector>
#include "Pessoa.h"

using namespace std;

/**
 * @brief Função principal do programa.
 * 
 * Aqui é onde tudo começa:
 * - Criamos algumas Pessoas;
 * - Colocamos todas dentro de um vector (como uma lista);
 * - Depois percorremos essa lista para mostrar os dados.
 */
int main() {

    // Nosso "banco de dados" simples de pessoas.
    vector<Pessoa> pessoas;

    // Adicionando algumas pessoas (criamos e já guardamos no vector).
    pessoas.push_back(Pessoa("Maria Silva", "11 99999-0000"));
    pessoas.push_back(Pessoa("João Santos", "21 98888-1234"));
    pessoas.push_back(Pessoa("Ana Pereira", "31 97777-4567"));

    cout << "\n--- Lista de Pessoas ---\n";

    // Percorremos cada pessoa do vector e pedimos para ela se apresentar.
    for (Pessoa &p : pessoas) {
        p.imprimirNome();
        p.imprimirTelefone();
        cout << "-----------------------\n";
    }

    return 0;
}
