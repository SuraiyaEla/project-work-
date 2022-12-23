  total_amount = b[count].cost * total_seat;

  printf("\t\t\t\t\t\t\t----------------THEATER BOOKING TICKET--------\n");
  printf("\t\t\t\t\t\t\t**********************************************\n");
  printf("\n\n\n\t\t\t\tName:%s                     \t\t\t\t\Movie Name:%s\n",name,b[count].name);
  printf("\n\n\n\t\t\t\tMobile NUmber:%d                  \t\t\t\t\Date :%s\n",mobile,b[count].date);
  printf("\n\n\n\t\t\t\t                     Time:%s\n",b[count].time);
  printf("\n\n\n\t\t\t\t                     Total Seats :%d\n",total_seat);
  printf("\n\n\n\t\t\t\t                     Cost Per Ticket : %d TK",b[count].cost);
  printf("\n\n\n\t\t\t\t                     Total Amount : %d TK",total_amount);
  printf("\n\n\n\t\t\t\t                     Seat Number : ");
  for (i=1;i<=total_seat;i++)
  {
    printf("%d",seat[i-1]);
  }
  printf("\n");

  printf("\t\t\t\t\t\t\t           PAYMENT                          \n");
  printf("\t\t\t\t\t\t\t*****************SHONALI BANK***************************\n");
  printf("\n Merchant Number : 01234567890\n");
  printf("\nYour Number:%d\n",mobile);
  printf("\n Total Amount:%d TK\n",total_amount);
  printf("\n\n\n\t\t\t\t**************Booking Confirmed********** \n");
  printf("\n\n\n\t\t\t\t**************ENJOY YOUR MOVIE********** \n");

  ups=fopen("oldTransaction.txt","a");
  if (ups==NULL)
  {
    printf("File not Found");
  }
  else
  {
    fprintf(ufp,"%s %d %d %d %s %d %s %s\n",name,number,mobile,total_seat,total_amount,b[count].name,b[count].time,b[count].cost)
    printf("\n Record insert Successful to the old record file");
  }
    printf("\n");
   fclose(ufp);
   fclose(fp);
   }
