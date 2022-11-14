/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 11:58:14 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh);
}
