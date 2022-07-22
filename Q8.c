//print list of palindrom num


int pali(int);
int temp;
int main(){
    for(int i=1;i<=1000;i++)
    {
        pali(i);
    }
}

int pali(int n){
    int sum=0;
    temp=n;
    while(temp>0){

        int rem = temp%10;

        sum=sum*10 + rem;

        temp=temp/10;
         if(sum==n){
        printf(" %d ",n);
    }

    }

    return 0;

}
