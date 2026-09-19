
#include <stdio.h>

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
    struct college c[10];   // max 10 colleges per university
    int num_colleges;       // how many are actually filled in
};

int main() {
    int i, j, n;

    printf("Enter number of universities: ");
    scanf("%d", &n);

    struct university U[n];

    // ---- INPUT ----
    for (i = 0; i < n; i++) {
        printf("\n--- University %d ---\n", i + 1);
        printf("Enter university code and name: ");
        scanf("%s %s", U[i].uni_code, U[i].uni_name);

        printf("How many colleges under this university? ");
        scanf("%d", &U[i].num_colleges);

        for (j = 0; j < U[i].num_colleges; j++) {
            printf("  Enter college %d code, pin code, name, branch code, year: ", j + 1);
            scanf("%s %d %s %s %d",
                  U[i].c[j].college_code,
                  &U[i].c[j].pin_code,
                  U[i].c[j].college_name,
                  U[i].c[j].branch_code,
                  &U[i].c[j].year);
        }
    }

    // ---- OUTPUT ----
    for (i = 0; i < n; i++) {
        printf("\nUniversity %d: %s (%s)\n", i + 1, U[i].uni_name, U[i].uni_code);
        for (j = 0; j < U[i].num_colleges; j++) {
            printf("  College %d -> code: %s, pin: %d, name: %s, branch: %s, year: %d\n",
                   j + 1,
                   U[i].c[j].college_code,
                   U[i].c[j].pin_code,
                   U[i].c[j].college_name,
                   U[i].c[j].branch_code,
                   U[i].c[j].year);
        }
    }

    return 0;
}
