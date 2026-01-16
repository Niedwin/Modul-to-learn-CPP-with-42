/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 22:42:26 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 22:42:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _i;
        static const int _j;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed &operator=(const Fixed &src);
        int getRawBits(void)const;
        void setRawBits(int const raw);
};
#endif