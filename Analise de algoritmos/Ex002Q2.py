def verificar_palindromo(palavra):
    palavra_invertida = ""
    for i in range(len(palavra)-1, -1, -1):
        palavra_invertida += palavra[i]
   
    if palavra == palavra_invertida:
        return True
    else:
        return False


print(verificar_palindromo('arara'))