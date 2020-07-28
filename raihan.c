#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int ex;
struct info
{
    time_t t;
    char bname[20];
    char wname[30];
    float cost;
}i,i1;


int main()
{
    system("color f1");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
      time_t t;
        time(&i.t);
        printf("\n:::::::::TODAY::::::::::\n%s",ctime(&i.t));

    int pass=123;
    printf("\nEnter passoward For Log Into System:");
    scanf("%d",&pass);
    if(pass ==123)
    {
        printf("\nsuccessfully log in\n");
    }
    else
        {
            printf("\nwrong password\n");
        }

        while(pass!=123){
            printf("\nEnter password again\n");
        scanf("%d",&pass);
        if(pass==123)
    {
        printf("\nsuccessfully log in\n");
    }
    else
        {
            printf("wrong password\n");
        }
    }
    while (home()){}
    return 0;
}
int home()
{
system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
int h;
printf("\n\n  **PRESS[1]FOR CASH MEMO DATA ENTRY.\n\n");
printf("  **PRESS[2]FOR BOOK DATA ENTRY.\n\n");
printf("  **PRESS[0]FOR EXIT.\n\n");
 fflush(stdin);
    printf("\n  **WHAT IS YOUR CHOICE.? :==>");
    while(scanf("%d",&h))
    {
        if(h==1 || h==2 || h==0);
        {
            if(h==1)
            {
                home1();
                break;
            }
            if(h==2)
            {
                home2();
                break;
            }
            if(h==0)
            {
                ext();
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        fflush(stdin);
    }
return 0;
}
int home1()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    int c;
    printf("\n\n\t\t **PRESS[1]FOR SAVE CASH MEMO DATA.\n\n");
    printf("\t\t  **PRESS[2]FOR SHOW ALL CASH MEMO DATA.\n\n");
    printf("\t\t  **PRESS[3]FOR SEARCH CASH MEMO USING PHONE NUMBER.\n\n");
    printf("\t\t  **PRESS[4]FOR GO TO MAIN HOME.\n\n");
    printf("\t\t  **PRESS[0]FOR EXIT.\n\n");
    fflush(stdin);
    printf("\n  **WHAT IS YOUR CHOICE.? :==>");
    while(scanf("%d",&c))
    {
        if(c==1 || c==2 || c==3 || c==4 || c==0);
        {
             if(c==1)
            {
                save();
                break;
            }
            if(c==2)
            {
                show();
                break;
            }
            if(c==3)
            {
                search();
                break;
            }
             if(c==4)
            {
                home();
                break;
            }
             if(c==0)
            {
                ext();
                break;
            }
        }
       printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        fflush(stdin);
    }
    return 0;
}

int home2()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    int a;
    printf("\n\n\t\t  **PRESS[1]FOR ADD NEW BOOK DATA.\n\n");
     printf("\t\t  **PRESS[2]FOR SEE AVAILABLE BOOK IN STOCK.\n\n");
    printf("\t\t  **PRESS[3]FOR SEARCH BOOK IN STOCK.\n\n");
    printf("\t\t  **PRESS[4]FOR DELETE BOOK FROM STOCK.\n\n");
    printf("\t\t  **PRESS[5]FOR GO TO MAIN HOME.\n\n");
    printf("\t\t  **PRESS[0]FOR EXIT.\n\n");
    fflush(stdin);
    printf("\n  **WHAT IS YOUR CHOICE.? :==>");
    while(scanf("%d",&a))
    {
        (a==1 || a==2 || a==3 || a==4 || a==0);
        {
            if(a==1)
            {
                bookname();
                break;
            }
            if(a==2)
            {
                bookshow();
                ext1();
                break;
            }
            if(a==3)
            {
                search2();
                break;
            }
             if(a==4)
            {
                delet();
                break;
            }
            if(a==5)
            {
                home();
                break;
            }

            if(a==0)
            {
                ext();
                break;
            }
    }
     printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        fflush(stdin);
    }
    return 0;
}



