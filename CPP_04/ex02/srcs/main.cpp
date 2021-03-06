/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:24:40 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/10 14:04:36 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*
void ft_leaks()
{
	system("leaks Abstract");
	atexit(ft_leaks);
}
*/

int main()
{
	int		n_an = 6;
	AAnimal	*animals[n_an];


	std::cout << std::endl << "_____        Constructor        _____" << std::endl << std::endl;
	for (int i = 0; i < n_an; i++)
	{
		if (i % 2)
			animals[i] = new Dog(); 
		else
			animals[i] = new Cat();
	}




	std::cout << std::endl << "_____     Test Assignation op   _____" << std::endl;
	std::cout << std::endl << "_____           Before          _____" << std::endl << std::endl;

	for (int i = 0; i < 5; i++)
		std::cout << animals[4]->getIdea(i) << std::endl;




	std::cout << std::endl << "_____         Changed          _____" << std::endl << std::endl;

	for (int i = 0; i < 5; i++)
	{
		animals[4]->setIdea("ZZZ zzz ...", i);
		std::cout << animals[4]->getIdea(i) << std::endl;
	}




	std::cout << std::endl << "_____         Deep copy        _____" << std::endl << std::endl;

	*(animals[4]) = *(animals[2]);

	for (int i = 0; i < 5; i++)
		std::cout << animals[4]->getIdea(i) << std::endl;




	std::cout << std::endl << "_____        Destructors        _____" << std::endl << std::endl;

	for (int i = 0; i < n_an; i++)
		delete animals[i];
	
	return (0);
}
