/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 22:59:40 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 22:59:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _i(0)
{
    std::cout << "Default constuctor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "constructor copy called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_i = src.getRawBits();

	return *this;
}
	int	Fixed::getRawBits(void)const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_i);
	}

	void	Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		this->_i = raw;
	}