int ext()
{
    system("cls");
    int ex;
    printf("\n  **DO YOU WANT TO EXIT.\n\n     PRESS[1] YES.\n\n     PRESS[2] NO.\n");
    printf("\n  **WHAT IS YOUR CHOICE.? :>");
    fflush(stdin);
    while(scanf("%d",&ex))
    {
        if(ex==1 || ex==2)
        {
            if(ex==1)
            {
                printf("\n  **THANKS FOR USING.\n");
                printf("\n  **PRESS ANY KEY TO CLOSE.\n");
                exit(EXIT_SUCCESS);
                break;
            }
            if(ex==2)
            {
                home();
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        fflush(stdin);
        }
return 0;
}

struct price
{
char medi_name[100];
float price;
int quantity;
float m_w_q;
};

struct price1
{
    char c_name[100];
    char p_no[50];
    char date[50];
    int i,n_f_M;
    float avg_price;
    struct price P[50];
}P1;

int search()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *fp2;
    fp2=fopen("record.txt","r");
    int tdc=0;
    while(fread(&P1, sizeof(P1), 1, fp2))
    {
        tdc=tdc+1;
    }
    search1(tdc);
    return 0;
}


int search1(int tdc)
{
    FILE *fp3;
    int flag=0;
    fp3=fopen("record.txt","r");
    char pn[20];
    printf("\n  **Enter Phone Number you want to search ==>");
    scanf("%s",&pn);
        while(fread(&P1, sizeof(P1), 1, fp3))
        {
        flag=flag+1;
        if(strcmp(pn,P1.p_no)==0)
        {
            printf("\n  Customer Name -- %s -- Phone Number -- %s",P1.c_name,P1.p_no);
        for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
         {
           printf("\n  BOOK--%d %s -- PER PIECE PRICE -- %.2f -- QUANTITY -- %d -- AVERAGE PRICE -- %.2f",P1.i,P1.P[P1.i].medi_name,P1.P[P1.i].price,P1.P[P1.i].quantity,P1.P[P1.i].m_w_q);
         }
           printf("\n  __________________________________________________________________________________");
           printf("\n                                                              TOTAL PRICE IS: %.2f\n",P1.avg_price);
            break;
        }
       if(tdc==flag)
        {
            printf("\n\t\t  [Not Matching]\n");
            break;
        }
        }
        fclose(fp3);
        searmore();
        return 0;

}

int bookname()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *bkdtl;
    bkdtl=fopen("record2.txt","a");
    printf("\t\tBook Name:-");
    scanf("%s",i.bname);
    printf("\t\tWriter Name:-");
    scanf("%s",i.wname);
    printf("\t\tBook cost:-");
    scanf("%f",&i.cost);
    fwrite(&i, sizeof(i), 1, bkdtl);
fclose(bkdtl);
printf("\n PRESS[1]FOR GO TO HOME\n\n PRESS[2]FOR ADD MORE BOOK DATA\n\n===>>");
    while(scanf("%d",&ex))
    {
        if(ex==1 || ex==2)
        {
            if(ex==1)
            {
               home2();
                break;
            }
            if(ex==2)
            {
                bookname();
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
  }
}

int bookshow()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *shbkdtl;
    shbkdtl=fopen("record2.txt","r");
      while(fread(&i, sizeof(i), 1, shbkdtl))
      {
         printf("Book Name:[%s]\nWriter Name:[%s]\ncost:[%.2f]\n\n",i.bname,i.wname,i.cost);
      }
      fclose(shbkdtl);
}


int search2()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *fp4;
    fp4=fopen("record2.txt","r");
    int tdc1=0;
    while(fread(&i, sizeof(i), 1, fp4))
    {
        tdc1=tdc1+1;
    }
    search3(tdc1);
    return 0;
}

