/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:39:27 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/15 19:39:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template < typename T>
void function(const T &element)
{
	std::cout << element << std::endl;
}

int main()
{
	int				arr1[6] = {1, 2, 3, 4, 5, 42};
	std::string		arr2[2] = {"Hello", "there"};
	char			arr3[4] = {'H', 'o', 'l', 'a'};
	
	iter(arr1, 6.0f, function);
	iter(arr2, 2, function);
	iter(arr3, 4, function);
	
	return (0);
}
