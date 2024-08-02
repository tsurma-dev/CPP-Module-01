/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:37:22 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 13:48:05 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {	std::cout << "Constructor Called" << std::endl; }

Zombie::~Zombie() {	std::cout << "Destructor Called" << std::endl; }

void Zombie::SetName(std::string name) { this->name = name; }

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
