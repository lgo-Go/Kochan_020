/*Объединяет две строки в одну*/

#include <stdio.h>

char str_cat(char string_1[], char string_2[]);

int main(void)
{
	str_cat("hello, ", "man!");
	return 0;
}

char str_cat(char string_1[], char string_2[])
{
	int n = 0;
	char string_result[n+1];
	int* pn = &n;
	for(int i = 0; string_1[i] != '\0'; ++i, ++*pn)
		string_result[i] = string_1[i];
	for(int i = 0; string_2[i] != '\0'; ++i, ++*pn)
		string_result[n] = string_2[i];
	for(int i = 0; string_result[i] != '\0'; ++i)
		printf("%c", string_result[i]);
	printf("\n");
	// for(int i = 0; string_1[i] != '\0'; ++i)
	// 	printf("%c", string_1[i]);
	// for(int i = 0; string_2[i] != '\0'; ++i)
	// 	printf("%c", string_2[i]);
	// printf("\n");
	return 0;
}