/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:37:16 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 13:48:56 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; ++i) { horde[i].SetName(name); }
	return (horde);
}
