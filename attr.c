/* @file attr.c
 * @brief tower/bullet colors by attribute
 *
 * This will probably need to be eliminated soon.
 */
 
#include "attr.h"

float attr_colors[ATTR_NUM][3] = {
	{0.5, 0.5, 1.0}, /* ATTR_ENERGY_PARTICLE_PLASMA */
	{0.5, 0.8, 1.0}, /* ATTR_ENERGY_PARTICLE_LIGHTNING */
	{1.0, 0.0, 0.0}, /* ATTR_ENERGY_LASER_CW */
	{1.0, 0.5, 0.4}, /* ATTR_ENERGY_LASER_PULSE */
	{0.5, 0.5, 0.5}, /* ATTR_MASS_KINETIC_APCR */
	{0.9, 0.9, 0.9}, /* ATTR_MASS_KINETIC_APFSDS */
	{0.3, 0.3, 0.3}, /* ATTR_MASS_KINETIC_DU */
	{1.0, 0.5, 0.0}, /* ATTR_MASS_EXPLOSIVE_HE */
	{1.0, 1.0, 0.2}, /* ATTR_MASS_EXPLOSIVE_HEAT */
	{0.5, 1.0, 0.0}, /* ATTR_MASS_EXPLOSIVE_HESH */
	{1.0, 1.0, 1.0}  /* ATTR_BASIC */
};
