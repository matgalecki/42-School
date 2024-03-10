/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:51:52 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/10 17:52:04 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	char			*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
	return (s);
}
/*
#include <strings.h>
#include <stdio.h>
int	main()
{
	char buffer[10] = "aaaaaaaaaa";
	ft_bzero(buffer, 3);
	printf("%s\n", buffer);

	char buffer1[10] = "aaaaaaaaaa";
	bzero(buffer1, 3);
	printf("%s\n", buffer1);

	return(0);
}
*/