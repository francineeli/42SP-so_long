/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images_controls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:13:45 by feli-bar          #+#    #+#             */
/*   Updated: 2022/12/07 14:20:07 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put_image_to_window(t_game *connection, void *window, void *image, int x, int y)
{
	mlx_put_image_to_window(connection->mlx_ptr, window->win_ptr, \
					image, PIXEL_SIZE * x, PIXEL_SIZE * y)
}

int	ft_img_movements(t_game *connection)
{
		char *movements;

		mlx_string_put(connection->mlx_ptr, window->win_ptr, 12, 16, 0x0100ff00, "Moves: ");
		movements = ft_itoa (window->movements);
		mlx_string_put(connection->mlx_ptr, window->win_ptr, 60, 16, 0x0100ff00, movements);
		free (movements);
		return (0);
}

void	ft_put_sprites(t_game *window, void **image, char *path)
{
		int widht;
		int height;

		*image = mlx_xpm_file_to_image(window->mlx_ptr, path, &widht, &height);
		if (image == NULL)
		{
				ft_print_errors(ERROR_13"\n");
				ft_close(window);
		}
}

void	ft_place_sprites_game(t_game *window)
{
		ft_put_sprites(window, &window->floor, "game_images/floor.xpm");
		ft_put_sprites(window, &window->wall, "game_images/wall.xpm");
		ft_put_sprites(window, &window->tree, "game_images/tree.xpm");
		ft_put_sprites(window, &window->block, "game_images/block.xpm");
		ft_put_sprites(window, &window->collectable, "game_images/collectable.xpm");
		ft_put_sprites(window, &window->catplayer_right, "game_images/catplayer_right.xpm");
		ft_put_sprites(window, &window->catplayer_down, "game_images/catplayer_down.xpm");
		ft_put_sprites(window, &window->catplayer_left, "game_images/catplayer_left.xpm");
		ft_put_sprites(window, &window->catplayer_up, "game_images/catplayer_up.xpm");
}

