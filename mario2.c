#import <stdio.h>
#import <cs50.h>

int main (void){

int answer;
    
   do{
       
   answer = get_int("Put an integer:");
    
   }
   while(answer<0);
   
   if(answer>8){
    answer = get_int("Put an integer:");   
   }
   
   printf("Height: %i\n", answer);
   
     for(int i=answer; i>0; i--){
      for(int j=i; j>1; j--){
          
       printf(" ");
       
      }
      
      for(int m=0; m<=(answer-i); m++){
        
         printf("#");
         
      }
      
      for(int l=0; l<2; l++){
          
          printf(" ");
      }
      for (int b=0; b<=(answer-i); b++){
          
          printf("#");
          
      }

       printf("\n");
       
      }
         

}