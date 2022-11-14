/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:03 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:32:12 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public :
		Polymorph();
		~Polymorph();
		Polymorph *clone() const;
};


#endif
