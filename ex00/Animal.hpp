/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:14:38 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/02 14:01:01 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string &type);
        Animal(Animal const &old_obj);
        Animal &operator=(Animal const &other);
        virtual ~Animal();
        const std::string &getType() const;
        virtual void makeSound() const;
};

#endif