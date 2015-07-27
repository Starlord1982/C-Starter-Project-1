//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserv

#include <stdio.h>

int main() {
    
    int count;
    for (count =0; count < 100; ++count) {
        if (count % 3 == 0) {
            printf("FIZZ \n");
            
            if (count % 5 == 0) {
                printf("FIZZ BUZZ \n");
                
            }
        
        
        } else if (count % 5 == 0) {
            printf("BUZZ \n");
            
        } else {
            
            printf("%d \n", count);
        }
        
        
    }
}
