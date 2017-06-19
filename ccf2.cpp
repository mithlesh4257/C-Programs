    #include<iostream>
    #include<ctime>
    #define li int
     
    using namespace std;
    void getResult(int L[],int K[],int N,int Q);
    void swap ( int* a, int* b );
    int partition (int arr[], int l, int h);
    void swap ( int* a, int* b )
     
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
     
     
    int partition (int arr[], int l, int h)
    {
        int x = arr[h];
        int i = (l - 1);
     
        for (int j = l; j <= h- 1; j++)
        {
            if (arr[j] <= x)
            {
                i++;
                swap (&arr[i], &arr[j]);
            }
        }
        swap (&arr[i + 1], &arr[h]);
        return (i + 1);
    }
     
     
    void quickSortIterative (int arr[], int l, int h)
    {
     
        int stack[ h - l + 1 ];
     
     
        int top = -1;
     
     
        stack[ ++top ] = l;
        stack[ ++top ] = h;
     
     
        while ( top >= 0 )
        {
     
            h = stack[ top-- ];
            l = stack[ top-- ];
     
     
            int p = partition( arr, l, h );
     
            
            if ( p-1 > l )
            {
                stack[ ++top ] = l;
                stack[ ++top ] = p - 1;
            }
     
     
            if ( p+1 < h )
            {
                stack[ ++top ] = p + 1;
                stack[ ++top ] = h;
            }
        }
    }
     
     
    int getNumber(int L[],int K,int N){
     int c=0;
     for(int i=0;i<N;i++){
      if(L[i] < K){
       L[i] = 0;
       L[i+1] = L[i+1]+1;
       c++;
     
      }
     }
     
     
     return N-c;
    }
    void getResult(int L[],int K[],int N,int Q){
        quickSortIterative( L, 0, N-1 );
        int q[Q];
        for(int i=0;i<Q;i++){
        q[i] = getNumber(L,K[i],N);
        cout<<q[i]<<endl;
        }    
    }
     
    int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
    if(T>=1 && T<<5){
    li N,Q;
    cin>>N;
    cin>>Q;
    if((N>=1 && N<=100000)&&(Q>=1 && Q<=100000)){
    li L[N],K[Q];
    for(int i=0;i<N;i++){
    cin>>L[i];
    }
    for(int i=0;i<Q;i++){
    cin>>K[i];
    }
    getResult(L,K,N,Q);
    }
    }
    }
    return 0;
    } 
