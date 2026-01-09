/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:53:09 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 17:53:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* Zombie;

    Zombie = newZombie("NZ");
    Zombie->announce();
    randomChump("RC");
    delete Zombie;
    return (0);
}