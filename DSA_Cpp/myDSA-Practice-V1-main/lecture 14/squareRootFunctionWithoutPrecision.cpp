int floorSqrt(int n)
{
    // Write your code here.

    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    

    while(s <= e){

        long long int product = mid * mid;


        if( product == n){
            return mid;
        }

        else if(product < n){
            ans = mid;
            s = mid + 1;
            
        }else{

            e = mid -1;
        }
        mid = s + (e-s)/2;
        
    }

    return ans;
}
