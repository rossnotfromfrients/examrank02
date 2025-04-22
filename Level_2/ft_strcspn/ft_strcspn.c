/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 02:10:55 by columbux          #+#    #+#             */
/*   Updated: 2024/05/02 13:00:59 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdlib.h>
#include <stdio.h> */

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != reject[i])
		{
			len++;
			i++;
		}
		else
			i++;
	}
	return (len);
}

/* int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%lu", ft_strcspn(argv[1], argv[2]));
	printf("\n");
	return (0);
}
 */