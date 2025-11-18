/*
    | Function                       | Description                               | Example                           |
| ------------------------------ | ----------------------------------------- | --------------------------------- |
| **`strlen(str)`**              | Returns length of string (excluding `\0`) | `strlen("Hello") → 5`             |
| **`strcpy(dest, src)`**        | Copies `src` into `dest`                  | `strcpy(a, "Zafran")`             |
| **`strncpy(dest, src, n)`**    | Copies first `n` characters from `src`    | `strncpy(a, "Pakistan", 4)`       |
| **`strcat(dest, src)`**        | Appends `src` to end of `dest`            | `strcat(a, "World")`              |
| **`strncat(dest, src, n)`**    | Appends first `n` characters from `src`   | `strncat(a, "World!!", 5)`        |
| **`strcmp(str1, str2)`**       | Compares strings → returns 0 if equal     | `strcmp("a", "b")`                |
| **`strncmp(str1, str2, n)`**   | Compares first `n` characters             | `strncmp("Pak", "Pakora", 3)`     |
| **`strchr(str, ch)`**          | Finds first occurrence of character       | `strchr("Hello", 'l')`            |
| **`strrchr(str, ch)`**         | Finds last occurrence of character        | `strrchr("Hello", 'l')`           |
| **`strstr(haystack, needle)`** | Finds substring inside string             | `strstr("I love coding", "love")` |
| **`strtok(str, delim)`**       | Splits string into tokens                 | `strtok(text, ",")`               |
| **`memset(ptr, val, n)`**      | Fills memory with a value                 | `memset(a, 0, 10)`                |
| **`memcpy(dest, src, n)`**     | Copies `n` bytes                          | `memcpy(b, a, 10)`                |
| **`memcmp(ptr1, ptr2, n)`**    | Compares `n` bytes                        | `memcmp("abc", "abd", 3)`         |

*/

#include <iostream>
#include <string.h>
using namespace std ;


int main()
{

    char s1[] = "Zafran Khan" ;    //1️⃣ strlen()
    cout <<strlen(s1) << endl;

    //2️⃣ strcpy()

    char s2[20]= "Kamran" ;

    cout <<strcpy(s1 , s2) << endl;    // s1 mein s2 krdo
    cout <<"S2 = " << s2 << "\nS1 = " << s2 << endl;

    // 3️⃣ strncpy() — Copy n characters

    char s3[] = "Zafran";
    char s4[] = "Khan";
    cout <<strncpy(s3 , s4 , 4) << endl;

    // 4️⃣ strcat() — Concatenate (append)

    char s5[] = "Zafran";
    char s6[] = " Khan" ;
    cout <<strcat(s5 , s6) << endl;

    // 5️⃣ strncat() — Concatenate n characters

    char s7[] = "Zafran";
    char s8[] = " Khan" ;
    cout <<strncat(s7 , s8 , 5) << endl;

    // 6️⃣ strcmp() — Compare two strings

    // char s9[] = "Afaan";    
    // char s0[] = "Badal" ;
    // cout <<strcmp(s9, s0) << endl;   // only check first character for compare and return 1 0 -1 depending on the char

    // 7️⃣ strncmp() — Compare n characters

    char s9[] = "Afaannn";    
    char s0[] = "Badal" ;
    cout <<strncmp(s9, s0 , 1) << endl;

 return 0 ;  
}