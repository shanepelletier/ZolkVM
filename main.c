/*
    ZolkVM - An attempt to to wite a VM in C
    Copyright (C) 2013 Shane M. Pelletier

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>
#include <stdio.h>

/* CPU Arithmetic Instructions */
#define ADD
#define ADDI
#define ADDIU
#define ADDU
#define CLO
#define CLZ
#define DIV
#define DIVU
#define MADD
#define MADDU
#define MSUB
#define MSUBU
#define MUL
#define MULT
#define MULTU
#define SLT
#define SLTI
#define SLTIU
#define SLTU
#define SUB
#define SUBU

/* CPU Branch and Jump Instructions */
#define B
#define BAL
#define BEQ
#define BGEZ
#define BGEZAL
#define BGTZ
#define BLEZ
#define BLTZ
#define BLTZAL
#define BNE
#define J
#define JAL
#define JALR
#define JR

/* CPU Instruction Control Instructions */
#define NOP
#define SSNOP

/* CPU Load, Store, and Memory Control Instructions */
#define LB
#define LBU
#define LH
#define LHU
#define LL
#define LW
#define LWL
#define LWR
#define PREF
#define SB
#define SC
#define SD
#define SH
#define SW
#define SWL
#define SWR
#define SYNC

/* CPU Logical Instructions */
#define AND
#define ANDI
#define LUI
#define NOR
#define OR
#define ORI
#define XOR
#define XORI

/* CPU Move Instructions */
#define MFHI
#define MFLO
#define MOVF
#define MOVN
#define MOVT
#define MOVZ
#define MTHI
#define MTLO

/* CPU Shift Instructions */
#define SLL
#define SLLV
#define SRA
#define SRAV
#define SRL
#define SRLV

/* CPU Trap Instructions */
#define BREAK
#define SYSCALL
#define TEQ
#define TEQI
#define TGE
#define TGEI
#define TGEIU
#define TGEU
#define TLT
#define TLTI
#define TLTIU
#define TLTU
#define TNE
#define TNEI

/* Obsolete CPU Branch Instructions */
#define BEQL
#define BGEZALL
#define BGEZL
#define BGTZL
#define BLEZL
#define BLTZALL
#define BLTZL
#define BNEL

/* Privileged Instructions */
#define CACHE
#define ERET
#define MFC0
#define MTC0
#define TLBP
#define TLBR
#define TLBWI
#define TLBWR
#define WAIT

/* EJTAG Instructions */
#define DERET
#define SDBBP

enum INFILES
{
	STDIN
};

enum OUTFILES
{
	STDOUT,
	STDERR,
};

struct Registers
{
	int R0;
	int R1;
	int R2;
	int R3;
	int R4;
	int R5;
	int R6;
	int R7;
	int R8;
	int R9;
	int PC;
};

int main(int argc, char *argv[])
{
	return 0;
}
