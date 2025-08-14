#include <stdio.h>
#include <conio.h>

int main()
{
    int rollno, opt, std;
    char name[20], sec;
    int tam_mark, eng_mark, mat_mark, sci_mark, soc_mark, phy_mark, chem_mark, bio_mark, cs_mark, com_mark, acc_mark, eco_mark, ca_mark, bot_mark, zoo_mark, total;
    float percentage, attendance;
    char grade;
    clrscr();
    printf("\t\t'STUDENT REPORT CARD GENERATING SYSTEM'");
    printf("\n1. 1st to 10th\n2. 11th and 12th biomaths\n3. 11th and 12th computer science\n4. 11th and 12th arts and science\n5. 11th and 12th pure science\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d", &opt);
    clrscr();
    switch (opt) {
case 1: // 1 to 10
   printf("*********************************************");
   printf("\nREPORT CARD GENERATING SYSTEM\n");
   printf("*********************************************");
   printf("\nEnter name of the student: ");
   scanf("%s", name);
   printf("Enter roll no: ");
   scanf("%d", &rollno);
   printf("Enter standard: ");
   scanf("%d", &std);
   printf("Enter section: ");
   scanf(" %c", &sec);
   printf("Enter attendance percentage of the student:");
   scanf("%f",&attendance);
   printf("Enter tamil mark: ");
   scanf("%d", &tam_mark);
   printf("Enter english mark: ");
   scanf("%d", &eng_mark);
   printf("Enter maths mark: ");
   scanf("%d", &mat_mark);
   printf("Enter science mark: ");
   scanf("%d", &sci_mark);
   printf("Enter social mark: ");
   scanf("%d", &soc_mark);
total=(tam_mark+eng_mark+mat_mark+sci_mark+soc_mark);
   percentage = (tam_mark + eng_mark + mat_mark + sci_mark + soc_mark) / 5;
   clrscr();
 
 printf("**************************************************************");printf
("\nABISHIYA MATRICULATION HIGHER SECONDARY SCHOOL,DINDIGUL\n");
   printf("**************************************************************");
   printf("\nSTUDENT REPORT CARD\n");
   printf("***************************************************************");
   printf("\nNAME OF THE STUDENT: %s", name);
   printf("\nSTANDARD: %d", std);
   printf("\nSECTION: %c", sec);
   printf("\nROLL NO: %d", rollno);
   printf("\nATTENDANCE PERCENTAGE: %f",attendance);
   printf("\nTAMIL MARK: %d", tam_mark);
   printf("\nENGLISH MARK: %d", eng_mark);
   printf("\nMATHS MARK: %d", mat_mark);
   printf("\nSCIENCE MARK: %d", sci_mark);
   printf("\nSOCIAL MARK: %d", soc_mark);
   printf("\nTOTAL:%d",total);
   printf("\nPERCENTAGE: %f\n", percentage);
    if (percentage >= 90 && percentage <= 100) {
printf("\nGRADE: O\n");
   } else if (percentage >= 80 && percentage < 90) {
printf("\nGRADE: A\n");
   } else if (percentage >= 70 && percentage < 80) {
printf("\nGRADE: B\n");
   } else if (percentage >= 60 && percentage < 70) {
printf("\nGRADE: D\n");
   } else if (percentage >= 40 && percentage < 60) {
printf("\nGRADE: E\n");
   } else {
printf("\nFAIL\n");
   }
   printf("\nSIGNATURE OF THE CLASS TEACHER");
   printf("\nSIGNATURE OF THE PARENT");
   printf("\nSIGNATURE OF THE PRINCIPAL ");
   printf("\n\t\t\tI CAN I WILL");
   break;
case 2: // for 11th and 12th biomaths
   printf("*********************************************");
printf("\nSTUDENT REPORT CARD GENERATING SYSTEM");
   printf("*********************************************");
   printf("Enter name of the student: ");
   scanf("%s", name);
   printf("Enter roll no: ");
   scanf("%d", &rollno);
   printf("Enter standard: ");
   scanf("%d", &std);
   printf("Enter section: ");
   scanf(" %c", &sec);
   printf("Enter attendance percentage of the student:");
   scanf("%f",&attendance);
   printf("Enter tamil mark: ");
   scanf("%d", &tam_mark);
   printf("Enter english mark: ");
   scanf("%d", &eng_mark);
   printf("Enter maths mark: ");
   scanf("%d", &mat_mark);
   printf("Enter physics mark: ");
   scanf("%d", &phy_mark);
   printf("Enter chemistry mark: ");
   scanf("%d", &chem_mark);
   printf("Enter biology mark: ");
   scanf("%d", &bio_mark);
   total=(tam_mark+eng_mark+mat_mark+phy_mark+chem_mark+bio_mark);
   percentage = (tam_mark + eng_mark + mat_mark + phy_mark + chem_mark + bio_mark) / 6;
   clrscr();
   printf("*************************************************************");
   printf("\nABISHIYA MATRICULATON HIGHER SECONDARY SCHOOL,DINDIGUL");
   printf("*************************************************************");
   printf("\nSTUDENT REPORT CARD");
   printf("*************************************************************");
   printf("\nNAME OF THE STUDENT: %s", name);
   printf("\nSTANDARD: %d", std);
   printf("\nSECTION: %c", sec);
   printf("\nROLL NO: %d", rollno);
   printf("\nATTENDANCE PERCENTAGE: %f",attendance);
   printf("\nTAMIL MARK: %d", tam_mark);
   printf("\nENGLISH MARK: %d", eng_mark);
printf("\nMATHS MARK: %d", mat_mark);
printf("\nPHYSICS MARK: %d", phy_mark);
   printf("\nCHEMISTRY MARK: %d", chem_mark);
   printf("\nBIOLOGY MARK: %d", bio_mark);
   printf("\nTOTAL: %d",total);
   printf("\nPERCENTAGE: %f",percentage);
   if (percentage >= 90 && percentage <= 100) {
printf("\nGRADE: O\n");
   } else if (percentage >= 80 && percentage < 90) {
printf("\nGRADE: A\n");
   } else if (percentage >= 60 && percentage < 80) {
printf("\nGRADE: B\n");
   } else if (percentage >= 50 && percentage < 60) {
printf("\nGRADE: C\n");
   } else if (percentage >= 40 && percentage < 50) {
printf("\nGRADE: D\n");
   } else {
printf("\nFAIL\n");
   }
   printf("\nSIGNATURE OF THE CLASS TEACHER");
   printf("\nSIGNATURE OF THE PARENT");
   printf("\nSIGNATURER OF THE PRINCIPAL:");
   printf("\n\t\tI CAN I WILL");
   break;
case 3: // for 11th and 12th computer science
   printf("******************************************");
   printf("\nSTUDENT REPORT CARD GENERATING SYSTEM");
   printf("******************************************") ;
   printf("Enter name of the student: ");
   scanf("%s", name);
   printf("Enter roll no: ");
   scanf("%d", &rollno);
   printf("Enter standard: ");
   scanf("%d", &std);
   printf("Enter section: ");
scanf(" %c", &sec);
   printf("Enter attendance pecentage:");
   scanf("%f",&attendance);
   printf("Enter tamil mark: ");
   scanf("%d", &tam_mark);
   printf("Enter english mark: ");
   scanf("%d", &eng_mark);
   printf("Enter maths mark: ");
   scanf("%d", &mat_mark);
   printf("Enter physics mark: ");
   scanf("%d", &phy_mark);
   printf("Enter chemistry mark: ");
   scanf("%d", &chem_mark);
   printf("Enter computer science mark: ");
   scanf("%d", &cs_mark);
   total=(tam_mark+eng_mark+mat_mark+phy_mark+chem_mark+cs_mark);
   percentage = (tam_mark + eng_mark + mat_mark + phy_mark + chem_mark + cs_mark) / 6;
   clrscr();
 
 printf("**********************************************************");
   printf("\nABISHIYA MATRICULATION HIGHER SECONDARY SCHOOL,DINDIGUL");
 
 printf("**********************************************************");
   printf("\nSTUDENT REPORT CARD");
 
 printf("**********************************************************");
   printf("\nNAME OF THE STUDENT: %s", name);
   printf("\nSTANDARD: %d", std);
   printf("\nSECTION: %c", sec);
   printf("\nROLL NO: %d", rollno);
printf("\nATTENDANCE PERCENTAGE:%f",attendance);
   printf("\nTAMIL MARK: %d", tam_mark);
   printf("\nENGLISH MARK: %d", eng_mark);
   printf("\nMATHS MARK: %d", mat_mark);
   printf("\nPHYSICS MARK: %d", phy_mark);
   printf("\nCHEMISTRY MARK: %d", chem_mark);
   printf("\nCOMPUTER SCIENCE MARK: %d", cs_mark);
   printf("\nTOTAL:%d",total);
   printf("\nPERCENTAGE:%f",percentage);
   if (percentage >= 90 && percentage <= 100) {
printf("\nGRADE: O\n");
   } else if (percentage >= 80 && percentage < 90) {
printf("\nGRADE: A\n");
   } else if (percentage >= 60 && percentage < 80) {
printf("\nGRADE: B\n");
   } else if (percentage >= 50 && percentage < 60) {
printf("\nGRADE: C\n");
   } else if (percentage >= 40 && percentage < 50) {
printf("\nGRADE: D\n");
   } else
    {
    printf("\nFAIL\n");
   }
   printf("\nSIGNATURE OF THE CLASS TEACHER");
   printf("\nSIGNATURE OF THE PARENT");
   printf("\nSIGNATURE OF THE PRINCIPAL ");
   printf("\n\t\tI CAN I WILL");

   break;
// Remaining cases (4, 5, and default) same as your code...
default:
   printf("\nInvalid standard ");
    }
 getch();
    return 0;
}
