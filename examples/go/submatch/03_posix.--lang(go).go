// Code generated by re2c, DO NOT EDIT.
//line "go/submatch/03_posix.--lang(go).re":1
//go:generate re2go "$GOFILE" -o "$OUTPUT"
package main

import (
	"errors"
	"testing"
)

var YYMAXNMATCH int = 5


var eBadIP error = errors.New("bad IP")

func lex(str string) (int, error) {
	var cursor, marker, yynmatch int
	yypmatch := make([]int, YYMAXNMATCH*2)
	var yyt1 int
	var yyt2 int
	var yyt3 int
	var yyt4 int

	num := func(pos int, end int) int {
		n := 0
		for ; pos < end; pos++ {
			n = n*10 + int(str[pos]-'0')
		}
		return n
	}

	
//line "go/submatch/03_posix.--lang(go).go":34
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case '0':
		yyt1 = cursor
		goto yy4
	case '1':
		yyt1 = cursor
		goto yy5
	case '2':
		yyt1 = cursor
		goto yy6
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		yyt1 = cursor
		goto yy7
	default:
		goto yy2
	}
yy2:
	cursor += 1
yy3:
//line "go/submatch/03_posix.--lang(go).re":51
	{ return 0, eBadIP }
//line "go/submatch/03_posix.--lang(go).go":71
yy4:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	default:
		goto yy3
	}
yy5:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy10
	default:
		goto yy3
	}
yy6:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		goto yy10
	case '5':
		goto yy11
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy12
	default:
		goto yy3
	}
yy7:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy12
	default:
		goto yy3
	}
yy8:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '0':
		yyt2 = cursor
		goto yy13
	case '1':
		yyt2 = cursor
		goto yy14
	case '2':
		yyt2 = cursor
		goto yy15
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		yyt2 = cursor
		goto yy16
	default:
		goto yy9
	}
yy9:
	cursor = marker
	goto yy3
yy10:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy12
	default:
		goto yy9
	}
yy11:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		goto yy12
	default:
		goto yy9
	}
yy12:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy8
	default:
		goto yy9
	}
yy13:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy17
	default:
		goto yy9
	}
yy14:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy17
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy16
	default:
		goto yy9
	}
yy15:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy17
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		goto yy16
	case '5':
		goto yy18
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy13
	default:
		goto yy9
	}
yy16:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy17
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy13
	default:
		goto yy9
	}
yy17:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '0':
		yyt3 = cursor
		goto yy19
	case '1':
		yyt3 = cursor
		goto yy20
	case '2':
		yyt3 = cursor
		goto yy21
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		yyt3 = cursor
		goto yy22
	default:
		goto yy9
	}
yy18:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy17
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		goto yy13
	default:
		goto yy9
	}
yy19:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy23
	default:
		goto yy9
	}
yy20:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy23
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy22
	default:
		goto yy9
	}
yy21:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy23
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		goto yy22
	case '5':
		goto yy24
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy19
	default:
		goto yy9
	}
yy22:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy23
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy19
	default:
		goto yy9
	}
yy23:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '0':
		yyt4 = cursor
		goto yy25
	case '1':
		yyt4 = cursor
		goto yy26
	case '2':
		yyt4 = cursor
		goto yy27
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		yyt4 = cursor
		goto yy28
	default:
		goto yy9
	}
yy24:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case '.':
		goto yy23
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		goto yy19
	default:
		goto yy9
	}
yy25:
	cursor += 1
	yych = str[cursor]
	if (yych <= 0x00) {
		goto yy29
	}
	goto yy9
yy26:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy29
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy28
	default:
		goto yy9
	}
yy27:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy29
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		goto yy28
	case '5':
		goto yy31
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy25
	default:
		goto yy9
	}
yy28:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy29
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy25
	default:
		goto yy9
	}
yy29:
	cursor += 1
	yynmatch = 5
	yypmatch[2] = yyt1
	yypmatch[4] = yyt2
	yypmatch[6] = yyt3
	yypmatch[8] = yyt4
	yypmatch[0] = yyt1
	yypmatch[1] = cursor
	yypmatch[3] = yyt2
	yypmatch[3] += -1
	yypmatch[5] = yyt3
	yypmatch[5] += -1
	yypmatch[7] = yyt4
	yypmatch[7] += -1
	yypmatch[9] = cursor
	yypmatch[9] += -1
//line "go/submatch/03_posix.--lang(go).re":42
	{
		if yynmatch != 5 {
			panic("expected 5 submatch groups")
		}
		return num(yypmatch[8], yypmatch[9])+
			(num(yypmatch[6], yypmatch[7]) << 8)+
			(num(yypmatch[4], yypmatch[5]) << 16)+
			(num(yypmatch[2], yypmatch[3]) << 24), nil
	}
//line "go/submatch/03_posix.--lang(go).go":682
yy31:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 0x00:
		goto yy29
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		goto yy25
	default:
		goto yy9
	}
}
//line "go/submatch/03_posix.--lang(go).re":52

}

func TestLex(t *testing.T) {
	var tests = []struct {
		str string
		res int
		err error
	}{
		{"1.2.3.4\000", 0x01020304, nil},
		{"127.0.0.1\000", 0x7f000001, nil},
		{"255.255.255.255\000", 0xffffffff, nil},
		{"1.2.3.\000", 0, eBadIP},
		{"1.2.3.256\000", 0, eBadIP},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			res, err := lex(x.str)
			if !(res == x.res && err == x.err) {
				t.Errorf("got %d, want %d", res, x.res)
			}
		})
	}
}