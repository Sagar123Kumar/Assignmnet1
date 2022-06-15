#include<stdio.h>
#include<conio.h>
void main()
{
    int j,r,choice;
    char s[10],a[10]="Arman",b[10]="Ankush",c[10]="Pritam",d[10]="Diwakar",e[10]="Ravi",f[10]="Ashish",g[10]="Abdul",h[10]="Rocky",i[10]="Alok",k[10]="Sujit",l[10]="Anand",m[20]="Abhishek",n[10]="Nitish",o[10]="Anand",p[10]="Shadab",q[10]="Prince",t[20]="Abhishek",u[20]="Yashwardhan",v[10]="Sonu",w[10]="Ayush",x[10]="Sagar",y[10]="Barun",z[10]="Suraj",A[20]="Shagoofi",B[20]="Kahkasha",C[20]="Nuzhat";
    while(1)
    {
    system("cls");
    system("color b");
    printf("\t\t\t\t\t\t%cWelcome to RAJENDRA. MISHRA. COLLEGE, BECHLOR OF COMPUTER APPLICATION DEPARTMENT%c\n\t\t\t\t\t\t\t\t\t\tESTD-1987\n \t\t\t\t\t\t\t\t\t SAHARSA-852201 (BIHAR)\n \t\t\t\t\t\t\t\t(A CENTRE OF EXCELLENCE NAAC ACCREDITED)\n \t\t\t\t\t\t\t(A CONSTITUTE UNIT OF B.N. MANDAL UNIVERSITY, MADHEPURA)\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\tDr.L.N. Mishra\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tProf.(Dr.)Arun Kumar Khan\n\tCo-Ordinator of B.C.A\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tPrinciple of R.M. college\n");
           for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\t\t   %c|(B.C.A 1st SEM 2021-2024) STUDENT DETAILS and FACULTY DETAILS |%c\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n\n");
    printf("*Total 52 Students\n\n");
    printf("1: To Check Student Details\n");
    printf("2: To Check Faculty Details\n");
    printf("3: To Check Developer Details\n");
    printf("4: Exit\n\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    printf("*Enter your choice\n\n ");
    scanf("%d",&choice);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    switch(choice)
    {
    case 1:
    printf("* Enter student only first name hint:(Sagar)\n\n ");
    scanf("%s",&s);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("* Enter Student Class roll no\n\n ");
    scanf("%d",&r);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    if(r<=0||r>=53)
    {
        printf("Plz Enter Valid Roll no\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    }
    if((strcmp(s, a)) == 0 && r==50)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Arman Verma\n Roll No  : 50\n Address  : Purab bazaar Kayasthatola\n ward no. : 30\n District : Saharsa\n Mob. No. : 9065028661\n");
    }
    else if((strcmp(s, b)) == 0 && r==37)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Ankush Kumar\n Roll No  : 37\n Address  : Polytechnic Dhala\n ward no. : Not Found\n District : Saharsa\n Mob. No. : 7654802185\n");
    }
    else if((strcmp(s, c)) == 0 && r==39)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Pritam Kumar\n Roll No  : 39\n Address  : Madanpur,Kahra ward\n ward no. : 13\n District : Madhepura\n Mob. No. : 7667766896\n");
    }
    else if((strcmp(s, d)) == 0 && r==19)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Diwakar Kumar\n Roll No  : 19\n Address  : Madhepura\n ward no. : Not Found\n District : Madhepura\n Mob. No. : 7542966408\n");
    }
    else if((strcmp(s, e)) == 0 && r==15)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Ravi Kant Kumar\n Roll No  : 15\n Address  : Tiwari Tola Near R.M. college saharsa\n ward no. : Not Found\n District : Supaul\n Mob. No. : 6299001800\n");
    }
    else if((strcmp(s, f)) == 0 && r==20)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Ashish Kumar\n Roll No  : 20\n Address  : Mahaveer Chowk\n ward no. : Not Found\n District : Saharsa\n Mob. No. : 7857097638\n");
    }

    else if((strcmp(s, g)) == 0 && r==16)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Abdul Kadir\n Roll No  : 16\n Address  : Ali Road Saharsa Basti\n ward No. : 31\n District : Saharsa\n Mob. No. : 6207181020\n");
    }
    else if((strcmp(s, h)) == 0 && r==52)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Rocky Kumar\n Roll No  : 52\n Address  : Lakshminiya Chowk \n ward no. : 34\n District : Saharsa\n Mob. No. : 7870142738\n");
    }
    else if((strcmp(s, i)) == 0 && r==33)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Alok Kumar\n Roll No  : 33\n Address  : Goth bardaha, ghalardh\n ward No. : 04\n District : Madhepura\n Mob. No. : 9353872088\n");
    }
    else if((strcmp(s, k)) == 0 && r==36)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Sujit Kumar\n Roll No  : 36\n Address  : Patuaha\n ward no. : 36\n District : Saharsa\n Mob. No. : 9155240684\n");
    }
    else if((strcmp(s, l)) == 0 && r==4)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Anand Kumar\n Roll No  : 04\n Address  : kajhi, Ratauli, pipra\n ward No. : 11\n District : Supaul\n Mob. No. : 7091187285\n");
    }
    else if((strcmp(s, m)) == 0 && r==28)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Abhishek Kumar\n Roll No  : 28\n Address  : Khajuri, Simri Bakhtiyarpur\n ward no. : Not Found\n District : Saharsa\n Mob. No. : 7779846693\n");
    }
    else if((strcmp(s, n)) == 0 && r==38)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Nitish Kumar\n Roll No  : 38\n Address  : Sihaul\n ward No. : 07\n District : Madhepura\n Mob. No. : 7061748156\n");
    }
    else if((strcmp(s, o)) == 0 && r==26)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Anand Kashayap\n Roll No  : 26\n Address  : Bara Saharsa\n ward no. : 09\n District : Saharsa\n Mob. No. : 9341108429\n");
    }
    else if((strcmp(s, p)) == 0 && r==17)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Shadab Khan Sammer\n Roll No  : 17\n Address  : Khajuri, Saharsa Basti\n ward no. : 38\n District : Saharsa\n Mob. No. : 9430646853\n");
    }
    else if((strcmp(s, q)) == 0 && r==31)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Prince Kumar\n Roll No  : 31\n Address  : Sihaul\n ward no. : 07\n District : Madhepura\n Mob. No. : 9117629121\n");
    }
    else if((strcmp(s, t)) == 0 && r==2)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Abhishek Anand\n Roll No  : 2\n Address  : Kayashth Tola\n ward no. : 30\n District : Saharsa\n Mob. No. : 9508515503\n");
    }
    else if((strcmp(s, u)) == 0 && r==9)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Yashwardhan Kumar\n Roll No  : 09\n Address  : Balha Gadhiya\n ward no. : 09\n District : Madhepura\n Mob. No. : 8789624718\n");
    }
    else if((strcmp(s, v)) == 0 && r==25)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Sonu Kumar Mishra\n Roll No  : 25\n Address  : Lagma, Sonbarsha\n ward no. : 08\n District : Saharsa\n Mob. No. : 9334656756\n");
    }
    else if((strcmp(s, w)) == 0 && r==23)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Ayush Kumar\n Roll No  : 23\n Address  : D.B Road\n ward no. : 10\n District : Saharsa\n Mob. No. : 8825118789\n");
    }
    else if((strcmp(s, x)) == 0 && r==30)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Sagar Kumar\n Roll No  : 30\n Address  : Lagma, Sonbarsha\n ward no. : 08\n District : Saharsa\n Mob. No. : 6202627823\n Developer Of This Software\n");
    }
    else if((strcmp(s, y)) == 0 && r==27)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Barun Kumar\n Roll No  : 27\n Address  : Bihra, Majhoul\n ward no. : 06\n District : Saharsa\n Mob. No. : 9693554263\n");
    }
    else if((strcmp(s, z)) == 0 && r==1)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Suraj Kashyap\n Roll No  : 01\n Address  : Tiwari Tola\n ward no. : Not Found\n District : Saharsa\n Mob. No. : 9334429411\n");
    }
    else if((strcmp(s, A)) == 0 && r==12)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Shagoofi Perween\n Roll No  : 12\n Address  : Sitanabad\n ward no. : 07\n District : Saharsa\n");
    }
    else if((strcmp(s, B)) == 0 && r==44)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Kahkasha Perween\n Roll No  : 44\n Address  : Saharsa Basti\n ward no. : 31\n District : Saharsa\n");
    }
    else if((strcmp(s, C)) == 0 && r==10)
    {
        printf(" %cStudent details%c\n",3,3);
        for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
        printf(" Name     : Nuzhat Perween\n Roll No  : 10\n Address  : Saharsa Basti\n ward no. : 31\n District : Saharsa\n");
    }
    else
    {
        printf("\t\t\t\t\tNot Data found in DataBase of (B.C.A faculty 1st Sem 2021-2024 in R.M. COLLEGE, SAHARSA, BIHAR\n\n");
        printf("\t\t\t\t\t\t\t\t\t%cTry Again%c\n",1,1);
    }
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
     printf("\t\t\t\t\t\t\t\tDeveloped By This Software %c(Sagar Kumar)%c\n\t\t\t\t\t\t\tStudent of B.C.A 1st Sem 2021-2024 of R.M. College, Saharsa\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\t%cPress any key to go back menu%c",3,3);
    printf("\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    break;
    case 2:
    printf("\t\t\t\t\t\t\t\t\t%cFaculty Members%c\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n*Sri Ashish Kumar : (1 BCA 1) Fundamental Of Computers & Information Technology\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n*Sri Nabuil Islam : (1 BCA 2) Communicative English\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n*Sri Gopal Kumar  : (1 BCA 3) Programming Methodology & Programming With 'C'- Language\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n*Sri Pankaj Kumar : (1 BCA 4) Computer Practical (Windows, Word, Excel, Power Point & Programming in 'C'- Language)\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
     printf("\t\t\t\t\t\t\t\tDeveloped By This Software %c(Sagar Kumar)%c\n\t\t\t\t\t\t\tStudent of B.C.A 1st Sem 2021-2024 of R.M. College, Saharsa\n",3,3);
     for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\t%cPress any key to go back menu%c",3,3);
    printf("\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    break;
    case 3:
    printf("\t\t\t\t\t\t\t\t\t%cDeveloper Details%c\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf(" Name     : Sagar Kumar\n Distric  : Saharsa\n Block    : Sonbarsha\n Village  : Lagma\n ward.No. : 8\n Pin.No.  : 852129\n Mob.No.  : 6202627823, 9708092568\nEmail.id. : jhasagar700@gmail.com\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\tDeveloped By This Software %c(Sagar Kumar)%c\n\t\t\t\t\t\t\tStudent of B.C.A 1st Sem 2021-2024 of R.M. College, Saharsa\n",3,3);
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\t%cPress any key to go back menu%c",3,3);
    printf("\n");
    for(j=1;j<=172;j++)
    {
        printf("*");
    }
    break;
    case 4:
        printf("Thank You\n");
        printf("Press any key to exit...");
        getch();
        exit(0);
    default:
        printf("invalid choice");
    }
        getch();
    }
    }
}
