/*
** my.h for my in /home/rosey/rendu/MUL_2014_rtv1
** 
** Made by rosey
** Login   <rosey@epitech.net>
** 
** Started on  Fri Feb 21 11:14:23 2014 rosey
** Last update Mon Mar 10 09:51:26 2014 rosey
*/

#ifndef _MY_H
# define _MY_h

# define SZE 800

typedef struct s_mlx
{
  void	*mlx_ptr;
  void	*img_ptr;
  void	*win_ptr;
  int	x;
  int	y;
}             t_mlx;

typedef struct s_pix
{
  int	bpp;
  int	sizeline;
  int	endian;
  char	*data;
  int	a;
  int	b;
  }              t_pix;

int	main();
int	my_putstr(char *str);
int	my_putchar(char c);
int	verif();
int	bool();
int	pixel();

#endif /*_MY_H*/
