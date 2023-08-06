/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumoren <paumoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:46:41 by paumoren          #+#    #+#             */
/*   Updated: 2023/07/14 19:48:06 by paumoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	res;
	int	modulo;

	res = a / b;
	modulo = a % b;
	*div = res;
	*mod = modulo;
}
