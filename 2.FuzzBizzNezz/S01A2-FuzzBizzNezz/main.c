#include <stdio.h>

int main(int argc, char* argv[]){
    

    int Fuzz, Bizz, Nezz;
    
    printf("What's the Fuzz number? ");
    scanf("%d", &Fuzz);
    
    printf("What's the Bizz number? ");
    scanf("%d", &Bizz);
    
    printf("What's the Nezz number? ");
    scanf("%d", &Nezz);
    
     printf("\n");
    
    for(int a = 1; a <= Nezz; a++)
    {
        
        if((a % Fuzz == 0) && (a % Bizz == 0))
            printf("FuzzBizz\n");
        
        else if(a % Fuzz == 0)
            printf("Fuzz\n");
        
        else if(a % Bizz == 0)
            printf("Bizz\n");
        
        else if((a % Fuzz != 0) && (a % Bizz != 0))
            printf("%d\n",a);
    }
    
    return 0;
}
