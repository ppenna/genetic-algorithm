/*
 * Copyright(C) 2015 Pedro H. Penna  <pedrohenriquepenna@gmail.com>,
 *                   Larissa Leijoto <larissa.leijoto@gmail.com>
 * 
 * This file is part of Proteins.
 * 
 * Proteins is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Proteins is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Proteins. If not, see <http://www.gnu.org/licenses/>.
 */

#include <math.h>

#ifndef M_PI
#define M_PI

#define M_PI 3.14159265358979323846

#endif /* M_PI */

/**
 * @brief Discrete cosine transform.
 * 
 * @details Applies the discrete cosine transform in the vector pointed to by
 *          @p x.
 * 
 * @param x Vector where the discrete cosine transform should be applied.
 * @param n Dimension of the vector.
 */
void dct(float *x, unsigned n)
{
	for (unsigned i = 1; i < n; i++)
	{
		for (unsigned j = 0; j < n; j++)
		{
			float ipi;
			
			if (i == 0)
			{
				x[i] += 1 / sqrt(n)*x[j];
				continue;
			}
			
			x[i] += sqrt(2.0/n)*cos(ipi + ipi/(2.0*n))*x[j];
		}
	}
}