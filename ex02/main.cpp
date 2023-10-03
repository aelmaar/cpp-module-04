/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:11:18 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:52:55 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

# define ANIMAL_LEN 10

int main(void)
{
    Animal *animals[ANIMAL_LEN];

    for (int i = 0; i < ANIMAL_LEN; i++)
    {
        if (i < (ANIMAL_LEN / 2))
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < ANIMAL_LEN; i++)
        delete animals[i];
    return (0);
}
