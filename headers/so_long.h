/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:32:51 by feli-bar          #+#    #+#             */
/*   Updated: 2022/12/06 12:07:59 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include "get_next_line"
# include "../minilibx/mlx.h"

typedef struct t_elements
{
		int		fd;
		int		widht_map;
		int		height_map;
		void	*conection;
		void	*window;
		void	*collectable;
		to be continued
}		t_catgame


