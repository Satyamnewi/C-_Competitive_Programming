// Merge Sort  ---- ERROR
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
void merge(int a[],int l,int u,int mid)
{
    int lf_sz=mid-l+1;
    int rt_sz=u-mid;
    int left[lf_sz];
    int rig[rt_sz];
    
    for(int i=0;i<lf_sz;i++)
        left[i]=a[l+i];
    
    for(int i=0;i<rt_sz;i++)
        rig[i]=a[mid+1+i];

    int i=0,j=0;
    int k=l;
    while(i<lf_sz&&j<rt_sz)
    {
        if(left[i]<=rig[j])
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=rig[j];
            j++;
        }
        k++;
    }
    while(i<lf_sz)
        a[k++]=left[i++];

    while(j<rt_sz)
        a[k++]=rig[j++];
}
void merge_sort(int a[],int l,int u)
{
    if(l>u)
    return;
    int mid=(l+u)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,u);
    merge(a,l,u,mid);
}
int main()
{
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> a[i];
    merge_sort(a,0,sizeof(a)/sizeof(a[0])-1);
    for(int i =0; i<sizeof(a)/sizeof(a[0]);i++)  
        cout << a[i] << " ";  
    return 0;
}