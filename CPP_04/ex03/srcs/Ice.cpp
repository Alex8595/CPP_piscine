/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:40:49 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/01 19:10:28 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria		*Ice::clone() const
{
	AMateria	*new_ice = new Ice();
	return (new_ice);
}

/*
**	C & D
*/

void				Ice::operator=(const Ice &ref)
{
	this->type = ref.type;
}

Ice::Ice(const Ice &ref)
{
	this->type = ref.type;
}

Ice::Ice()
{
	this->type = "ice";
}

Ice::~Ice()
{

}
