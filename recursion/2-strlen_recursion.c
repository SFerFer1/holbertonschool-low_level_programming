#include "main.h"
/**
*  _strlen_recursion - print backward
*@s:a string
*  Return: int
*
*/
int _strlen_recursion(char *s)
{
int contador = 0;
if (*s != '\0')
{

contador = 1 +  _strlen_recursion(s + 1);
}

return (contador);

}
