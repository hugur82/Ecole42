/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:20:07 by hugur             #+#    #+#             */
/*   Updated: 2022/10/26 12:50:25 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int	i;
	int	posNeg;
	int results;

	posNeg = 1;
	i = 0;
	results = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	if((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			posNeg = -1;
		i++;
	}
	if((str[i] == '+') || (str[i] == '-'))
		return (0);
	while(str[i] == '0')
		i++;
	while((str[i] != 0) && (str[i] >= '0' && str[i] <= '9'))
	{
		results = results *10 + (str[i] - 48);
		i++;
	}
	return (results * posNeg);
}