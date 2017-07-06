# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_comb                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jqueste <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/06 13:11:17 by jqueste           #+#    #+#              #
/*   Updated: 2017/07/06 18:36:21 by jqueste          ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

int		ft_putchar(int c);

void	ft_print_comb(void)
{
	int n1;
	int n2;
	int n3;

	n1 =0;
	n2 =1;
	n3 =2;

	while (n1 <= 7 )
	{
		while (n2 <= 8 )
		{
		`	while (n3 <= 9 )
			{
			ft_putchar(n1);
			ft_putchar(n3); 
			ft_putchar(n3);
			++n3;
			}	
		++n2;
		}
	++n1;
	}
}
