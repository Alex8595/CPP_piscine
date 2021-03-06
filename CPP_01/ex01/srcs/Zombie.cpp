/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:19:41 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:19:42 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}



// ************************************************************************** //
//                                 Sets & Gets                                //
// ************************************************************************** //

std::string		Zombie::get_name( void )
{
	return (this->_name);
}

void			Zombie::set_name( std::string name )
{
	this->_name = name;
}

// ************************************************************************** //
//                          Constructors & Destructors                        //
// ************************************************************************** //

Zombie::Zombie( std::string str )
{
	this->_name = str;
}


Zombie::Zombie( void )
{
	
}


Zombie::~Zombie( void )
{
	std::cout << "You caused the terrible and painfull death of " << this->get_name() << std::endl;
}
