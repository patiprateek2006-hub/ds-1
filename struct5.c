#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct college {
    char college_code[10];
    int pin_code;
    char college_name[50];
    char branch_code[10];
    int year;
    int bstr;
};

struct university {
    char uni_code[10];
    char uni_name[50];
    struct college c[10];
    int num_colleges;
};

int main() {
    int i, j, n;

    srand(time(NULL));   // seed random generator once, at the start

    printf("Enter number of universities: ");
    scanf("%d", &n);

    struct university U[n];

    // ---- RANDOM DATA GENERATION ----
    for (i = 0; i < n; i++) {
        sprintf(U[i].uni_code, "UNI%d", i + 1);
        sprintf(U[i].uni_name, "University_%d", i + 1);

        U[i].num_colleges = (rand() % 10) + 1;   // random 1 to 10 colleges

        for (j = 0; j < U[i].num_colleges; j++) {
            sprintf(U[i].c[j].college_code, "CLG%d%d", i + 1, j + 1);
            U[i].c[j].pin_code = 100000 + (rand() % 900000);        // random 6-digit pin
            sprintf(U[i].c[j].college_name, "College_%d_%d", i + 1, j + 1);
            sprintf(U[i].c[j].branch_code, "BR%d", (rand() % 5) + 1); // BR1 to BR5
            U[i].c[j].year = 2000 + (rand() % 25);                  // random year 2000-2024
            U[i].c[j].bstr = rand() % 100;
        }
    }

    // ---- OUTPUT ----
    for (i = 0; i < n; i++) {
        printf("\nUniversity %d: %s (%s) - %d colleges\n",
               i + 1, U[i].uni_name, U[i].uni_code, U[i].num_colleges);
        for (j = 0; j < U[i].num_colleges; j++) {
            printf("  College %d -> code: %s, pin: %d, name: %s, branch: %s, year: %d, bstr: %d\n",
                   j + 1,
                   U[i].c[j].college_code,
                   U[i].c[j].pin_code,
                   U[i].c[j].college_name,
                   U[i].c[j].branch_code,
                   U[i].c[j].year,
                   U[i].c[j].bstr);
        }
    }

    return 0;
}
