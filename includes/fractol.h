/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-kobi <yel-kobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 09:40:22 by yel-kobi          #+#    #+#             */
/*   Updated: 2020/10/28 11:09:46 by yel-kobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "libft.h"

typedef struct s_data{
    
    void *mlx_ptr;
    void *mlx_win;
} t_data ;

typedef struct s_img{
    
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_size;
    int     endian;
} t_img ;




