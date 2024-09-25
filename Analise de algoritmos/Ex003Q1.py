def total_pos(n, memo = {}):
    if n <= 1:
        return 1
   
    # Verificando se o valor já foi calculado
    if n not in memo:
        memo[n] = total_pos(n - 1, memo) + total_pos(n - 2, memo)

    return memo[n]


resultado = total_pos(5)
print(resultado)