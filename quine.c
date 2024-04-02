#include <stdio.h>

#define DBL_QUOTE_ASCII 34
#define NEWLINE_ASCII 10

#define ARRAY_SIZE(a, t) (sizeof(a) / sizeof(t))

const char *CODE[] = {
    "",
    "void print_start(void) {",
    "    // Headers and macros",
    "    ",
    "    puts(%c#include <stdio.h>%c);",
    "    putchar(NEWLINE_ASCII);",
    "    puts(%c#define DBL_QUOTE_ASCII 34%c);",
    "    puts(%c#define NEWLINE_ASCII 10%c);",
    "    putchar(NEWLINE_ASCII);",
    "    puts(%c#define ARRAY_SIZE(a, t) (sizeof(a) / sizeof(t))%c);",
    "    ",
    "    // Write CODE array",
    "    puts(%cconst char *CODE[] = {%c);",
    "    ",
    "    for (size_t i = 0; i < ARRAY_SIZE(CODE, const char *); i++) {",
    "        const char *line = CODE[i];",
    "        printf(%c    %c%s%c,%c, DBL_QUOTE_ASCII, line, DBL_QUOTE_ASCII);",
    "        putchar(NEWLINE_ASCII);"
    "    }",
    "    ",
    "    puts(%c};%c);",
    "}",
    "",
    "int main(void) {",
    "    print_start();",
    "    ",
    "    // Print rest of code",
    "    for (size_t i = 0; i < ARRAY_SIZE(CODE, const char *); i++) {",
    "        const char *line = CODE[i];",
    "        ",
    "        if (i == 16) {",
    "            printf(line, DBL_QUOTE_ASCII, '%', %cc%%s%%%c, 'c', DBL_QUOTE_ASCII);",
    "        } else {",
    "            printf(line, DBL_QUOTE_ASCII, DBL_QUOTE_ASCII);",
    "        }",
    "        ",
    "        putchar(NEWLINE_ASCII);",
    "    }",
    "    ",
    "    return 0;",
    "}"
};

void print_start(void) {
    // Headers and macros
    puts("#include <stdio.h>");
    putchar(NEWLINE_ASCII);
    puts("#define DBL_QUOTE_ASCII 34");
    puts("#define NEWLINE_ASCII 10");
    putchar(NEWLINE_ASCII);
    puts("#define ARRAY_SIZE(a, t) (sizeof(a) / sizeof(t))");
    putchar(NEWLINE_ASCII);
    
    // Write CODE array
    puts("const char *CODE[] = {");
    
    for (size_t i = 0; i < ARRAY_SIZE(CODE, const char *); i++) {
        const char *line = CODE[i];
        printf("    %c%s%c,", DBL_QUOTE_ASCII, line, DBL_QUOTE_ASCII);
        putchar(NEWLINE_ASCII);
    }
    
    puts("};");
}

int main(void) {
    print_start();
    
    // Print rest of code
    for (size_t i = 0; i < ARRAY_SIZE(CODE, const char *); i++) {
        const char *line = CODE[i];
        
        if (i == 16) {
            printf(line, DBL_QUOTE_ASCII, '%', "c%s%", 'c', DBL_QUOTE_ASCII);
        } else {
            printf(line, DBL_QUOTE_ASCII, DBL_QUOTE_ASCII);
        }
        
        putchar(NEWLINE_ASCII);
    }
    
    return 0;
}
