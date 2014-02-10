#include <stdio.h>                                                                                                       
#include <stdlib.h>                                                                                                      
                                                                                                                         
//array of messages                                                                                                      
                                                                                                                         
int main() {                                                                                                             
    const char *messagesForReal[] = {                                                                                    
        "You are a true C champ!",                                                                                       
        "Ohh...",                                                                                                        
        "What do you say",                                                                                               
        "Try to explain",                                                                                                
        "Okay",                                                                                                          
        "lets try again",                                                                                                
        "How are your coding skills?",                                                                                   
        "Good for you!",                                                                                                 
        "Nice :)"                                                                                                        
    };                                                                                                                   
                                                                                                                         
    //generates a randomly chosen string from messageForReal-> then waiting for input and then returns a random string   
                                                                                                                         
    const size_t messages_count = sizeof(messagesForReal) / sizeof(messagesForReal[0]);                                  
    char input[64];                                                                                                      
                                                                                                                         
     while (1) {                                                                                                         
        scanf("%63s", input);                                                                                            
        printf("Computer say:\n%s\n", messagesForReal[rand() % messages_count]);                                         
    }                                                                                                                    
                                                                                                                   
   return 0;                                                                                                             
}      
