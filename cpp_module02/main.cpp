/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:39:22 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 15:44:45 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"

int main()
{
  const Warlock richard("Richard", "foo");
  //richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Firball", *wall);
}
