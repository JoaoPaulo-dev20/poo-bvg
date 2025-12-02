#include "Pessoa.h"

// Construtor padrão.
// Ele cria uma pessoa mesmo quando nenhum nome ou telefone é informado.
// É útil quando queremos garantir que o objeto sempre tenha valores válidos.
Pessoa::Pessoa() {
    this->nome = "Sem nome";
    this->telefone = "Sem telefone";
    cout << "Objeto Pessoa criado (padrão)." << endl;
}

// Construtor parametrizado.
// Esse é chamado quando já fornecemos nome e telefone ao criar o objeto.
// Ele usa o ponteiro 'this' para deixar claro que estamos acessando
// os atributos desta instância específica.
Pessoa::Pessoa(string nome, string telefone) {
    this->nome = nome;
    this->telefone = telefone;
    cout << "Objeto Pessoa criado: " << this->nome << endl;
}

// Destrutor.
// Ele é executado quando o objeto leave de existir. Aqui usamos apenas para mostrar
// uma mensagem, porque o professor quer que você visualize o ciclo de vida do objeto.
Pessoa::~Pessoa() {
    cout << "Destruindo objeto Pessoa: " << this->nome << endl;
}

// Exibe o nome da pessoa.
// Criamos esse método para seguir boas práticas:
// cada coisa com sua responsabilidade, sem imprimir direto no main.
void Pessoa::imprimirNome() {
    cout << "Nome: " << this->nome << endl;
}

// Exibe o telefone da pessoa.
// Mesmo raciocínio do imprimirNome(): mantemos o main limpo e organizado.
void Pessoa::imprimirTelefone() {
    cout << "Telefone: " << this->telefone << endl;
}
