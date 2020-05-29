#include <assert.h>
#include <stdlib.h>
#include <string.h>

// expect a string without terminating null
static int lex(const char *str, unsigned int len)
{
    const char *cur = str, *lim = str + len;
    int count = 0;

loop:
    /*!re2c
    re2c:yyfill:enable = 0;
    re2c:flags:input = custom;
    re2c:decorate = 0;
    re2c:define:YYCTYPE    = char;
    re2c:define:YYLESSTHAN = "cur >= lim";
    re2c:define:YYPEEK     = "cur < lim ? *cur : 0";  // fake null
    re2c:define:YYSKIP     = "++cur;";

    *      { return -1; }
    [\x00] { return count; }
    [a-z]+ { ++count; goto loop; }
    [ ]+   { goto loop; }

    */
}

// make a copy of the string without terminating null
static void test(const char *str, unsigned int len, int res)
{
    char *s = (char*) malloc(len);
    memcpy(s, str, len);
    int r = lex(s, len);
    free(s);
    assert(r == res);
}

#define TEST(s, r) test(s, sizeof(s) - 1, r)
int main()
{
    TEST("", 0);
    TEST("one two three ", 3);
    TEST("f0ur", -1);
    return 0;
}
