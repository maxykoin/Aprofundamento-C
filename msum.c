#include <stdio.h>

int main(){
    int m1[3][3] = {{1,2,3}, {3,2,1}, {1,2,3}};
    int m2[3][3] = {{1,2,3}, {3,2,1}, {1,2,3}};
    int m3[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            m3[i][j] = (m1[i][j] + m2[i][j]);
        }
    }
    
    for(int k=0; k<3; k++){
        for(int l=0; l<3; l++){
            printf("%i", m3[k][l]);
        }
        printf("\n");
    }
    return 0;
}
