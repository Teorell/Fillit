/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:38:24 by lsandor-          #+#    #+#             */
/*   Updated: 2018/12/15 16:42:01 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit file_name\n");
		return (1);
	}
	ft_read_file(argv[1]);
	return (0);
}

void	ft_error(void)
{
	ft_putendl("error");
	exit(1);
}
