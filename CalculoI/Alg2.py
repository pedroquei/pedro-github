def algoritmo_complexidade_n_quadrado(n):
    resultado = 0

    for i in range(n):
        for j in range(n):
            resultado += 1
            resultado += 1  # Operação básica

    for k in range(3 * n):
        resultado += 1  # Operação básica

    resultado += 5  # Operação básica

    return print(resultado)


algoritmo_complexidade_n_quadrado(100)