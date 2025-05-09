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

#ifndef FUASM_H_
#define FUASM_H_

#include <gfubase/shared.h>

typedef enum asm_expr_kind {
} asm_expr_kind;

typedef struct asm_expr {
    asm_expr_kind kind;
} asm_expr;

typedef struct asm_stmt {
    token label;
    token mnemonic;
    gfu_string_view comment;
} asm_stmt;

typedef struct mips_file_header {
    u8 magic[4];
    u8 endianness;
    u8 version;
    u8 section_count;
    u8 padding[1];
} mips_file_header;

typedef struct mips_section_header {
    u8 segment;
    u8 padding[3];
    u32 offset;
    u32 size;
} mips_section_header;

typedef struct gfuasm_context {
    const char* input_file;
    const char* output_file;
} gfuasm_context;

#endif /* FUASM_H_ */
