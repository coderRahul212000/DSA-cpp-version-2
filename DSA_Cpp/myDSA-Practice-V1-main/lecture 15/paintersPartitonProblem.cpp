bool isPossibleSol(vector<int> boards, int k, int mid){
    int painterCnt = 1;
    int lenSum = 0;

    for(int i = 0; i < boards.size(); i++){
        if(lenSum+boards[i] <= mid){
            lenSum+=boards[i];
        }else{
            
           painterCnt++;
           if(painterCnt > k || boards[i]>mid){
               return false;
           }
           lenSum = boards[i];
           
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    for(int i = 0 ; i < boards.size(); i++){
        sum+=boards[i];

    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        // if(boards.size()<k){
        //    return -1;
        // }
        
        if(isPossibleSol(boards,k, mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;

}