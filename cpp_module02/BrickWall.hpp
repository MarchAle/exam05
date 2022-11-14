/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:03 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 13:34:22 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public :
		BrickWall();
		~BrickWall();
		BrickWall *clone() const;
};


#endif