int search3(int tdc1)
{
    FILE *fp5;
    int flag2=0;
    fp5=fopen("record2.txt","r");
    char bn[20];
    char wn[30];
    printf("\n  **SEARCH STOCK \n\n\tBook Name :===>>");
    scanf("%s",&bn);
    printf("\n\tWriter Name :===>>");
    scanf("%s",&wn);
        while(fread(&i, sizeof(i), 1, fp5))
        {
        flag2=flag2+1;
        if(strcmp(bn,i.bname)==0 && strcmp(wn,i.wname)==0)
        {
            printf("\n\n\t\t\t  |||||**Search Matching**|||||\n\n");
            printf("\n\n  \t\t\t[ %s ] Book is Available\n\n  \t\t\t[Writer Name: %s]\n\n  \t\t\t[Book Cost is: %.2f  tk]\n\n",i.bname,i.wname,i.cost);
            break;
        }
        if(tdc1==flag2)
        {
            printf("\n\t\t\t  ||||**BOOK IS NOT AVAILABLE**||||\n");
            break;
        }

        }
        fclose(fp5);
        searmore2();
        return 0;
}
int ext1()
{
    printf("\n\t  Do you want to continue??\n\n\t  Press [ 1 ] 'YES'\n\n\t  Press [ 2 ] 'NO'\n==>");
    while(scanf("%d",&ex))
    {
        if(ex==1 || ex==2)
        {
            if(ex==1)
            {
                home2();
                break;
            }

            if(ex==2)
            {
                 printf("\n  **THANKS FOR USING.\n");
                printf("\n  **PRESS ANY KEY TO CLOSE.\n");
                exit(EXIT_SUCCESS);
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
  }
}
int delet()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *fpdlt,*fpdlt1;
    struct info i,i1;
    int found=0;
    char bn[40];
    char wn[30];
    fpdlt=fopen("record2.txt","r");
    fpdlt1=fopen("Delete.txt","w");
    fflush(stdin);
    printf("\n\t\t  Enter Book Name You Want To Delete:");
    gets(bn);
    printf("\n\t\t  Writer Name:");
    gets(wn);
    while(1)
    {
        fread(&i1, sizeof(i1), 1, fpdlt);
        if(feof(fpdlt))
        {
            break;
        }
        if(strcmp(bn,i1.bname)==0 && strcmp(wn,i1.wname)==0)
        {
            found=1;
        }
        else
        {
            fwrite(&i1, sizeof(i1), 1, fpdlt1);
        }
    }
        fclose(fpdlt);
        fclose(fpdlt1);
        if(found==0)
        {
            printf("\n\t\t  {Sorry Book Not Found}\n\n");
        }
        else
        {
            fpdlt=fopen("record2.txt","w");
            fpdlt1=fopen("Delete.txt","r");
            while(1)
            {
                fread(&i1, sizeof(i1), 1, fpdlt1);
                if(feof(fpdlt1))
                {
                    break;
                }
                fwrite(&i1, sizeof(i1), 1, fpdlt);
            }
           printf("\n\t\t  {!Book Delete Successful!}\n\n");
        }
    fclose(fpdlt);
    fclose(fpdlt1);

    int n_bkdlt;
    fflush(stdin);
    printf("\n\t\t  ##PRESS[1]TO DELETE ANOTHER BOOK INFO");
    printf("\n\t\t  ##PRESS[2]TO BACK HOME PAGE");
    printf("\n\t\t  ##PRESS[0]TO EXIT");
    printf("\n\n\t\t  ##CHOOSE A OPTION :>:");
    while(scanf("%d",&n_bkdlt))
    {
        if(n_bkdlt==1 || n_bkdlt==2 || n_bkdlt==0)
        {
           if(n_bkdlt==1)
           {
             delet();
             break;
           }
           if(n_bkdlt==2)
           {
               home2();
               break;
           }
           if(n_bkdlt==0)
           {
               ext();
               break;
           }
        }
        printf("\n\t\t  ##INVALID INPUT :>:");
        fflush(stdin);
    }

    return 0;
}
int searmore()
{
    int add;
   printf("\n Do You Want TO Search More::\n");
   printf("\n PRESS[1]YES\n\n PRESS[2]NO\n\n===>>");
    while(scanf("%d",&add))
    {
        if(add==1 || add==2)
        {
            if(add==1)
            {
               search();
               break;
            }
            if(add==2)
            {
                home1();
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        ext1();
    return 0;
}
}
int searmore2()
{
    int add;
   printf("\n Do You Want TO Search More::\n");
   printf("\n PRESS[1]YES\n\n PRESS[2]NO\n\n===>>");
    while(scanf("%d",&add))
    {
        if(add==1 || add==2)
        {
            if(add==1)
            {
               search2();
               break;
            }
            if(add==2)
            {
                home2();
                break;
            }
        }
        printf("\n  **YOU PRESS A INVALID INPUT,TRY AGAIN:>");
        ext1();
    return 0;
}
}



int save()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    float avg_price1=0;
    P1.avg_price=avg_price1;
    FILE *fp;
    fp=fopen("record.txt","a");
    if(fp==NULL)
    {
       printf("ERROR");
       exit(1);
    }

    fflush(stdin);
    printf(" Enter Customer Name:");
    gets(P1.c_name);
    printf(" Enter Phone Number:");
    gets(P1.p_no);
    printf(" Enter Date:");
    gets(P1.date);
    printf("How Many Types Of Book Want To Sell:>:");
    scanf("%d",&P1.n_f_M);
    for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
    {
     fflush(stdin);
     printf("\n Book Name%d :>:",P1.i);
     gets(P1.P[P1.i].medi_name);
     printf("\n %s Per Piece Price:>:",P1.P[P1.i].medi_name);
     scanf("%f",&P1.P[P1.i].price);
     printf("\n %s Quantity:>:",P1.P[P1.i].medi_name);
     scanf("%d",&P1.P[P1.i].quantity);
    }
    for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
    {
      P1.P[P1.i].m_w_q = P1.P[P1.i].price * P1.P[P1.i].quantity;
    }

    for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
    {
     P1.avg_price = P1.avg_price + P1.P[P1.i].m_w_q;
    }

    printf("\n  Customer Name -- %s -- Phone Number -- %s",P1.c_name,P1.p_no);
        for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
         {
           printf("\n  BOOK--%d %s -- PER PIECE PRICE -- %.2f -- QUANTITY -- %d -- AVERAGE PRICE -- %.2f",P1.i,P1.P[P1.i].medi_name,P1.P[P1.i].price,P1.P[P1.i].quantity,P1.P[P1.i].m_w_q);
         }
           printf("\n  __________________________________________________________________________________");
           printf("\n                                                              TOTAL PRICE IS: %.2f\n",P1.avg_price);
    fwrite(&P1, sizeof(P1), 1, fp);
    printf("\n  Customer Data Saved In File!!!");
    fclose(fp);

    int b_home;
    printf("\n  ##PRESS[1]TO  ANOTHER SELL");
    printf("\n  ##PRESS[2]TO BACK HOME");
    printf("\n  ##PRESS[0]TO EXIT");
    printf("\n\n  ##WHAT IS YOUE CHOICE? :>:");
    fflush(stdin);
    while(scanf("%d",&b_home))
    {
        if(b_home==1 || b_home==2 || b_home==0)
        {
         if(b_home==1)
         {
             save();
             break;
         }
         if(b_home==2)
         {
             home1();
             break;
         }
         if(b_home==0)
         {
             ext();
             break;
         }
        }
        printf("\n\n  ##INVALID INPUT :>:");
        fflush(stdin);
    }

    return 0;
}

int show()
{
    system("cls");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::");
    printf("\n\t\t\t\t::::::::::DATA ENTRY SYSTEM OF BOOK SHOP::::::::::");
    printf("\n\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\n  [All Customer Info]\n");
    FILE *fptr1;
    fptr1=fopen("record.txt","r");


    while(fread(&P1, sizeof(P1), 1, fptr1))
    {
        printf("\n  Customer Name -- %s -- Phone Number -- %s",P1.c_name,P1.p_no);
        for(P1.i=1;P1.i<=P1.n_f_M;P1.i++)
         {
           printf("\n  BOOK--%d %s -- PER PIECE PRICE -- %.2f -- QUANTITY -- %d -- AVERAGE PRICE -- %.2f",P1.i,P1.P[P1.i].medi_name,P1.P[P1.i].price,P1.P[P1.i].quantity,P1.P[P1.i].m_w_q);
         }
           printf("\n  __________________________________________________________________________________");
           printf("\n                                                              TOTAL PRICE IS: %.2f\n",P1.avg_price);
    }
     fclose(fptr1);

     int b_home;
    printf("\n  ##PRESS[1]TO BACK HOME");
    printf("\n  ##PRESS[0]TO EXIT");
    printf("\n\n  ##WHAT IS YOUE CHOICE? :>:");
    fflush(stdin);
    while(scanf("%d",&b_home))
    {
        if(b_home==1 || b_home==0)
        {
         if(b_home==1)
         {
             home1();
             break;
         }
         if(b_home==0)
         {
             ext();
             break;
         }
        }
        printf("\n\n  ##INVALID INPUT :>:");
        fflush(stdin);
    }


    return 0;
}

