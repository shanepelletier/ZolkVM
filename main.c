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

/* All arithmetic instructions are defined as 0x<opcode><funct>,except for
 * instructions with no <funct>, which are only defined as 0x<opcode>.
 */

/* CPU Arithmetic Instructions */
#define ADD 0x20
#define ADDI  0x8
#define ADDIU 0x9
#define ADDU 0x21
#define CLO 0x1C21
#define CLZ 0x1C20
#define DIV 0x1A
#define DIVU 0x1B
#define MADD 0x1C
#define MADDU 0x1C1
#define MSUB 0x1C4
#define MSUBU 0x705
#define MUL
#define MULT 0x18
#define MULTU 0x19
#define SLT 0x2A
#define SLTI 0x0A
#define SLTIU 0x0B
#define SLTU 0x2B00
#define SUB 0x22
#define SUBU 0x23

/* NOTE: will have to come back to these. */

/* CPU Branch and Jump Instructions */
#define BEQ 0x04
#define BGEZ
#define BGEZAL
#define BGTZ
#define BLEZ
#define BLTZ
#define BLTZAL
#define BNE 0x05
#define J 0x2
#define JAL 0x3
#define JALR
#define JR 0x0800

/* CPU Instruction Control Instructions */
#define NOP
#define SSNOP

/* CPU Load, Store, and Memory Control Instructions */
#define LB
#define LBU 0x24
#define LH
#define LHU 0x25
#define LL
#define LW 0x23
#define LWL
#define LWR
#define PREF
#define SB
#define SC
#define SD
#define SH
#define SW 0x2B
#define SWL
#define SWR
#define SYNC

/* CPU Logical Instructions */
#define AND 0x2400
#define ANDI 0xC
#define LUI
#define NOR 0x2700
#define OR 0x2500
#define ORI 0x0D
#define XOR 0x2600
#define XORI

/* CPU Move Instructions */
#define MFHI 0x1000
#define MFLO 0x1200
#define MOVF
#define MOVN
#define MOVT
#define MOVZ
#define MTHI
#define MTLO

/* CPU Shift Instructions */
#define SLL 0x0
#define SLLV 0x0200
#define SRA 0x0300
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
  int R10;
  int R11;
  int R12;
  int R13;
  int R14;
  int R15;
  int R16;
  int R17;
  int R18;
  int R19;
  int R20;
  int R21;
  int R22;
  int R23;
  int R24;
  int R25;
  int R26;
  int R27;
  int R28;
  int R29;
  int R30;
  int R31;
  int HI;
  int LO;
	int PC;
};

int main(int argc, char *argv[])
{
  int testprogram[1] = {0x20210005};
  printf(testprogram[1]);
	return 0;
}
