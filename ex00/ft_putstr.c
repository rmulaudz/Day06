/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:42:31 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/26 14:28:19 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_putchar(char c);

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
        i++;
	}
}
	
