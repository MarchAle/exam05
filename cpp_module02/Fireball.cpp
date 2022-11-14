/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:31:01 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::~Fireball() {}

Fireball *Fireball::clone() const
{
	return (new Fireball);
}
