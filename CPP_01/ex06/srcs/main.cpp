/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:28:11 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 16:28:12 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	k1;

	if (argc != 2)
	{
		std::cout << "Input 1 state of Karen" << std::endl;
		return (1);
	}
	k1.complain(argv[1]);
	return (0);
}
