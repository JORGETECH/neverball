/*
 * Copyright (C) 2003 Robert Kooima
 *
 * NEVERBALL is  free software; you can redistribute  it and/or modify
 * it under the  terms of the GNU General  Public License as published
 * by the Free  Software Foundation; either version 2  of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT  ANY  WARRANTY;  without   even  the  implied  warranty  of
 * MERCHANTABILITY or  FITNESS FOR A PARTICULAR PURPOSE.   See the GNU
 * General Public License for more details.
 */

#ifndef SOL_PHYS_H
#define SOL_PHYS_H

#include "solid.h"

/*---------------------------------------------------------------------------*/

void sol_body_p(float p[3], const struct s_file *, const struct s_body *);

/*---------------------------------------------------------------------------*/

float sol_step(struct s_file *, const float *, float, int, int *);

int   sol_jump_test(struct s_file *, float *);
int   sol_swch_test(struct s_file *);
int   sol_goal_test(struct s_file *, float *, int);

struct s_item *sol_item_test(struct s_file *, float *, float);

/*---------------------------------------------------------------------------*/

#endif
