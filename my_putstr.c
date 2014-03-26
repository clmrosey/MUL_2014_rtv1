/*
** my_putstr.c for my_putstr in /home/rosey_c/rendu/Piscine-C-Jour_04
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 25 12:28:05 2013 rosey
** Last update Fri Feb 28 14:52:13 2014 rosey
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
