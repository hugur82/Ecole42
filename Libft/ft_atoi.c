/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:20:07 by hugur             #+#    #+#             */
/*   Updated: 2022/11/01 12:56:12 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_handleprefix(char *str, int *idx, int *neg)
{
	int	id;

	id = *idx;
	while (str[id] == '\t' || str[id] == '\n' || str[id] == '\v'
		|| str[id] == '\f' || str[id] == '\r' || str[id] == ' '
		|| str[id] == '\a')
		id++;
	if ((str[id] == '-') || (str[id] == '+'))
	{
		if (str[id] == '-')
			*neg = -1;
		id++;
	}
	*idx = id;
}

int	ft_atoi(char *str)
{
	int	i;
	int	pos_neg;
	int	results;

	pos_neg = 1;
	i = 0;
	results = 0;
	ft_handleprefix(str, &i, &pos_neg);
	if ((str[i] == '+') || (str[i] == '-'))
		return (0);
	while (str[i] == '0')
		i++;
	while ((str[i] != 0) && (str[i] >= '0' && str[i] <= '9'))
	{
		results = results * 10 + (str[i] - 48);
		i++;
	}
	return (results * pos_neg);
}
/* 
int	main(void)
{
	ft_atoi("-4886");
} */
