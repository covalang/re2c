/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'b':	goto yy3;
	default:	goto yy2;
	}
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy8;
	}
yy8:
	t = yyt1;
	{}
}

stadfa/stadfa_08.i--tags--stadfa.re:3:3: warning: rule matches empty string [-Wmatch-empty-string]