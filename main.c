//
//  main.c
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    
    printf("I have %d arguments\n",argc);
    int i,N;
    for(i=1;i<argc;i++){
        printf("arg %d: %s\n",i,argv[i]);
        
    }
    
    return 0;
}
