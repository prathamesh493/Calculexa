#include <iostream>
using namespace std;
double check1(int i[],int n,int a);
int main() {
	// your code goes here
	int t,n,i[10];
	int c=0,a;
	cout<<"enter t";
    cin>>t;
    
	while(t>0)
	{
	    int m=0;
	    int check=0;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>i[j];
	    }
	    if(n%2!=0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        for(int l=0;l<n;l++)
	        {
	            a=i[l];
	            m=m+check1(i,n,a);
	        }
	       if(m==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}

double check1(int i[],int n,int a)
{
    int count=0;
        for(int k=0;k<n;k++)
        {
            if(a==i[k])
            {
                count=count+1;
            }
        }
    if(count%2!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}