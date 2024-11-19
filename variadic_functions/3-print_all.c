/**
 * print_all -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@format: the string
 *
 *Return: null f str = NULL
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
va_list args;
const char *str;

va_start(format, format);

while(i <= 4)
{
str = va_arg(args, const char*);

if (str == NULL)
{
str = "(nil)";
}
if (i > 0 )
{
printf("%s", str);
}

i++;
}
