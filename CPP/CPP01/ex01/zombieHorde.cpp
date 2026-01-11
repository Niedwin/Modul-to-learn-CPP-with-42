/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:00:12 by marvin            #+#    #+#             */
/*   Updated: 2026/01/09 20:00:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    if (N <= 0)
        return (NULL);

    Zombie* horde = new Zombie[N];

    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}