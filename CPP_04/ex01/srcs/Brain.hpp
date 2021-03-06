/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:32:54 by ahernand          #+#    #+#             */
/*   Updated: 2022/01/21 13:46:18 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include <iostream>

class Brain
{
	protected:
		std::string				ideas[100];

	public:
		std::string				getIdea(int num);
		void					setIdea(std::string idea, int num);

		void					ft_init_ideas();
		void 					operator=(const Brain *ref);

		Brain(const Brain &ref);
		Brain();
		~Brain();
};

#endif
