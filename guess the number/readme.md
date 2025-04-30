# guess the number    
 this is guess the number  
 it is noting but guess the number between 0 to n  
  ```c
  #include <stdio.h>

int main()
 {
    int number = 5; 
    int guess;

    printf("Guess the number (between 1 and 10): ");
    scanf("%d", &guess);

    if (guess == number)
     {
        printf("You guess is correct\n");
    }
     else 
    {
        printf("you guess is wrong\n");
    }
 return 0;
}
```
      
      example:    
      10 attempts are max,i taken  
      the game will end when 10 atempts will completed       
      then i won the game    
      when i not guess the number i will fali the game  
      then i loss the game    
     **this a guess the number program**  
        

