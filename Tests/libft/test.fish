#!/usr/bin/env fish

# 1. Executa o make na raiz
make; or exit 1

# 2. Compila apontando para a nova pasta do tests.c
# O -I. diz ao compilador para procurar o libft.h na raiz atual
cc -Wall -Wextra -Werror -I. tests/libft/tests.c libft.a -o teste_executavel; or exit 1

# 3. Executa o teste e limpa a pasta
./teste_executavel
rm -f teste_executavel
