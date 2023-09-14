/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crsharrier <crsharrier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:43:04 by csharrie          #+#    #+#             */
/*   Updated: 2023/09/12 07:41:59 by crsharrier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_power(int nb, int power)
{
	if (power)
		return (nb * ft_power(nb, power - 1));
	return (1);
}

static int	convert(char *start, int count)
{
	int	total;

	total = 0;
	while (count)
	{
		total += (*start - 48) * ft_power(10, count - 1);
		start++;
		count--;
	}
	return (total);
}

static int	ft_space(char c)
{
	char	*test_str;

	test_str = " \f\t\n\v\r";
	while (*test_str)
		if (c == *test_str++)
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	char	*start_of_digits;
	int		digit_count;
	int		total;

	digit_count = 0;
	while (ft_space(*str) == 1)
		str++;
	start_of_digits = str;
	while (*str >= '0' && *str <= '9')
	{
		digit_count++;
		str++;
	}
	total = convert(start_of_digits, digit_count);
	return (total);
}
