/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:22:36 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 15:18:52 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon) : name(_name) , weapon(weapon)
{}

HumanA::~HumanA() { }

void HumanA::attack(){
	std::cout << this->name << " attacks with their weapon " << this->weapon.getType() << std::endl;
}
