/* @file attr.h
 * @brief attribute declarations
 *
 * This file may be eliminated depending on various architectural changes.
 */

#ifndef _ATTR_H_
#define _ATTR_H_

#include "globals.h"

#define ATTR_NUM 11

typedef enum attr {
	/* energy -> particle types */
	ATTR_ENERGY_PARTICLE_PLASMA = 0,
	ATTR_ENERGY_PARTICLE_LIGHTNING = 1,

	/* energy -> laser types */
	ATTR_ENERGY_LASER_CW = 2,
	ATTR_ENERGY_LASER_PULSE = 3,

	/* mass -> kinetic */
	ATTR_MASS_KINETIC_APCR = 4,
	ATTR_MASS_KINETIC_APFSDS = 5,
	ATTR_MASS_KINETIC_DU = 6,

	/* mass -> explosive */
	ATTR_MASS_EXPLOSIVE_HE = 7,
	ATTR_MASS_EXPLOSIVE_HEAT = 8,
	ATTR_MASS_EXPLOSIVE_HESH = 9,

	ATTR_BASIC = 10,
	ATTR_NONE = 11
} attr_t;

extern float attr_colors[ATTR_NUM][3];

#endif
