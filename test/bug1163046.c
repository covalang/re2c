/* Generated by re2c */
#line 1 "bug1163046.re"
#include <iostream>

#define YYCTYPE unsigned char
#define YYCURSOR cursor
#define YYLIMIT cursor
#define YYMARKER marker
#define YYFILL(n)

bool scan(const char *text)
{
	YYCTYPE *start = (YYCTYPE *)text;
	YYCTYPE *cursor = (YYCTYPE *)text;
	YYCTYPE *marker = (YYCTYPE *)text;
next:
	YYCTYPE *token = cursor;

#line 20 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
yy0:
	if((YYLIMIT - YYCURSOR) < 45) YYFILL(45);
	yych = *YYCURSOR;
	switch(yych){
	case 0x00:	goto yy5;
	case '(':	goto yy2;
	default:	goto yy4;
	}
yy2:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 'T':
	case 't':	goto yy7;
	default:	goto yy3;
	}
yy3:
#line 23 "bug1163046.re"
	{ goto next; }
#line 43 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	goto yy3;
yy5:
	++YYCURSOR;
#line 25 "bug1163046.re"
	{ return false; }
#line 51 "<stdout>"
yy7:
	yych = *++YYCURSOR;
	switch(yych){
	case 'H':
	case 'h':	goto yy9;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
	switch(yych){
	case 'I':
	case 'i':	goto yy10;
	default:	goto yy8;
	}
yy10:
	yych = *++YYCURSOR;
	switch(yych){
	case 'S':
	case 's':	goto yy11;
	default:	goto yy8;
	}
yy11:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy12;
	default:	goto yy8;
	}
yy12:
	yych = *++YYCURSOR;
	switch(yych){
	case 'F':
	case 'f':	goto yy13;
	default:	goto yy8;
	}
yy13:
	yych = *++YYCURSOR;
	switch(yych){
	case 'I':
	case 'i':	goto yy14;
	default:	goto yy8;
	}
yy14:
	yych = *++YYCURSOR;
	switch(yych){
	case 'L':
	case 'l':	goto yy15;
	default:	goto yy8;
	}
yy15:
	yych = *++YYCURSOR;
	switch(yych){
	case 'E':
	case 'e':	goto yy16;
	default:	goto yy8;
	}
yy16:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy17;
	default:	goto yy8;
	}
yy17:
	yych = *++YYCURSOR;
	switch(yych){
	case 'M':
	case 'm':	goto yy18;
	default:	goto yy8;
	}
yy18:
	yych = *++YYCURSOR;
	switch(yych){
	case 'U':
	case 'u':	goto yy19;
	default:	goto yy8;
	}
yy19:
	yych = *++YYCURSOR;
	switch(yych){
	case 'S':
	case 's':	goto yy20;
	default:	goto yy8;
	}
yy20:
	yych = *++YYCURSOR;
	switch(yych){
	case 'T':
	case 't':	goto yy21;
	default:	goto yy8;
	}
yy21:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy22;
	default:	goto yy8;
	}
yy22:
	yych = *++YYCURSOR;
	switch(yych){
	case 'B':
	case 'b':	goto yy23;
	default:	goto yy8;
	}
yy23:
	yych = *++YYCURSOR;
	switch(yych){
	case 'E':
	case 'e':	goto yy24;
	default:	goto yy8;
	}
yy24:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy25;
	default:	goto yy8;
	}
yy25:
	yych = *++YYCURSOR;
	switch(yych){
	case 'C':
	case 'c':	goto yy26;
	default:	goto yy8;
	}
yy26:
	yych = *++YYCURSOR;
	switch(yych){
	case 'O':
	case 'o':	goto yy27;
	default:	goto yy8;
	}
yy27:
	yych = *++YYCURSOR;
	switch(yych){
	case 'N':
	case 'n':	goto yy28;
	default:	goto yy8;
	}
yy28:
	yych = *++YYCURSOR;
	switch(yych){
	case 'V':
	case 'v':	goto yy29;
	default:	goto yy8;
	}
