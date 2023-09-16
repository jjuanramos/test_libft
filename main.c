/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:22:52 by juramos           #+#    #+#             */
/*   Updated: 2023/09/16 13:44:45 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	main(void)
{
	printf("---------------------------\n");
	printf("isalpha:\n");
	printf("Std function: %d.\n", isalpha('c'));
	printf("Custom function: %d.\n", ft_isalpha('c'));
	return (0);
}
