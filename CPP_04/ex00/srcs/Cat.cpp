/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:16:12 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:11 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
**		Member Functions
*/

void			Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}




/*
**		Operators
*/

void 			Cat::operator= (const Cat &ref)
{
	std::cout << "Cat Assignation operator Called" << std::endl;
	this->type = ref.type;
}




/*
**	Con & Des
*/

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = ref.type;
}

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destruct Called" << std::endl;
}
