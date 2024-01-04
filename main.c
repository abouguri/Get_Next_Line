/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:53:13 by abouguri          #+#    #+#             */
/*   Updated: 2024/01/04 22:10:58 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*s;

	fd = open("test.txt", O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		s = get_next_line(fd);
		printf("%s", s);
		sleep(1);
	}
}
