/*
 * Copyright 2008-2009 Katholieke Universiteit Leuven
 *
 * Use of this software is governed by the GNU LGPLv2.1 license
 *
 * Written by Sven Verdoolaege, K.U.Leuven, Departement
 * Computerwetenschappen, Celestijnenlaan 200A, B-3001 Leuven, Belgium
 */

#ifndef ISL_BASIS_REDUCTION_H
#define ISL_BASIS_REDUCTION_H

#include "isl_set.h"
#include <isl_mat_private.h>
#include "isl_tab.h"

#if defined(__cplusplus)
extern "C" {
#endif

struct isl_tab *isl_tab_compute_reduced_basis(struct isl_tab *tab);
struct isl_mat *isl_basic_set_reduced_basis(struct isl_basic_set *bset);

#if defined(__cplusplus)
}
#endif

#endif
