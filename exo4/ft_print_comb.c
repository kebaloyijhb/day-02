/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebaloyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:27:26 by kebaloyi          #+#    #+#             */
/*   Updated: 2020/07/12 16:14:51 by kebaloyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	int		ft_putchar(char c)
	{
		write(1, &c, 1);

		return(0);
	}
	
	void	ft_print_comb(void)
	{
		char a;
		char b;
		char c;
		
		a = '0';
		b = '0';
		c = '0';
		while(a <= '9')
		{	
		
				while(b <= '9')
				{
			
						while(c <= '9')
						{	
						
							if(a < b && b < c)	
							{
								ft_putchar(a);
								ft_putchar(b);
								ft_putchar(c);
								if(a =='7' && b == '8' && c == '9')

								{	
									break;

								}	
								ft_putchar(',');
								ft_putchar(' ');	


					}

					c++;

				}

				c = '0';
				b++;

			}
			b = '0';
		   a++;	
	}
		ft_putchar('\n');


}

int main(void)
{
	ft_print_comb();
	return(0);
}

	



