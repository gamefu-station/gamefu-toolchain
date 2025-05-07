#ifndef TK
#    define TK(Id)
#endif

#ifndef TK_PUNCT
#    define TK_PUNCT(Id, Spelling) TK(Id)
#endif

#ifndef TK_MNEMONIC
#    define TK_MNEMONIC(Id, Spelling) TK(KW_##Id)
#endif

#ifndef TK_KEYWORD
#    define TK_KEYWORD(Id, Spelling) TK(KW_##Id)
#endif

///===--------------------------------------===///
/// Special tokens.
///===--------------------------------------===///

TK(INVALID)         // not a token
TK(END_OF_FILE)     // end of file

///===--------------------------------------===///
/// Assembler tokens.
///===--------------------------------------===///

TK(ASM_GLOBAL_LABEL)
TK(ASM_LOCAL_LABEL)
TK(ASM_IMMEDIATE)
TK(ASM_BYTE_STRING)
TK(ASM_STMT_END)

// Symbols
TK_PUNCT(COMMA, ",")

// MIPS General Purpose Registers
TK_KEYWORD(REG_R0, "r0")
TK_KEYWORD(REG_R1, "r1")
TK_KEYWORD(REG_R2, "r2")
TK_KEYWORD(REG_R3, "r3")
TK_KEYWORD(REG_R4, "r4")
TK_KEYWORD(REG_R5, "r5")
TK_KEYWORD(REG_R6, "r6")
TK_KEYWORD(REG_R7, "r7")
TK_KEYWORD(REG_R8, "r8")
TK_KEYWORD(REG_R9, "r9")
TK_KEYWORD(REG_R10, "r10")
TK_KEYWORD(REG_R11, "r11")
TK_KEYWORD(REG_R12, "r12")
TK_KEYWORD(REG_R13, "r13")
TK_KEYWORD(REG_R14, "r14")
TK_KEYWORD(REG_R15, "r15")
TK_KEYWORD(REG_R16, "r16")
TK_KEYWORD(REG_R17, "r17")
TK_KEYWORD(REG_R18, "r18")
TK_KEYWORD(REG_R19, "r19")
TK_KEYWORD(REG_R20, "r20")
TK_KEYWORD(REG_R21, "r21")
TK_KEYWORD(REG_R22, "r22")
TK_KEYWORD(REG_R23, "r23")
TK_KEYWORD(REG_R24, "r24")
TK_KEYWORD(REG_R25, "r25")
TK_KEYWORD(REG_R26, "r26")
TK_KEYWORD(REG_R27, "r27")
TK_KEYWORD(REG_R28, "r28")
TK_KEYWORD(REG_R29, "r29")
TK_KEYWORD(REG_R30, "r30")
TK_KEYWORD(REG_R31, "r31")

TK_KEYWORD(REG_ZERO, "zero")
TK_KEYWORD(REG_AT, "at")
TK_KEYWORD(REG_V0, "v0")
TK_KEYWORD(REG_V1, "v1")
TK_KEYWORD(REG_A0, "a0")
TK_KEYWORD(REG_A1, "a1")
TK_KEYWORD(REG_A2, "a2")
TK_KEYWORD(REG_A3, "a3")
TK_KEYWORD(REG_T0, "t0")
TK_KEYWORD(REG_T1, "t1")
TK_KEYWORD(REG_T2, "t2")
TK_KEYWORD(REG_T3, "t3")
TK_KEYWORD(REG_T4, "t4")
TK_KEYWORD(REG_T5, "t5")
TK_KEYWORD(REG_T6, "t6")
TK_KEYWORD(REG_T7, "t7")
TK_KEYWORD(REG_S0, "s0")
TK_KEYWORD(REG_S1, "s1")
TK_KEYWORD(REG_S2, "s2")
TK_KEYWORD(REG_S3, "s3")
TK_KEYWORD(REG_S4, "s4")
TK_KEYWORD(REG_S6, "s5")
TK_KEYWORD(REG_S6, "s6")
TK_KEYWORD(REG_S7, "s7")
TK_KEYWORD(REG_T8, "t8")
TK_KEYWORD(REG_T9, "t9")
TK_KEYWORD(REG_K0, "k0")
TK_KEYWORD(REG_K1, "k1")
TK_KEYWORD(REG_GP, "gp")
TK_KEYWORD(REG_SP, "sp")
TK_KEYWORD(REG_FP, "fp")
TK_KEYWORD(REG_RA, "ra")
TK_KEYWORD(REG_HI, "hi")
TK_KEYWORD(REG_LO, "lo")

