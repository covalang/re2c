/* Generated by re2c */
#line 1 "fill/02_fill.re"
#include <assert.h>
#include <stdio.h>
#include <string.h>

#define YYMAXFILL 1

#define SIZE 4096

typedef struct {
    FILE *file;
    char buf[SIZE + YYMAXFILL], *lim, *cur, *mar, *tok;
    int eof;
} Input;

static int fill(Input *in, size_t need)
{
    if (in->eof) {
        return 1;
    }
    const size_t free = in->tok - in->buf;
    if (free < need) {
        return 2;
    }
    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    in->lim += fread(in->lim, 1, free, in->file);
    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }
    return 0;
}

static void init(Input *in, FILE *file)
{
    in->file = file;
    in->cur = in->mar = in->tok = in->lim = in->buf + SIZE;
    in->eof = 0;
    fill(in, 1);
}

static int lex(Input *in)
{
    int count = 0;
loop:
    in->tok = in->cur;
    
#line 55 "fill/02_fill.c"
{
	char yych;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return -1;
	yych = *in->cur;
	switch (yych) {
	case 0x00:	goto yy2;
	case ' ':	goto yy6;
	case '\'':	goto yy9;
	default:	goto yy4;
	}
yy2:
	++in->cur;
#line 59 "fill/02_fill.re"
	{ return (YYMAXFILL == in->lim - in->tok) ? count : -1; }
#line 70 "fill/02_fill.c"
yy4:
	++in->cur;
#line 58 "fill/02_fill.re"
	{ return -1; }
#line 75 "fill/02_fill.c"
yy6:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return -1;
	yych = *in->cur;
	switch (yych) {
	case ' ':	goto yy6;
	default:	goto yy8;
	}
yy8:
#line 61 "fill/02_fill.re"
	{ goto loop; }
#line 87 "fill/02_fill.c"
yy9:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return -1;
	yych = *in->cur;
	switch (yych) {
	case '\'':	goto yy11;
	case '\\':	goto yy13;
	default:	goto yy9;
	}
yy11:
	++in->cur;
#line 60 "fill/02_fill.re"
	{ ++count; goto loop; }
#line 101 "fill/02_fill.c"
yy13:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return -1;
	yych = *in->cur;
	goto yy9;
}
#line 63 "fill/02_fill.re"

}

int main()
{
    const char *fname = "input";
    const char str[] = "'qu\0tes' 'are' 'fine: \\'' ";
    FILE *f;
    Input in;

    // prepare input file: a few times the size of the buffer,
    // containing strings with zeroes and escaped quotes
    f = fopen(fname, "w");
    for (int i = 0; i < SIZE; ++i) {
        fwrite(str, 1, sizeof(str) - 1, f);
    }
    fclose(f);

    f = fopen(fname, "r");
    init(&in, f);
    assert(lex(&in) == SIZE * 3);
    fclose(f);

    remove(fname);
    return 0;
}
