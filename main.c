#include <stdio.h>
#include "struct.h"
#include "f.h"

int main(void){
    struct fraction f1, f2, f_result;
    char op_code;
    while(1){
        printf("Enter the first fraction in the forum ex. 1/2 f1: ");
        scanf("%d / %d", &f1.num, &f1.denom);
        getchar();
        printf("Enter the first fraction in the forum ex. 1/2 f2: ");
        scanf("%d / %d", &f2.num, &f2.denom);
        getchar();

        printf("\nEnter the function you wanna run: \n");
        printf("1. simplify(f);\n");
        printf("2. add_fractions(f1, f2);\n");
        printf("3. substract_fractions(f1, f2);\n");
        printf("4. multiply_fractions(f1, f2);\n");
        printf("5. divide_fractions(f1, f2);\n");
        putchar('\n');

        scanf(" %c", &op_code);
        getchar();
        putchar('\n');
        switch(op_code){
            case '1':   f_result = simplify(f1);
                        print_fraction(f_result, "f1");
                        f_result = simplify(f2);
                        print_fraction(f_result, "f2");
                        putchar('\n');
                        break;
            case '2':   f_result = add_fractions(f1, f2);
                        print_fraction(f1, "f1");
                        printf(" + \n");
                        print_fraction(f2, "f2");
                        print_fraction(f_result, "result");
                        putchar('\n');
                        break;
            case '3':   f_result = substract_fractions(f1, f2);
                        print_fraction(f1, "f1");
                        printf(" - \n");
                        print_fraction(f2, "f2");
                        print_fraction(f_result, "result");
                        putchar('\n');
                        break;
            case '4':   f_result = multiply_fractions(f1, f2);
                        print_fraction(f1, "f1");
                        printf(" * \n");
                        print_fraction(f2, "f2");
                        print_fraction(f_result, "result");
                        putchar('\n');
                        break;
            case '5':   f_result = divide_fractions(f1, f2);
                        print_fraction(f1, "f1");
                        printf(" %% \n");
                        print_fraction(f2, "f2");
                        print_fraction(f_result, "result");
                        putchar('\n');
                        break;
            case 'q':   return 0;
            default :   printf("Error! invalid op code!\n\n");
        }
    }
}
