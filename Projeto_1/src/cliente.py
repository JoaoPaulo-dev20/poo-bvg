class Cliente:
    def __init__ (self, nome, idade, saldo): 
        self.__nome = nome
        self.__idade = idade                  
        self.__saldo = saldo
    
    def mostrar_informacoes(self):
        print(f'nome: {self.__nome}, idade {self.__idade}, saldo {self.__saldo}')

    def atualizar_saldo(self, valor):
        self.__saldo = valor
        print(f"Novo Saldo {self.__saldo}")

    