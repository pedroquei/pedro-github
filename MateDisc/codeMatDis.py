import requests
from tkinter import *

# Array de vendedores
vendedores = ['João', 'Maria', 'Pedro', 'Ana']

# Array de clientes para cada vendedor
clientes = [
    ['Cliente A', 'Cliente B', 'Cliente C'],
    ['Cliente D', 'Cliente E'],
    ['Cliente F', 'Cliente G', 'Cliente H', 'Cliente I'],
    ['Cliente J', 'Cliente K', 'Cliente L']
]

#inicializa as seguintes variáveis:
nome_vendedor = ""
caixa_1 = ""

#função que cria a janela principal e recebe o nome do vendedor
def nome_do_vendedor():

    #Cria a janela
    janela = Tk()
    janela.geometry('400x200')
    janela.title("Encontrar Clientes")

    textoNV = Label(janela, text="Insira o NOME do vendedor:", height=5, width=55)
    textoNV.grid(column=2, row=0)

    #Cria a caixa de texto
    global caixa_1
    caixa_1 = Entry(janela,  width=10, font="Arial 20" )
    caixa_1.grid(column=2, row=0)

    #Cria o botão
    botao = Button(janela, text= "BUSCAR", command=botaop )
    botao.grid(column=2, row=1)
    
    janela.mainloop()

# Função para encontrar o índice do vendedor no array
def buscar_vendedor(vendedores, nome):
    for i, vendedor in enumerate(vendedores):
        if vendedor == nome:
            return i
    return -1

# Função para imprimir a lista de clientes de um vendedor
def imprimir_clientes(nome_vendedor):
    indice = buscar_vendedor(vendedores, nome_vendedor)
    janela2 = Tk()
    janela2.geometry('400x200')
    janela2.title(f"Clientes de {nome_vendedor}")

    if indice != -1:

        #Realiza a busca dos clientes no array (busca binária)
        vendedor = vendedores[indice]
        clientes_vendedor = clientes[indice]

        #Imprime o nome do vendedor
        textoNV = Label(janela2, text= f"Clientes de {vendedor}:", height=2, width=55)
        textoNV.grid(column=2, row=0)

        #imprime o nome dos clientes do vendedor
        for cliente in clientes_vendedor:
            
            nomeCliente = Label(janela2, text= cliente, height=1, width=55)
            nomeCliente.grid(column=2,)
            
            #imprimi no terminal também
            print(cliente)
        
    #Vendedor não encontrado
    else:
        textoNV = Label(janela2, text= f"Vendedor {nome_vendedor} não encontrado.", height=10, width=55)
        textoNV.grid(column=2, row=0)
        print(f"Vendedor {nome_vendedor} não encontrado.")

#Funções do botão
def botaop():
    global nome_vendedor
    global caixa_1
    #recebe o nome do vendedor
    nome_vendedor = caixa_1.get().capitalize()

    # Chamada da função para imprimir a lista de clientes
    imprimir_clientes(nome_vendedor)


#inicia a função principal
nome_do_vendedor()