// Instruction mnemonics
TK_MNEMONIC(DB, "db")
TK_MNEMONIC(ENTRY, "entry")
TK_MNEMONIC(SECTION, "section")
TK_MNEMONIC(WEAK, "weak")

TK_MNEMONIC(ABS, "abs")
TK_MNEMONIC(ADD, "add")
TK_MNEMONIC(ADDU, "addu")
TK_MNEMONIC(AND, "and")
TK_MNEMONIC(BEQ, "beq")
TK_MNEMONIC(BGE, "bge")
TK_MNEMONIC(BGEU, "bgeu")
TK_MNEMONIC(BGT, "bgt")
TK_MNEMONIC(BGTU, "bgtu")
TK_MNEMONIC(BLE, "ble")
TK_MNEMONIC(BLEU, "bleu")
TK_MNEMONIC(BLT, "blt")
TK_MNEMONIC(BLTU, "bltu")
TK_MNEMONIC(BNE, "bne")
TK_MNEMONIC(DIV, "div")
TK_MNEMONIC(DIVU, "divu")
TK_MNEMONIC(J, "j")
TK_MNEMONIC(JAL, "jal")
TK_MNEMONIC(JR, "jr")
TK_MNEMONIC(LA, "la")
TK_MNEMONIC(LB, "lb")
TK_MNEMONIC(LBU, "lbu")
TK_MNEMONIC(LH, "lh")
TK_MNEMONIC(LHU, "lhu")
TK_MNEMONIC(LI, "li")
TK_MNEMONIC(LW, "lw")
TK_MNEMONIC(MFHI, "mfhi")
TK_MNEMONIC(MFLO, "mflo")
TK_MNEMONIC(MOVE, "move")
TK_MNEMONIC(MUL, "mul")
TK_MNEMONIC(MULU, "mulu")
TK_MNEMONIC(NEG, "neg")
TK_MNEMONIC(NEGU, "negu")
TK_MNEMONIC(NOT, "not")
TK_MNEMONIC(NOP, "nop")
TK_MNEMONIC(OR, "or")
TK_MNEMONIC(POP, "pop")
TK_MNEMONIC(PUSH, "push")
TK_MNEMONIC(REM, "rem")
TK_MNEMONIC(REMU, "remu")
TK_MNEMONIC(SB, "sb")
TK_MNEMONIC(SGE, "sge")
TK_MNEMONIC(SGT, "sgt")
TK_MNEMONIC(SH, "sh")
TK_MNEMONIC(SLL, "sll")
TK_MNEMONIC(SLLV, "sllv")
TK_MNEMONIC(SRA, "sra")
TK_MNEMONIC(SRAV, "srav")
TK_MNEMONIC(SRL, "srl")
TK_MNEMONIC(SRLV, "srlv")
TK_MNEMONIC(SUB, "sub")
TK_MNEMONIC(SUBU, "subu")
TK_MNEMONIC(SW, "sw")
TK_MNEMONIC(SYSCALL, "syscall")
TK_MNEMONIC(XOR, "xor")

///===--------------------------------------===///
/// Language tokens.
///===--------------------------------------===///

#undef TK_KEYWORD
#undef TK_MNEMONIC
#undef TK_PUNCT
#undef TK
