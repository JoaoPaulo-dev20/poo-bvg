#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class Pessoa
 * @brief Classe pensada para representar uma pessoa no nosso sistema.
 * 
 * Ela guarda apenas duas informações básicas: nome e telefone.
 * É simples, direta e usada no Projeto 3 para praticarmos conceitos de POO.
 */
class Pessoa {
private:
    string nome;       ///< Aqui guardamos o nome da pessoa.
    string telefone;   ///< Aqui guardamos o telefone da pessoa.

public:
    /**
     * @brief Construtor padrão.
     * 
     * Este construtor é chamado quando criamos uma Pessoa sem passar dados.
     * Ele coloca valores "genéricos" só para evitar campos vazios.
     */
    Pessoa();

    /**
     * @brief Construtor com parâmetros.
     * 
     * Esse é o construtor mais útil: já criamos a pessoa com nome e telefone.
     *
     * @param nome Nome informado.
     * @param telefone Telefone informado.
     */
    Pessoa(string nome, string telefone);

    /**
     * @brief Destrutor.
     * 
     * Ele é executado automaticamente quando o objeto deixa de existir.
     * Aqui usamos para mostrar uma mensagem no console, apenas para fins de estudo.
     */
    ~Pessoa();

    /**
     * @brief Exibe o nome da pessoa na tela.
     */
    void imprimirNome();

    /**
     * @brief Exibe o telefone da pessoa na tela.
     */
    void imprimirTelefone();
};

#endif // PESSOA_H
