/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:39:25 by ahernand          #+#    #+#             */
/*   Updated: 2022/03/15 19:39:26 by ahernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ITER_HPP__
# define __ITER_HPP__
# include <iostream>

template < typename T >
void iter( T *ptr , int lenght, void fton(const T&))
{
	for	(int i = 0; i < lenght; i++)
		fton(ptr[i]);
}

#endif
