/* Generated by re2c */
#line 1 "eof/01_sentinel.re"
#include <assert.h>

// expect a null-terminated string
static int lex(const char *YYCURSOR)
{
    int count = 0;
loop:
    
#line 12 "eof/01_sentinel.c"
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy2;
	case ' ':	goto yy6;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy4;
	}
yy2:
	++YYCURSOR;
#line 13 "eof/01_sentinel.re"
	{ return count; }
#line 51 "eof/01_sentinel.c"
yy4:
	++YYCURSOR;
#line 12 "eof/01_sentinel.re"
	{ return -1; }
#line 56 "eof/01_sentinel.c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy6;
	default:	goto yy8;
	}
yy8:
#line 15 "eof/01_sentinel.re"
	{ goto loop; }
#line 66 "eof/01_sentinel.c"
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy11;
	}
yy11:
#line 14 "eof/01_sentinel.re"
	{ ++count; goto loop; }
#line 101 "eof/01_sentinel.c"
}
#line 17 "eof/01_sentinel.re"

}

int main()
{
    assert(lex("") == 0);
    assert(lex("one two three") == 3);
    assert(lex("f0ur") == -1);
    return 0;
}
