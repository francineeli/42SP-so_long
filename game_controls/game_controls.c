/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:43:50 by feli-bar          #+#    #+#             */
/*   Updated: 2022/12/07 14:20:06 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_init_game(t_game *connection)
{
    connection->mlx_ptr = mlx_init()
    if (connection->mlx_ptr == NULL)
    {
        ft_print_errors(ERROR_12"\n");
        return (1);
    }
    connection->mlx_ptr = mlx_new_window(connection->mlx_ptr, window->col * PIXEL_SIZE, \
                            connection->line * PIXEL_SIZE, "So Long");
    if (connection->win_ptr == NULL)
    {
        ft_print_errors(ERROR_12"\n");
        return (1);
    }
}