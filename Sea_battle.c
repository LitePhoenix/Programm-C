const int desk_size = 10;

void print_matrix(char mat[desk_size][desk_size])
{
    int i,j;
    for (i = 0; i<desk_size; i++) 
    {
        for (j = 0; j<desk_size; j++)
        {    
            printf ("%6c", mat[i][j]);
        }
        printf("\n");
    }
}

void print_secret_matrix(int mat[desk_size][desk_size])
{
    int i,j;
    for (i = 0; i<desk_size; i++) 
    {
        for (j = 0; j<desk_size; j++)
        {    
            printf ("%6d", mat[i][j]);
        }
        printf("\n");
    }
}

char num_to_char(int num)
{
    if(num==0) return 'A';
    if(num==1) return 'B';
    if(num==2) return 'C';
    if(num==3) return 'D';
    if(num==4) return 'E';
    if(num==5) return 'F';
    if(num==6) return 'G';
    if(num==7) return 'H';
    if(num==8) return 'I';
    if(num==9) return 'J';
}

int char_to_num (char l)
{
    if(l=='A') return 0;
    if(l=='B') return 1;
    if(l=='C') return 2;
    if(l=='D') return 3;
    if(l=='E') return 4;
    if(l=='F') return 5;
    if(l=='G') return 6;
    if(l=='H') return 7;
    if(l=='I') return 8;
    if(l=='J') return 9;
}

int main()
{   
    char a[desk_size][desk_size], command, l,m;
    int i, j,t;
    printf ("   1  2  3  4  5  6  7  8  9  10\n");
    for (i = 0; i<desk_size; i++) 
  {
    printf ("%c", num_to_char(i));
    for (j = 0; j<desk_size; j++)
    {    
        a[i][j]='~';
        printf ("%3c", a[i][j]);
    }
    printf ("\n");
  }
  
  printf ("Введите куда стрелять: \n");
  scanf ("%c", &l);
  scanf ("%d", &j);
  i=char_to_num(l);
  j=j-1;
  a[i][j]='X';
  print_matrix(a);
   
   int b[desk_size][desk_size];
  printf ("   1  2  3  4  5  6  7  8  9  10\n");
    for (i = 0; i<desk_size; i++) 
  {
    printf ("%c", num_to_char(i));
    for (j = 0; j<desk_size; j++)
    {    
        b[i][j]=0;
    printf ("%3d", b[i][j]);
    }
    printf ("\n");
    
  }
    printf ("Введите место корабля: \n");
    scanf ("%c", &l);
    scanf ("%c", &l);
    scanf ("%d", &j);
    i=char_to_num(l);
    j=j-1;
    b[i][j] = 1;
    print_secret_matrix(b);
    return 0;
}
