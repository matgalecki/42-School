/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:10:38 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/28 19:24:48 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}
/* 
#include <ctype.h>
#include <stdio.h>
int	main()
{
    printf("%d\n", ft_isprint(128));
    printf("%d", isprint(128));
    return (0);
}
 */
