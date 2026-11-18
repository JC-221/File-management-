#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int studid;
    int age;
    int i;
    
    fp=fopen("studentss.txt", "w");
    
    for(int i=0; i<3; i++) {
        printf("Student %d\n\n", i);
        printf("Enter student name: \n")
        scanf("%s", name);
        printf("Enter student id: \n")
        scanf("%d", &studid);
        printf("Enter student age: \n")
        scanf("%d", &age);
        
        fprintf("student %d\n\n", i);
        fprintf(fp,"name: %s\n", name );
        fprintf(fp,"student id: %d\n", &studid);
        fprintf(fp,"age: %d\n", &age);
    }
    fclose(fp);
    return 0;
}