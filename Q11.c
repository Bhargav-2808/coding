// the number is composite or not.

int comp(int n){


    for(int i=2; i<n ;i++)
    {
        if(n%i==0)
        {
            return n;
            break;
        }

    }
     return 0;
}


int main(){

    //int x=comp(1);
    //if(x==1)
    //{
      //  printf("composite num");
    //}
    //else{
      //  printf("not composite");
    //}

    for(int i=1;i<1000; i++)
    {
        int x = comp(i);
        if(x==0){
            printf("");
        }
        else{
            printf(" %d ",x);
        }
    }


}
