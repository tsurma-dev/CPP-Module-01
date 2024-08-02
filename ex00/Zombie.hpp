/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:57:46 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 11:30:17 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
std::string	name;

public:
	Zombie( std::string name );
	~Zombie();
	void announce( void );
};

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

#endif
