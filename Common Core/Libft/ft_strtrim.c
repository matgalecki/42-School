/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:08:27 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/19 20:08:28 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;

	if (!s1 || !set)
		return (NULL);

	sstr = ft_strlen(s1) - ft_strlen(set) + 1;  
	str = (char *)malloc(sstr * sizeof(char));
	if (!str)
		return (NULL);
}