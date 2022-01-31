/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:52:38 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/28 16:31:13 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const &AMateria::getType() const
{
	return (this->type);
}

/*
**	C & D
*/

void	AMateria::operator=(const AMateria &ref)
{
	this->type = ref.type;
}

AMateria::AMateria(const AMateria &ref)
{
	this->type = ref.type;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::~AMateria()
{
}
