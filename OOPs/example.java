import java.util.*;
class  example
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int n,i,j,temp,min;
        n=in.nextInt();
        int sort[]= new int[n];
        System.out.println("Enter Elements");
        
        for(i=0;i<n;i++)
        {
            sort[i]=in.nextInt();
        }
        
        for(j=0;j<n;j++)
        {
            min=i;
            for(j=i;j<n;j++)
            {
                if(sort[j]<sort[min])
                {
                    min=j;
                }
            }
            temp= sort[i];
            sort[i]= sort[min];
            sort[min]= temp;
        }
        System.out.println("Sorted array");
        for(i=0;i<n;i++)
        {
            System.out.println(sort[i]);
        }
    }
}