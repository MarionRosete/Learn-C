#include <stdio.h>
#include <string.h>
int main() {
    char choice;
    char student[30];
    char search[30];
    char temp;
    int grade;
    int grades[5]={grade};
    int sum=0;
    int avg=0;
    int res;
    while(1){
    printf("*****Grade Automation***** \n \t[G]Save grade \n \t[N]Search student\n \t[X]Exit \n");
    scanf("%s", &choice);
        switch(choice){
            case 'G':
                printf("Student Name: ");
                scanf("%c", &temp);
                scanf("%[^\n]", student);
                printf("%s", student);
                //get and sum all grades
                for(int i=0; i<5; i++) {
                    printf("\nEnter %d grade:",i+1);
                    scanf("%d", &grades[i]);
                }
                for (int j=0; j<5; j++) {
                    sum = sum + grades[j];
                }
                avg=sum/5;
                break;
            case 'N':
                printf("\n \tSearch student name:");
                scanf("%c", &temp);
                scanf("%[^\n]", search);
                res=strcmp(search, student)==0;
                printf("\tstudent:%s\n", search);
                if(res==1){
                    for(int i=0; i<5; i++){
                        printf("\tGrade %d: %d \n",i+1, grades[i]);
                    }
                    if(avg >= 95){
                        printf("RATIING: Excellent\n");
                    };
                    if(avg >= 90 && !(avg>=95)){
                        printf("RATING: Very Satisfactory\n");
                    };
                    if(avg >= 85&& !(avg>=90)){
                        printf("RATING: Satisfactory\n");
                    };
                    if(avg <= 85){
                        printf("RATING: Needs Improvement\n");
                    };
                }else{
                    printf("student not found!\n");
                    break;
                };
            case 'X':
                return 0;
        };
    }
}

