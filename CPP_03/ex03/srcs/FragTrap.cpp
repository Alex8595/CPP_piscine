/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:05:11 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/18 16:54:54 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
**		Member Functions
*/

void        FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap request a positive highs fives"  << std::endl;
}

/*
**	C & D
*/

void    FragTrap::operator=( const FragTrap &o_class )
{
	std::cout << "FragTrap Assignation operator overload called" << std::endl;

	this->name = o_class.name;
	this->hitPoints = o_class.hitPoints;
	this->energyPoints = o_class.energyPoints;
	this->attackDamage = o_class.attackDamage;
}

FragTrap::FragTrap( const FragTrap &ref_to_copy )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	FragTrap::operator=(ref_to_copy);
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap constructor called" << std::endl;

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;

	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}