yy29:
	yych = *++YYCURSOR;
	switch(yych){
	case 'E':
	case 'e':	goto yy30;
	default:	goto yy8;
	}
yy30:
	yych = *++YYCURSOR;
	switch(yych){
	case 'R':
	case 'r':	goto yy31;
	default:	goto yy8;
	}
yy31:
	yych = *++YYCURSOR;
	switch(yych){
	case 'T':
	case 't':	goto yy32;
	default:	goto yy8;
	}
yy32:
	yych = *++YYCURSOR;
	switch(yych){
	case 'E':
	case 'e':	goto yy33;
	default:	goto yy8;
	}
yy33:
	yych = *++YYCURSOR;
	switch(yych){
	case 'D':
	case 'd':	goto yy34;
	default:	goto yy8;
	}
yy34:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy35;
	default:	goto yy8;
	}
yy35:
	yych = *++YYCURSOR;
	switch(yych){
	case 'W':
	case 'w':	goto yy36;
	default:	goto yy8;
	}
yy36:
	yych = *++YYCURSOR;
	switch(yych){
	case 'I':
	case 'i':	goto yy37;
	default:	goto yy8;
	}
yy37:
	yych = *++YYCURSOR;
	switch(yych){
	case 'T':
	case 't':	goto yy38;
	default:	goto yy8;
	}
yy38:
	yych = *++YYCURSOR;
	switch(yych){
	case 'H':
	case 'h':	goto yy39;
	default:	goto yy8;
	}
yy39:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy40;
	default:	goto yy8;
	}
yy40:
	yych = *++YYCURSOR;
	switch(yych){
	case 'B':
	case 'b':	goto yy41;
	default:	goto yy8;
	}
yy41:
	yych = *++YYCURSOR;
	switch(yych){
	case 'I':
	case 'i':	goto yy42;
	default:	goto yy8;
	}
yy42:
	yych = *++YYCURSOR;
	switch(yych){
	case 'N':
	case 'n':	goto yy43;
	default:	goto yy8;
	}
yy43:
	yych = *++YYCURSOR;
	switch(yych){
	case 'H':
	case 'h':	goto yy44;
	default:	goto yy8;
	}
yy44:
	yych = *++YYCURSOR;
	switch(yych){
	case 'E':
	case 'e':	goto yy45;
	default:	goto yy8;
	}
yy45:
	yych = *++YYCURSOR;
	switch(yych){
	case 'X':
	case 'x':	goto yy46;
	default:	goto yy8;
	}
yy46:
	yych = *++YYCURSOR;
	switch(yych){
	case ' ':	goto yy47;
	default:	goto yy8;
	}
yy47:
	yych = *++YYCURSOR;
	switch(yych){
	case '4':	goto yy48;
	default:	goto yy8;
	}
yy48:
	yych = *++YYCURSOR;
	switch(yych){
	case '.':	goto yy49;
	default:	goto yy8;
	}
yy49:
	yych = *++YYCURSOR;
	switch(yych){
	case '0':	goto yy50;
	default:	goto yy8;
	}
yy50:
	yych = *++YYCURSOR;
	switch(yych){
	case ')':	goto yy51;
	default:	goto yy8;
	}
yy51:
	++YYCURSOR;
#line 18 "bug1163046.re"
	{
		if (token == start || *(token - 1) == '\n')
		return true; else goto next;
	}
#line 354 "<stdout>"
}
#line 26 "bug1163046.re"

	return false;
}

#define do_scan(str, expect) \
	res = scan(str) == expect ? 0 : 1; \
	std::cerr << str << "\t-\t" << (res ? "fail" : "ok") << std::endl; \
	result += res

#define YYMAXFILL 45


int main(int,void**)
{
	int res, result = 0;
	do_scan("(This file must be converted with BinHex 4.0)", 1);
	do_scan("x(This file must be converted with BinHex 4.0)", 0);
	do_scan("(This file must be converted with BinHex 4.0)x", 1);
	do_scan("x(This file must be converted with BinHex 4.0)x", 0);
	
	return result;
}
