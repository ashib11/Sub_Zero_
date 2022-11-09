#include <stdio.h>
#include <string.h>
#define LINE_LEN 100

int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    int id, semester;
    double gpa;
    double highestGpa = -1;
    int studentIDWithHighestGpa;

    if (argc > 1)
    {
        fp = fopen(argv[1], "r");
    }
    else
    {
        fp = fopen("C:\\Users\\Ashibur Rahman\\Downloads\\grades.txt", "r");
    }

    char line[LINE_LEN + 1];

    int check = 0, count = 0;
    int studentId;
    double sum = 0, average;
    scanf("%d", &studentId);

    if (fp != NULL)
    {
        while (fgets(line, 99, fp) != NULL)
        {
            fscanf(fp, "%d;%lf;%d", &id, &gpa, &semester);

            if (id == studentId)
            {
                sum = sum + gpa;
                count++;
            }
        }
        average = sum / count;
        printf("CGPA of  ID %d is : %.2lf", studentId, average);
        return 0;
    }

    printf("Student ID not found");
    

fclose(fp);

return 0;
}