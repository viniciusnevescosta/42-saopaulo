#include "libft.h"
#include <stdio.h>
#include <ctype.h>

// Cores para o terminal (padrão ANSI)
#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

/**
 * Função auxiliar que automatiza a comparação.
 * Ela recebe o caractere testado, o seu resultado e o esperado.
 */
void check_result(char *test_name, int actual, int expected)
{
	if (actual == expected)
		printf("%s [%sOK%s]\n", test_name, GREEN, RESET);
	else
		printf("%s [%sKO%s] -> Esperado: %d | Obtido: %d\n", test_name, RED, RESET, expected, actual);
}

void test_ft_isalpha(void)
{
	printf("--- TESTANDO: ft_isalpha ---\n");

	// Cenário 1: Caracteres Minúsculos
	check_result("Minuscula 'a'", ft_isalpha('a'), isalpha('a') ? 1 : 0);
	check_result("Minuscula 'm'", ft_isalpha('m'), isalpha('m') ? 1 : 0);
	check_result("Minuscula 'z'", ft_isalpha('z'), isalpha('z') ? 1 : 0);

	// Cenário 2: Caracteres Maiúsculos
	check_result("Maiuscula 'A'", ft_isalpha('A'), isalpha('A') ? 1 : 0);
	check_result("Maiuscula 'M'", ft_isalpha('M'), isalpha('M') ? 1 : 0);
	check_result("Maiuscula 'Z'", ft_isalpha('Z'), isalpha('Z') ? 1 : 0);

	// Cenário 3: Números
	check_result("Digito '0'   ", ft_isalpha('0'), isalpha('0') ? 1 : 0);
	check_result("Digito '5'   ", ft_isalpha('5'), isalpha('5') ? 1 : 0);
	check_result("Digito '9'   ", ft_isalpha('9'), isalpha('9') ? 1 : 0);

	// Cenário 4: Caracteres Especiais e Símbolos
	check_result("Simbolo '['  ", ft_isalpha('['), isalpha('[') ? 1 : 0);
	check_result("Simbolo '{'  ", ft_isalpha('{'), isalpha('{') ? 1 : 0);
	check_result("Espaco ' '   ", ft_isalpha(' '), isalpha(' ') ? 1 : 0);

	// Cenário 5: Limites de valores
	check_result("Limite (0)   ", ft_isalpha(0), isalpha(0) ? 1 : 0);
	check_result("Limite (127) ", ft_isalpha(127), isalpha(127) ? 1 : 0);
	check_result("Limite (-1)  ", ft_isalpha(-1), isalpha(-1) ? 1 : 0);

	printf("\n");
}

int main(void)
{
	test_ft_isalpha();

	return (0);
}
