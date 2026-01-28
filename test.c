# include <stdio.h>
void print_0_10()
{
    for (int i=0; i<102; i++)
    {
    printf ("%d\n", i*2+1+100);
    }
}

int main(){
    print_0_10();
}