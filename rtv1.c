/*
** rtv1.c for rtv1x in /home/rosey/rendu/MUL_2014_rtv1
** 
** Made by rosey
** Login   <rosey@epitech.net>
** 
** Started on  Wed Feb 26 09:57:14 2014 rosey
** Last update Mon Mar 10 09:49:54 2014 rosey
*/

#include <mlx.h>
#include "my.h"

int	my_pixel_img(t_mlx mlx)
{
  t_pix	pix;

  pix.data = mlx_get_data_addr(mlx.img_ptr, &pix.bpp, &pix.sizeline, &pix.endian);
  pix.a = mlx.x * 4;
  pix.b = mlx.y * pix.sizeline;
  pix.data[pix.a + pix.b] = 0x66;
  pix.data[pix.a + pix.b + 1] = 0xFF;
  pix.data[pix.a + pix.b + 2] = 0x33;
  pix.data[pix.a + pix.b + 3] = 0;
  return (0);
}

int	pixel2(t_mlx mlx)
{
  int	sze;

  mlx.y = 0;
  sze = 800;
  while (mlx.y < sze - 0)
    {
      while (mlx.x < sze - 0)
	{
	  my_pixel_img(mlx);
	  mlx.x++;
	}
      mlx.x = 0;
      mlx.y++;
    }
  return (0);
}

int	hook(t_mlx mlx)
{
  mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, mlx.x, mlx.y);
  return (0);
}

int	pixel()
{
  t_mlx	mlx;
  int	sze;

  mlx.x = 0;
  mlx.y = 0;
  sze = 800;
  mlx.win_ptr = 0;
  if ((mlx.mlx_ptr = mlx_init()) == 0)
    {
      my_putstr("is big probleme\n");
      return (0);
    }
  mlx.img_ptr = mlx_new_image(mlx.mlx_ptr, sze, sze);
  mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, sze, sze,  "RtV1");
  mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 1, 1);
  my_pixel_img(mlx);
  pixel2(mlx);
  hook(mlx);
  mlx_loop(mlx.mlx_ptr);
  return (0);
}
