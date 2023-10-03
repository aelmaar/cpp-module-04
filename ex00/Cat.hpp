/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:09 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/02 14:02:23 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const std::string &type);
        Cat(Cat const &old_obj);
        Cat &operator=(Cat const &other);
        virtual ~Cat();
        const std::string &getType() const;
        void makeSound() const;
};

#endif