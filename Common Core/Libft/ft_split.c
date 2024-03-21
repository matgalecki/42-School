/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:20:17 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/20 20:20:19 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char 	**result;
	int		word_s;
	int		i;
	int		j;

	ft_set_vars(&i, &j, si);
	result = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (i <= ft_strlen(s))
	{
	}
}

static void	ft_set_vars(size_t *i, int *j, int *word_s)
{
	*i = 0;
	*j = 0;
	*word_s = -1;
}

static int	ft_word_count(const char *str, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;

	while(*str)
	{
		if (*str != c && flag == 0)
		{	
			flag = 1;
			count++;
		}
		else if (*str == c)
			flag = 0;
		str++
	}
	return (count);
}
/* 
int main ()
{
	char *s = "tataRmama";
	char d = "R";
}
*/