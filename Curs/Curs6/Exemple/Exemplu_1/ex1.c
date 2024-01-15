#include <stdio.h>
#define N 20
int main() {
    int n,i, nr_par = 0;
    int vect[N];

    do {
        printf("\n Introduceti numarul de el: ");
        scanf("%d", &n);
    } while (n<=0 || n>N);
    for(i=0; i<n; i++)
    {
        printf("vect[%d]=", i);
        scanf("%d", &vect[i]);
    }

    printf("Elementele pare de pe pozititiile impare sunt: \n");
    for(i=1; i<N; i +=2)
        if(vect[i] % 2 == 0)
        {
            printf("\t %d", vect[i]);
            nr_par++;
        }
    printf("\n Nr de el de pe pozitii impare este: %d\n", nr_par);
    return 0;
}
