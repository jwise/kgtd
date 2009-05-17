#ifndef _DAMAGE_H_
#define _DAMAGE_H_

#include "attr.h"
#include "noob.h"

void damage_calc(noob_t *noob, float damage, float dt, attr_t attr);
void damage_future_calc(noob_t *noob, float damage, attr_t attr);
int damage_not_worthwhile(noob_t *noob, attr_t attr);

#endif