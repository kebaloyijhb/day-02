/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebaloyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:57:04 by kebaloyi          #+#    #+#             */
/*   Updated: 2020/07/12 16:32:15 by kebaloyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1,&c,1);
}
void ft_print_comb2(void)
{
	int unt1;
	int unt2;
	int unt3;
	int unt4;

	unt1 = '0' -1;
	while(++unt1 <= '9')
	{
		unt2 = unt1;
		unt2 = '0' -1;
		while(++unt2 <= '9')
		{
				
				unt3 = unt2;
				unt3 = '0' -1;
				while(++unt3 <='9')
				{

						unt4 = unt3;
						while(++unt4 <= '9')
						{
							ft_putchar(unt1);
							ft_putchar(unt2);
							if(unt1 != '\0' || unt2 != '1')
								ft_putchar(' ');
							/* if(unt1 != '\0' || num2 != '1')
							 ft_putchar(' ') */
							/* ft_putchar(unt1);
							   ft_putchar(unt2); */
							   ft_putchar(unt3);
							   ft_putchar(unt4);
							   
							   if(unt3 != '\0' || unt4 !='1')
									   ft_putchar(',');
						}


				}


		}




		}
		ft_putchar('\n');


}	
		



	


