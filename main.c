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

enum OPCODES
{
	ADD,
	SUB,
	MUL,
	DIV,
	PUT,
	GET
};

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
};

int main(int argc, char *argv[])
{
	return 0;
}
