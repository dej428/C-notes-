#include <stdio.h>

int main(){
// switch = a more efficient alternative to using many "else if" statments
// allows a value to be tested for equality against many cases 

    char grade; 

    printf("\nEnter a letter grade: "); 
    scanf("%c", &grade); 

    if(grade == 'A'){
        printf("perfect!\n" ); 
    }
    else if(grade == 'B'){
        printf("You did good.\n " ); 
    }
    else if(grade == 'C'){
        printf("You did okay\n" ); 
    }
    else if(grade == 'D'){
        printf("Redo." );
    } 
    else{
        printf("Not a valid grade" );
    }
// stacking else if's is not the best way to acheive our desired outcome
switch(grade){
    case 'A': 
        printf("perfect\n"); 
        break;  
    case 'B':
        printf("okay.\n"); 
        break;
    case 'C':
        printf("not great.");
        break;
    default:   
    printf("Please enter a valid grade");     
    
}


    return 0; 
}