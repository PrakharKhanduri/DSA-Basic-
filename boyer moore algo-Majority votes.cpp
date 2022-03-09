int majorityElement(int a[], int size)
    {
        
       //Boyer-Moore voting algo.
       int votes=1;
       int max_idx=0;
       int count=0;//For final check
       for(int i=1;i<size;i++)
       {
           if(a[i]==a[max_idx])
                votes++;
           else
                votes--;
           if(votes==0)
           {
               max_idx=i;
               votes=1;
           }
       }
        for(int i=0;i<size;i++)
            if(a[i]==a[max_idx])
                count++;
        if(count>size/2)
            return a[max_idx];
        else
            return -1;
    }
