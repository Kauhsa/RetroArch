/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2013 - Hans-Kristian Arntzen
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "resampler.h"
#include <string.h>

#ifdef HAVE_CONFIG_H
#include "../config.h"
#endif

#include "../general.h"

static const rarch_resampler_t *backends[] = {
#ifdef HAVE_SINC
   &sinc_resampler,
#endif
   &hermite_resampler,
};

bool rarch_resampler_realloc(void **re, const rarch_resampler_t **backend, const char *ident, double bw_ratio)
{
   if (*re && *backend)
      (*backend)->free(*re);

   *re      = NULL;
   *backend = NULL;

   if (ident)
   {
      for (unsigned i = 0; i < ARRAY_SIZE(backends); i++)
      {
         if (strcmp(backends[i]->ident, ident) == 0)
         {
            *backend = backends[i];
            break;
         }
      }
   }
   else
      *backend = backends[0];

   if (!*backend)
      return false;

   *re = (*backend)->init(bw_ratio);
   if (!*re)
   {
      *backend = NULL;
      return false;
   }

   return true;
}

