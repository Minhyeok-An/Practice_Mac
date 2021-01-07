#include <stdio.h>
int main(){
    int m, n, t, mea_n, in, mea_in, cnt_1, cnt, cnt_sav=0, cnt_l=1,i,j;
    scanf("%d", &m);
    
    for(i=1;i<=m;i++)
    {
        scanf("%d%d", &n, &t);
        mea_n=0;
        for(j=1;j<=n;j++)
        {if((n%j)==0) mea_n++;}
        cnt_1=1;cnt=0;
        while(1)
        {
            scanf("%d", &in);
            if(in<=0) break;
            mea_in = 0;
            for(j=1;j<=in;j++)
            {if((in%j)==0) mea_in++;}
            
            if(mea_in % t == 0 && cnt_1 == 1)
            {
                printf("%d ", in);
                cnt_1--;
                cnt++;
            }else if(mea_n==mea_in)
            {printf("%d ", in);
                cnt++;
            }
        }
        if(cnt==0) printf("none");
        printf("\n");
        if(cnt>cnt_sav){
            cnt_sav = cnt;
            cnt_l = i;
        }
    }
    printf("%d %d\n", cnt_l, cnt_sav);
}
