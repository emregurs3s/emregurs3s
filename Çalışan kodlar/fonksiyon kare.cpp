#include <stdio.h>
void kareCiz(int n) { 
 int i, j; 
 
 printf(" "); 
 for (i=0; i<n; i++) 
 printf("-"); 
 printf("\n"); 
 for (i=0; i<n; i++) { 
 printf("|"); 
 for (j=0; j<n; j++) 
 printf(" "); 
 printf("|\n"); 
 } 
 printf(" "); 
 for (i=0; i<n; i++) 
 printf("-"); 
 printf("\n"); 
} 
int main() { 
 int n = 3; 
 kareCiz(n); 
 
 printf("\n"); 
 
 n = 5; 
 kareCiz(n); 
 
 return 0; 
}
