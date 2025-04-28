#include <cstdio>

int main() {
    // Integer
    int num = 42;
    printf(
        "Integer: %d\n",
        num
    );

    // Float (default 6 decimal places)
    float pi = 3.14159;
    printf(
        "Float: %f\n",
        pi
    );

    // Float with 2 decimal places
    printf(
        "Float (2 decimals): %.2f\n",
        pi
    );

    // String
    char name[] = "Mohamed";
    printf(
        "String: %s\n",
        name
    );

    // Character
    char letter = 'A';
    printf(
        "Character: %c\n",
        letter
    );

    // Unsigned Integer
    unsigned int positiveNum = 300;
    printf(
        "Unsigned Integer: %u\n",
        positiveNum
    );

    // Hexadecimal (lowercase)
    int hexNum = 255;
    printf(
        "Hexadecimal (lowercase): %x\n",
        hexNum
    );

    // Hexadecimal (uppercase)
    printf(
        "Hexadecimal (UPPERCASE): %X\n",
        hexNum
    );

    // Pointer
    int* ptr = &num;
    printf(
        "Pointer Address: %p\n",
        ptr
    );

    // Width formatting (right aligned)
    printf(
        "Right aligned (width 10): |%10d|\n",
        num
    );

    // Width formatting (left aligned)
    printf(
        "Left aligned (width 10): |%-10d|\n",
        num
    );

    // Zero padding
    printf(
        "Zero padded (width 5): %05d\n",
        num
    );

    // Always show sign
    printf(
        "Always show sign: %+d\n",
        num
    );
    printf(
        "Always show sign (negative): %+d\n",
        -num
    );

    // Width + Precision for float
    printf(
        "Float with width 8 and 2 decimals: |%8.2f|\n",
        pi
    );
}