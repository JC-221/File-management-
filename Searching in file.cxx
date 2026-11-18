#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*function declaration to check weather it is uppercase or lowercase and then fix it*/

int sametext(char a[], char b[])
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (tolower(a[i]) != tolower(b[i]))
        {
            return 0;
        }

        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
    {
        return 1;
    }
    return 0;
}

//main part of the program

int main()
{
    FILE *fp;

    int n, student, age, searchAge, child, found = 0;
    char Fname[50], F[50], L[50], Lname[50], village[50], V[50];
    double weight, height, kgs, m;

    while (1)
    {
        fp = fopen("childrens.txt", "r");

        if (fp == NULL)
        {
            printf("Cannot open file.\n");
            return 1;
        }

        // Skip the header
        fscanf(fp, "%*[^\n]\n");

        printf("\n\n\n1. Chil's number\n");
        printf("2. First name\n");
        printf("3. Last name\n");
        printf("4. Village\n");
        printf("5. Age\n");
        printf("6. Weight\n");
        printf("7. Height\n");
        printf("\n\nEnter number corresponding to what you want to search by: ");
        scanf("%d", &n);

        //switch cases for search options

        switch (n)
        {
        case 1:
            printf("\nEnter child's number: ");
            scanf("%d", &child);

            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (student == child)
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }
            }

            if (!found)
            {
                printf("\nNo child found.\n");
            }
            break;

        case 2:

            printf("\nEnter First name to search: ");
            scanf("%s", F);

            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (sametext(Fname, F))
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;

        case 3:

            printf("\nEnter Last name to search: ");
            scanf("%s", L);

            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (sametext(Lname, L))
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;

        case 4:

            printf("\nEnter village to search: ");
            scanf("%s", V);

            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (sametext(village, V))
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;

        case 5:
            printf("\nEnter age: ");
            scanf("%d", &searchAge);
            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (age == searchAge)
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;
        case 6:
            printf("\nEnter weight: ");
            scanf("%lf", &kgs);
            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (weight == kgs)
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;

        case 7:
            printf("\nEnter height: ");
            scanf("%lf", &m);
            while (fscanf(fp, "%d %s %s %s %d %lf %lf",
                          &student,
                          Fname,
                          Lname,
                          village,
                          &age,
                          &weight,
                          &height) == 7)
            {
                if (height == m)
                {
                    printf("\nRecord Found!\n\n");
                    printf("Child\t FName\t Lname\t village\tage\t weight\t height\t\n\n");
                    printf("%d\t %s  %s  %s \t%d\t %.2lf\t %.2lf\t\n", student, Fname, Lname, village, age, weight, height);

                    found = 1;
                }

                if (!found)
                {
                    printf("\nNo child found.\n");
                }
            }
            break;
        default:
            printf("\nChoose correctly!\n");
        }
        fclose(fp);
    }
    return 0;
}