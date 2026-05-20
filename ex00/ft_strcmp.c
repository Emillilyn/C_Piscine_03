/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:29:39 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/20 17:48:23 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("hello", "hello"));
// 	printf("%d\n", ft_strcmp("abc", "abd"));
// 	printf("%d\n", ft_strcmp("abd", "abc"));
// 	printf("%d\n", ft_strcmp("", ""));
// 	printf("%d\n", ft_strcmp("a", ""));
// 	return (0);
// }
