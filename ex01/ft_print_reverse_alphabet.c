/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebaloyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:13:12 by kebaloyi          #+#    #+#             */
/*   Updated: 2020/07/09 17:19:33 by kebaloyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char c)
{

		write(1, &c, 1);

}

void	ft_print_reverse_alphabet(void)
{
	char alpha;
		alpha ='z';
		while(alpha >='a')
		{
			ft_putchar(alpha);
			alpha--;

		}
}



	
		


