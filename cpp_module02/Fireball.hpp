/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:03 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:44:47 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
	public :
		Fireball();
		~Fireball();
		Fireball *clone() const;
};


#endif
