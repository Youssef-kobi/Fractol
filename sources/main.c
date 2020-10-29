/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-kobi <yel-kobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:03:17 by yel-kobi          #+#    #+#             */
/*   Updated: 2020/10/28 17:37:45 by yel-kobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/fractol.h"

void my_mlx_pixel_put(t_img *data, int x, int y, int color);

int     main(void)
{
    t_data mlx;
    t_img image;
    int color;

    color = 0;
    mlx.mlx_ptr = mlx_init();
    mlx.mlx_win = mlx_new_window(mlx.mlx_ptr, 800, 600, "Hello world!");
    image.img = mlx_new_image(mlx.mlx_ptr, 800, 600);
    image.addr = (int *)mlx_get_data_addr(mlx.mlx_ptr, &(image.bits_per_pixel),&(image.line_size),&(image.endian));
    color = 0x00ff0000;
    my_mlx_pixel_put(&image, 5, 5, color);
    mlx_put_image_to_window(mlx.mlx_ptr, mlx.mlx_win, image.img, 0, 0);
    mlx_loop(mlx.mlx_ptr);
}

void   my_mlx_pixel_put(t_img *image, int x, int y, int color)
{
        image->addr[x + y * 800] = color;
}