#include <stdio.h>

int main(){
    int m1[3][3] = {{1,2,3}, {3,2,1}, {1,2,3}};
    int m3[3][3];
    int m4[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                m3[i][j] = m1[i][j];
            }
            
            if((i+j+2) == 4){
                m4[i][j] = m1[i][j];
            }
        }
    }

    for(int k=0; k<3; k++){
        for(int l=0; l<3; l++){
            printf("%i ", m3[k][l]);
        }
        printf("\n");
    }
    
    for(int m=0; m<3; m++){
        for(int n=0; n<3; n++){
            printf("%i ", m4[m][n]);
        }
        printf("\n");
    }
    return 0;
}
