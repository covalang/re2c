/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycc3: goto yyc_c3;
	}
/* *********************************** */
yyc_c1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	++YYCURSOR;
	{ return DEFAULT-1; }
/* *********************************** */
yyc_c2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	++YYCURSOR;
	{ return DEFAULT-2; }
/* *********************************** */
yyc_c3:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy12;
	{ return C3; }
yy12:
	++YYCURSOR;
	{ return DEFAULT-*; }
}

