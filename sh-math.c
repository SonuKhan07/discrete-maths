#include<stdio.h>
#include<stdlib.h>

int set1[2][1000000];
int set2[2][1000000];
int intersection[1000000];

int main(){
	int n;
	scanf("%d",&n);
	
	while(n!= 0)
	{
		int m, i, x, num, y=0;
		int w, u, xx;
		
		for(i = 0; i < n; i++)
			set1[1][i]=0;
			
		for(x =0; x < n; x++)
		{
			scanf("%d",&num);
			set1[0][x]=num;
		}
		
		scanf("%d",&m);
		for(i = 0; i<m; i++)
			set2[1][i]=0;
	    
	    for(x=0;x<m;x++)
	    {
	    	scanf("%d",&num);
	    	set2[0][x]=num;
	    }
	    
	    for(x=0;x<n;x++)
	    {
	    	for(i=0;i<m;i++)
	    	{
	    		if((set1[1][x] == 0) && (set1[0][x] == set2[0][i]) && (set2[1][i] == 0))
	    		{
	    			intersection[y] = set2[0][i];
	    			y++;
	    			set2[1][i] =1;
	    			set1[1][x] = 1;
	    		}
	    	}
	    }
	    
	    for(x=0;x<y;++x)
	    {
	    	for(i=x+1;i<y;++i)
	    	{
	    		if(intersection[x]>intersection[i])
	    		{
	    			w = intersection[x];
	    			intersection[x] = intersection[i];
	    			intersection[i]= w;
	    		}
	    	}
	    } 
	    
	    for(x=0;x<y;x++)
	    {
	    	if(x==0)
	    		printf("%d",intersection[x]);
	    	else printf("%d",intersection[x]);
	    
	    }
	    
	    if(y==0)
	    {
	    	printf("empty");
	    }
	    printf("\n");
	    
	    scanf("%d",&n);
	    
	}
	return 0;
}























