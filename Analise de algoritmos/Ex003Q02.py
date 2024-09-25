def total_caminhos_escada(m, n, memo={}):
    # Verifica se o resultado já está em cache
    if (m, n) in memo:
        return memo[(m, n)]
   
    # chegou no final
    if m == 1 and n == 1:
        return 1
   
    # não existe caminho possível
    if m == 0 or n == 0:
        return 0
   
    # move para a direita (m, n-1) e para baixo (m-1, n)
    memo[(m, n)] = total_caminhos_escada(m, n - 1, memo) + total_caminhos_escada(m - 1, n, memo)
   
    return memo[(m, n)]
   
resultado = total_caminhos_escada(3,3)
print(resultado)