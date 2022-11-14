/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:21:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:58:42 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"
# include "Warlock.hpp"

class ATarget;

class SpellBook
{
	private :
		SpellBook(SpellBook const &src);
		SpellBook &operator=(SpellBook const &src);

		std::vector<ASpell *> spells;

	public :
		SpellBook();
		~SpellBook();

		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string const &spell);
		ASpell				*createSpell(std::string const &spell);
};

#endif

