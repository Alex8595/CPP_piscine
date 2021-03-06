/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:28:22 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/17 17:08:05 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/*
void ft_leaks()
{
	system("leaks Animals");
	atexit(ft_leaks);
}
*/

int main()
{
	std::cout << std::endl << "_______ Constructors ________" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();




	std::cout << std::endl << "_______ Cat and Dog ________" << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();




	std::cout << std::endl << "_______ Destructors ________" << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;




	std::cout << std::endl << "_______Wrong Cat________" << std::endl << std::endl;
	
	const WrongAnimal* wcat = new WrongCat();
	std::cout << std::endl;

	std::cout << wcat->getType() << " " << std::endl;

	wcat->makeSound();

	std::cout << std::endl;
	delete wcat;

	return (0);
}
