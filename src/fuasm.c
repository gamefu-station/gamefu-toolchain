/// ======================================================================== ///
/// This file is part of the GameFU Station fantasy console project.         ///
///   FUASM - GameFU Station Assembler                                       ///
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

#define GFUBASE_IMPLEMENTATION
#include <gfubase/gfubase.h>

#define GFUARCH_IMPLEMENTATION
#include <gfuarch/gfuarch.h>

#include <fuasm.h>

int main(int argc, char** argv) {
    int result = 0;

    gfuasm_context context = {0};

    fprintf(stderr, "Hello, FUASM!\n");

defer:;
    return result;
}
