#include "main.h"

/**
*_isalpha - checks for alphabetical letters
*@c:a character to be check on depending on condition
*Return:returns 0 or 1 
*/
int_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'));
}
