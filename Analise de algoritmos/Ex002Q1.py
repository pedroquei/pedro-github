def verificar_anagrama(palavra1, palavra2):
    # funcao auxiliar que gera todas as permutacoes possiveis de uma palavra
    def gerar_permutacoes(palavra):
        # inicia uma lista tendo a primeira letra como a primeira permutacao
        permutacoes = [palavra[0]]

        # itera por cada letra na palavra a partir da segunda letra
        for letra in palavra[1:]:
            # pra cada permutacao que existe, insere uma nova letra em cada posicao possivel
            novas_permutacoes = []
            for permutacao in permutacoes:
                for i in range(len(permutacao) + 1):
                    # insere uma letra em cada possivel posiçao na permutação
                    novas_permutacoes.append(permutacao[:i] + letra + permutacao[i:])
            # atualiza a lista de permutacoes
            permutacoes = novas_permutacoes
        
        return permutacoes

    # Gera uma lista com todas as permutações da palavra2
    total_permutacoes = gerar_permutacoes(palavra2)
    
    # verifica se a palavra2 é permutacao da palavra 1
    for palavra in total_permutacoes:
        if palavra1 == palavra:
            return True
    return False

# exemplo:
print(verificar_anagrama("barco", "tarco"))  # retorna False
print(verificar_anagrama("circo", "crico")) # retorna True
print(verificar_anagrama("caderno", "sajybhl")) # retorna false