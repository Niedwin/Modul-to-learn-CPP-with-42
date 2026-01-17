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

int Fixed::_fract = 8;

Fixed::Fixed(): _entier(0)
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
Fixed::Fixed(int const n) 
{
	std::cout << "Int constructor called" << std::endl;
	_entier = n << _fract;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	_entier = (int)roundf(n * (1 << _fract));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_entier = src.getRawBits();

	return *this;
}
	
int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_entier);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_entier = raw;
}

float	Fixed::toFloat(void) const 
{
	return (float)_entier / (float)(1 << _fract);
}

int	Fixed::toInt(void) const 
{
	return (int)(_entier >> _fract);
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed) 
{
	o << fixed.toFloat();
	return o;
}

bool	Fixed::operator>(Fixed const &other) const 
{
	return getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(Fixed const &other) const 
{
	return getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(Fixed const &other) const 
{
	return getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(Fixed const &other) const 
{
	return getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const 
{
	return getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(Fixed const &other) const 
{
	return getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &other) const 
{
	Fixed	ret;
	ret.setRawBits(getRawBits() + other.getRawBits());
	return ret;
}

Fixed	Fixed::operator-(Fixed const &other) const 
{
	Fixed	ret;
	ret.setRawBits(getRawBits() - other.getRawBits());
	return ret;
}

Fixed	Fixed::operator*(Fixed const &other) const 
{
	Fixed	ret;
	ret.setRawBits(getRawBits() * other.getRawBits() >> _fract);
	return ret;
}

Fixed	Fixed::operator/(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() / other.getRawBits() << _fract);
	return ret;
}

Fixed&	Fixed::operator++() 
{
	_entier++;
	return *this;
}

Fixed	Fixed::operator++(int) 
{
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() 
{
	_entier--;
	return *this;
}

Fixed	Fixed::operator--(int) 
{
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) 
{
	return a < b ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) 
{
	return a > b ? a : b;
}

Fixed const &min(Fixed const &a, Fixed const &b) 
{
	return Fixed::min(a, b);
}

Fixed const &max(Fixed const &a, Fixed const &b) 
{
	return Fixed::max(a, b);
}