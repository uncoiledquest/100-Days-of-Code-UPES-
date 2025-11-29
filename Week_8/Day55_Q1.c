//

#include <stdio.h>
int main(){
    int n,i,j,a[200],cnt,maxCount=0,maj=-1;
    printf("Enter number of terms in list: ");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%i",&a[i]);
    }
    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i])cnt++;
        }
        if(cnt>maxCount){
            maxCount=cnt;
            maj=a[i];
        }
    }

    if(maxCount>n/2){
        printf("%i\n",maj);
        printf("Explanation:\n");
        printf("Size = %i, Count of %i = %i → %i > %i. Thus, %i is the majority element.",
               n,maj,maxCount,maxCount,n/2,maj);
    } else {
        printf("-1\n");
        printf("Explanation:\n");
        printf("Size = %i, Count of %i = %i → %i is not strictly greater than %i. Hence, no majority element exists.",
               n,maj,maxCount,maxCount,n/2);
    }
}
