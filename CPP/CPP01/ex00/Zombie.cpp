/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:17:15 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 18:17:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie() {
	std::cout << _name << " destroyed" << std::endl;
}

void	Zombie::announce(void) const 
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}