/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:36:48 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/26 14:11:14 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		ft_putchar(*argv[i]);
		i++;
	}
    
    printf("%s", *argv);
    return 0;
}
