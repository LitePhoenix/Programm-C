const int desk_size = 10;

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

int main()
{   
    char a[desk_size][desk_size];
    int i, j;
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
      return 0;
}
