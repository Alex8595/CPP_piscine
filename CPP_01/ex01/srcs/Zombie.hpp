/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:19:56 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 14:19:57 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

// ************************************************************************** //
//                               Zombie  Class                                //
// ************************************************************************** //

class Zombie
{
	private:
		std::string		_name;

	public:
		void			announce( void );
		void			set_name( std::string name );
		std::string		get_name( void );

		
		Zombie( std::string str );
		Zombie( void );
		~Zombie( void );
};

#endif