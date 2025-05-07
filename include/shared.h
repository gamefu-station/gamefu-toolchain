/// ======================================================================== ///
/// This file is part of the GameFU Station fantasy console project.         ///
///   FUASM - GameFU Station Toolchain                                       ///
/// ------------------------------------------------------------------------ ///
/// Copyright (C) 2025  L. C. Atticus <contact@nashiora.com>                 ///
///                                                                          ///
/// This program is free software: you can redistribute it and/or modify     ///
/// it under the terms of the GNU Affero General Public License as published ///
/// by the Free Software Foundation, either version 3 of the License, or     ///
/// (at your option) any later version.                                      ///
///                                                                          ///
/// This program is distributed in the hope that it will be useful,          ///
/// but WITHOUT ANY WARRANTY; without even the implied warranty of           ///
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            ///
/// GNU General Public License for more details.                             ///
///                                                                          ///
/// You should have received a copy of the GNU General Public License        ///
/// along with this program.  If not, see <https://www.gnu.org/licenses/>.   ///
/// ======================================================================== ///

#ifndef SHARED_H_
#define SHARED_H_

#include <gfubase/gfubase.h>
#include <gfuarch/gfuarch.h>

typedef enum token_kind {
#define TK(Id) TK_##Id,
#include <tokens.h>
    TK_COUNT,
} token_kind;

typedef struct token {
    token_kind kind;
} token;

#endif /* SHARED_H_ */
