/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-varg <pde-varg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:52:18 by pde-varg          #+#    #+#             */
/*   Updated: 2025/03/06 10:53:43 by pde-varg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fractol.h"
#include "./minilibx-linux/mlx.h"

int	main(void)//int argc, char **argv)
{
	int 	x;
	t_fractol a;
	t_fractol b;
	double	tmp_real;
	void	*mlx_ptr;
	void	*win_ptr;
	
	a.x_real = 0;
	a.y_imagine = 0;
	b.x_real = 0.25;
	b.y_imagine = 0.4;
	x  = 0;
	mlx_ptr = mlx_init();
	if(mlx_ptr == NULL)
		return (1);
	win_ptr = mlx_new_window(mlx_ptr, 300, 300, "Prueba");
	x = 100;
	while(x < 150)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, x, 100, 0x00FF0000);
		x++;
	}
	x = 0;
	while(x < 42)
	{
		tmp_real = (a.x_real * a.x_real) - (a.y_imagine * a.y_imagine);
		a.y_imagine = 2 * a.x_real * a.y_imagine;
		a.x_real = tmp_real;
		a.x_real += b.x_real;
		a.y_imagine += b.y_imagine;
		printf("x = %d / real = %f / imagine = %f \n", x, a.x_real, a.y_imagine);
		x++;
	}
	/*
	if (argc == 1)
		return (0);
	//argv = ft_arguments(&argc, argv, &is_alloc);
	if (!argv)
		return (printf("Error\n"), 0);
	if (ft_arg(argc, argv) == 1)
	{
		if (is_alloc == 1)
			free_matrix(argv);
		return (printf("Error\n"), 0);
	}
	ft_charge_a(&a, argc, argv);
	if (is_alloc == 1)
		free_matrix(argv);
	if (ft_is_ordered(&a) == 0)
		return (ft_free_a(&a), 0);
	ft_select_sort(&a, &b);
	return (ft_free_a(&a), 0);
	*/
	getchar();
	return(0);
}
