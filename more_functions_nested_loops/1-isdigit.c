#include "main.h"

/**
 * _isdigit - verifie si un caractere est un chiffre ( 0 a 9)
 * @c: caractere a verifier
 *
 *return 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}
