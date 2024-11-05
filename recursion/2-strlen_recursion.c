#include "main.h"
/**
*  _strlen_recursion - print backward
*@s:a string
*  Return: int
*
*/
int _strlen_recursion(char *s)
{
int contador;
if (*s != '\0')
{

contador = _strlen_recursion(s + 1);
}

return (contador);

}
