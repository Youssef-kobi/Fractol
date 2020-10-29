/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-kobi <yel-kobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:37:48 by yel-kobi          #+#    #+#             */
/*   Updated: 2020/10/21 18:29:35 by yel-kobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	tab = (char *)malloc(sizeof(*tab) * len + 1);
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		tab[i] = f(((unsigned char*)s)[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
