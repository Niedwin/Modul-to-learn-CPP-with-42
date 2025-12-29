/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:41:07 by marvin            #+#    #+#             */
/*   Updated: 2025/12/19 17:41:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int     index;
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    ADD(void);
        void    SEARCH(void);
        void    PRINT(void);
        Contact get_contact(int index);
};

#endif