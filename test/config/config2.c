/* Generated by re2c */
#line 1 "config/config2.re"
// re2c $INPUT -o $OUTPUT -s
#define	NULL		((char*) 0)
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

char *scan0(char *p)
{
	char *q;

#line 16 "config/config2.c"
{
   YYCTYPE yych;
   if (YYLIMIT <= YYCURSOR) YYFILL(1);
   yych = *YYCURSOR;
   if (yych <= 'b') {
      if (yych <= '`') goto yy2;
      if (yych <= 'a') goto yy4;
      goto yy6;
   } else {
      if (yych <= 'c') goto yy8;
      if (yych <= 'd') goto yy10;
   }
yy2:
   ++YYCURSOR;
#line 18 "config/config2.re"
   { return NULL; }
#line 33 "config/config2.c"
yy4:
   ++YYCURSOR;
#line 14 "config/config2.re"
   { return YYCURSOR; }
#line 38 "config/config2.c"
yy6:
   ++YYCURSOR;
#line 15 "config/config2.re"
   { return YYCURSOR; }
#line 43 "config/config2.c"
yy8:
   ++YYCURSOR;
#line 16 "config/config2.re"
   { return YYCURSOR; }
#line 48 "config/config2.c"
yy10:
   ++YYCURSOR;
#line 17 "config/config2.re"
   { return YYCURSOR; }
#line 53 "config/config2.c"
}
#line 19 "config/config2.re"

}

char *scan1(char *p)
{
	char *q;

#line 63 "config/config2.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'b') {
		if (yych <= '`') goto yy14;
		if (yych <= 'a') goto yy16;
		goto yy18;
	} else {
		if (yych <= 'c') goto yy20;
		if (yych <= 'd') goto yy22;
	}
yy14:
	++YYCURSOR;
#line 31 "config/config2.re"
	{ return NULL; }
#line 80 "config/config2.c"
yy16:
	++YYCURSOR;
#line 27 "config/config2.re"
	{ return YYCURSOR; }
#line 85 "config/config2.c"
yy18:
	++YYCURSOR;
#line 28 "config/config2.re"
	{ return YYCURSOR; }
#line 90 "config/config2.c"
yy20:
	++YYCURSOR;
#line 29 "config/config2.re"
	{ return YYCURSOR; }
#line 95 "config/config2.c"
yy22:
	++YYCURSOR;
#line 30 "config/config2.re"
	{ return YYCURSOR; }
#line 100 "config/config2.c"
}
#line 32 "config/config2.re"

}

char *scan(char *p)
{
	char *q;

#line 110 "config/config2.c"
{
YYCTYPE yych;
if (YYLIMIT <= YYCURSOR) YYFILL(1);
yych = *YYCURSOR;
if (yych <= 'b') {
if (yych <= '`') goto yy26;
if (yych <= 'a') goto yy28;
goto yy30;
} else {
if (yych <= 'c') goto yy32;
if (yych <= 'd') goto yy34;
}
yy26:
++YYCURSOR;
#line 44 "config/config2.re"
{ return NULL; }
#line 127 "config/config2.c"
yy28:
++YYCURSOR;
#line 40 "config/config2.re"
{ return YYCURSOR; }
#line 132 "config/config2.c"
yy30:
++YYCURSOR;
#line 41 "config/config2.re"
{ return YYCURSOR; }
#line 137 "config/config2.c"
yy32:
++YYCURSOR;
#line 42 "config/config2.re"
{ return YYCURSOR; }
#line 142 "config/config2.c"
yy34:
++YYCURSOR;
#line 43 "config/config2.re"
{ return YYCURSOR; }
#line 147 "config/config2.c"
}
#line 45 "config/config2.re"

}
