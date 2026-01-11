/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:55:22 by marvin            #+#    #+#             */
/*   Updated: 2025/12/29 17:55:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie 
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce(void) const;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif