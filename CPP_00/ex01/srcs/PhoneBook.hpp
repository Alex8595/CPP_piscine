/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:24 by ahernand          #+#    #+#             */
/*   Updated: 2022/02/22 13:32:25 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "contact.hpp"

class	PhoneBook
{
	private:
		int			current;
		int			total;
	
	public:
		contact		ppl[8];

		int			getCurrent();
		int			getTotal();

		void		setCurrent(int);
		void		setTotal(int);


		PhoneBook();
		~PhoneBook();
};

#endif
