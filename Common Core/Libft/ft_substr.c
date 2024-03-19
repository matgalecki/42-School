/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:00:57 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/19 18:01:02 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sstr;
	unsigned int	i;

	i = 0;
	sstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	while (s[i] && i < len)
	{
		sstr[i] = s[start];
		start++;
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}
/* 
#include <stdio.h>
int	main()
{
	char *str = "\0";
	unsigned int s = 3;
	size_t	len = 2;

	char *subs = ft_substr(str, s, len);
	if (subs)
    {
		printf("%s\n", subs);
		free(subs);
	}
    else
		printf("Error of the memory allocation\n");

	return (0);
}
*/