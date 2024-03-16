/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:23:38 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/16 21:23:50 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;

	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strchr("asdsatda", 'n'));
	printf("%s\n", strchr("asdsatda", 'n'));
	return(0);
}
*/