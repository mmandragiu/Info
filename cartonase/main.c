#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int n,x,y,prevy,lmax=0,v[500],nr=0,l=0,c,cer1=0,i;
    fin=fopen("cartonase.in","r");
    fscanf(fin,"%d%d",&c,&n);
    for(i=0;i<n;i++)
    {
        fscanf(fin,"%d%d",&x,&y);
        if(i>0)
        {
            if(x==prevy)
                cer1++;
        }
        if(i%2==0)
            v[i]=y;
        else
            v[i]=x;
        prevy=y;
    }
    fout=fopen("cartonase.out","w");
    if(c==1)
        fprintf(fout,"%d",&cer1);
    else{
        for(i=0;i<n;i++)
        {
            while(v[i]==v[i+1])
                l++,i++;
            if(l>lmax)
            {
                lmax=l;
                nr=1;
            }
            else
            {
                if(l==lmax)
                    nr++;
            }
        }
        if(c==2)
            fprintf(fout,"%d",&lmax);
        else
            fprintf(fout,"%d",&nr);
    }
    return 0;
}
