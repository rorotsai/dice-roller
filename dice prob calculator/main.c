/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int l,m,n,o,p,q,r,s,t,u,v,y;
    int all[1000];

    printf("enter the ratio of the number 2\n");
    scanf("%d",&l);
    for(int x=0;x<l;x++){
        printf("all[%d] = 2\n",x);
        all[x] = 2 ;
    }//done

    printf("enter the ratio of the number 3\n");
    scanf("%d",&m);
    for(int x=0;x<m;x++){
        printf("all[%d] = 3\n",x+l);
        all[l+x] = 3 ;
    }//done

    printf("enter the ratio of the number 4\n");
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        printf("all[%d] = 3\n",x+m+l);
        all[x+m+l] = 4 ;
    }//done

    printf("enter the ratio of the number 5\n");
    scanf("%d",&o);
    for(int x=0;x<o;x++){
        printf("all[%d] = 5\n",n+x+m+l);
        all[n+x+m+l] = 5 ;
    }//done

    printf("enter the ratio of the number 6\n");
    scanf("%d",&p);
    for(int x=0;x<p;x++){
        printf("all[%d] = 6\n",o+n+x+m+l);
        all[o+n+x+m+l] = 6 ;
    }//done

    printf("enter the ratio of the number 7\n");
    scanf("%d",&q);
    for(int x=0;x<q;x++){
        printf("all[%d] = 7\n",p+o+n+x+m+l);
        all[p+o+n+x+m+l] = 7 ;
    }//done
    printf("enter the ratio of the number 8\n");
    scanf("%d",&r);
    for(int x=0;x<r;x++){
        printf("all[%d] = 8\n",q+p+o+n+x+m+l);
        all[q+p+o+n+x+m+l] = 8 ;
    }//done
    printf("enter the ratio of the number 9\n");
    scanf("%d",&s);
    for(int x=0;x<s;x++){
        printf("all[%d] = 9\n",r+q+p+o+n+x+m+l);
        all[r+q+p+o+n+x+m+l] = 9 ;
    }//done

    printf("enter the ratio of the number 10\n");
    scanf("%d",&t);
    for(int x=0;x<t;x++){
        printf("all[%d] = 10\n",s+r+q+p+o+n+x+m+l);
        all[s+r+q+p+o+n+x+m+l] = 10 ;
    }//done

    printf("enter the ratio of the number 11\n");
    scanf("%d",&u);
    for(int x=0;x<u;x++){
        printf("all[%d] = 11\n",t+s+r+q+p+o+n+x+m+l);
        all[t+s+r+q+p+o+n+x+m+l] = 11 ;
    }//done

    printf("enter the ratio of the number 12\n");
    scanf("%d",&v);
    for(int x=0;x<v;x++){
        printf("all[%d] = 12\n",u+t+s+r+q+p+o+n+x+m+l);
        all[u+t+s+r+q+p+o+n+x+m+l] = 12 ;
    }
    for(int x = 0; x<v+u+t+s+r+q+p+o+n+m+l;x++){
        printf("%d\n",all[x]);
    }
    while(1){
        printf("Enter 1 to roll the dices\n");
        scanf("%d",&y);
        for(int c= 0;c<500000000;c++) c+=1;
        if(y == 1){
            srand( time(NULL) );
            int z = rand();
            int a;
            a = z%(v+u+t+s+r+q+p+o+n+m+l);
            printf("%d\n", all[a]);

        }
        else break;
    }
    return 0;
}
