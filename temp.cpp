/* printing shortest common supersequence */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;

string shortestCommonSuperSequence(int n , int m , string str1 , string str2){

	for(int i=0 ; i<=n ; i++){
		dp[i][0] = 0;
	}

	for(int j=0 ; j<=m ; j++){
		dp[0][j] = 0;
	}

	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(str1[i-1] == str2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}

	int i = n;
	int j = m;

	string res ;

	while(i > 0 && j > 0){
		if(str1[i-1] == str2[j-1]){
			res.push_back(str1[i-1]);
			i--;
			j--;
		}
		else{
			if(dp[i-1][j] > dp[i][j-1]){
				res.push_back(str1[i-1]);
				i--;
			}
			else{
				res.push_back(str2[j-1]);
				j--;
			}
		}
	}

	while (i > 0)
        {
            res+=str1[i-1];
            i--;
        }

        while (j > 0)
        {
            res+=str2[j-1];
            j--;
        }
	reverse(res.begin() , res.end());

	return res;
}

int main(){
	string str1;
	cin>>str1;

	int n = str1.length();

	string str2;
	cin>>str2;

	int m = str2.length();

	dp.resize(n+1 , vector<int>(m+1, -1));


	cout<<shortestCommonSuperSequence( n , m , str1 , str2);

}









































/* Minimum deletion to make a string palindrome */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int longestPalindromicSubsequence(int n , int m , string str1 ,  string str2){

// 	if(n==0 || m==0){
// 		return 0;
// 	}

// 	if(dp[n][m] != -1){
// 		return dp[n][m];
// 	}

// 	if(str1[n-1]==str2[m-1]){
// 		dp[n][m] = 1 + longestPalindromicSubsequence(n-1 , m-1 , str1 , str2);
// 	}
// 	else{
// 		dp[n][m] = max(longestPalindromicSubsequence(n-1 , m , str1 , str2) ,longestPalindromicSubsequence(n , m-1 , str1 , str2) );
// 	}

// 	return dp[n][m];

// }

// int main(){

// 	int n;
// 	cin>>n;

// 	string str1;
// 	cin>>str1;

// 	string str2 = str1;

// 	reverse(str2.begin() , str2.end());

// 	int m = n;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<<n - longestPalindromicSubsequence(n , m , str1 , str2);

// }


































// /* Longest Palindromic Subsequence */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int longestPalindromicSubsequence(int n , int m , string str1 ,  string str2){

// 	if(n==0 || m==0){
// 		return 0;
// 	}

// 	if(dp[n][m] != -1){
// 		return dp[n][m];
// 	}

// 	if(str1[n-1]==str2[m-1]){
// 		dp[n][m] = 1 + longestPalindromicSubsequence(n-1 , m-1 , str1 , str2);
// 	}
// 	else{
// 		dp[n][m] = max(longestPalindromicSubsequence(n-1 , m , str1 , str2) ,longestPalindromicSubsequence(n , m-1 , str1 , str2) );
// 	}

// 	return dp[n][m];

// }

// int main(){

// 	string str1;
// 	cin>>str1;

// 	int n = str1.length();

// 	string str2 = str1;

// 	reverse(str2.begin() , str2.end());

// 	int m = n;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<<longestPalindromicSubsequence(n , m , str1 , str2);

// }




























/* minimum-number-of-deletions-and-insertions */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int minOperation(int n , int m , string str1 , string str2){

// 	for(int i=0 ; i<=n ; i++){
// 		dp[i][0] = 0;
// 	}

// 	for(int j=1 ; j<=m ; j++){
// 		dp[0][j] = 0;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=m ; j++){
// 			if(str1[i-1] == str2[j-1]){
// 				dp[i][j] = 1 + dp[i-1][j-1];
// 			}
// 			else{
// 				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
// 			}
// 		}
// 	}

// 	return dp[n][m];
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	int m;
// 	cin>>m;

// 	string str1;
// 	cin>>str1;

// 	string str2;
// 	cin>>str2;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<< n + m - 2 * minOperation(n ,  m  , str1 , str2)<<endl;

// }


































/* shortest Common Supersequence */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int LCS(int n , int m , string str1 , string str2){

// 	for(int i=0 ; i<=n ; i++){
// 		dp[i][0] = 0;
// 	}

// 	for(int j=0 ; j<=m ; j++){
// 		dp[0][j] = 0;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=m ; j++){
// 			if(str1[i-1] == str2[j-1]){
// 				dp[i][j] = 1 + dp[i-1][j-1];
// 			}
// 			else{
// 				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
// 			}
// 		}
// 	}

// 	return dp[n][m];

// }	

// int main(){
// 	int n;
// 	cin>>n;

// 	int m;
// 	cin>>m;

// 	string str1;
// 	cin>>str1;

// 	string str2;
// 	cin>>str2;

// 	dp.resize(n+1, vector<int>(m+1 , -1));

// 	cout<<n + m - LCS(n , m , str1 , str2);

// 	// cout<< n+m - val<<endl;

// }





























// #include <bits/stdc++.h>
// using namespace std;


// vector<vector<int>>dp;

// string printLCS(int n , int m , string str1 , string str2){

// 	for(int i=0 ; i<= n ; i++){
// 		dp[i][0] = 0 ;
// 	}

// 	for(int j=0 ; j<=m ; j++){
// 		dp[0][j] = 0 ;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=m ; j++){
// 			if(str1[i] == str2[j]){
// 				dp[i][j] = 1 + dp[i-1][j-1];
// 			}
// 			else{
// 				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
// 			}
// 		}
// 	}

// 	string res;

// 	int i = n , j = m ;

// 	while(i>0 || j>0){
// 		if(str1[i-1]==str2[j-1]){
// 			res += str1[i-1];
// 			i--;
// 			j--;
// 		}
// 		else{
// 			if(dp[i-1][j] > dp[i][j-1]){
// 				i--;
// 			}
// 			else{
// 				j--;
// 			}
// 		}
// 	}

// 	reverse(res.begin() , res.end());

// 	return res;

// }

// int main(){

// 	int n;
// 	cin>>n;

// 	int m;
// 	cin>>m;

// 	string str1;
// 	cin>>str1;

// 	string str2;
// 	cin>>str2;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<<printLCS(n , m , str1 , str2)<<endl;

// }
































/* longest commong substring */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int longestCommonSubsequence(int n , int m , string &str1 , string &str2){
	
// 	for(int i=0 ; i<=n ; i++){
// 		dp[i][0] = 0;
// 	}

// 	for(int j=0 ; j<=m ; j++){
// 		dp[0][j] = 0;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=m ; j++){
// 			if(str1[i] == str2[j]){
// 				dp[i][j] = 1 + dp[i-1][j-1];
// 			}
// 			else{
// 				dp[i][j] = 0;
// 			}
// 		}
// 	}

// 	int ans = INT_MIN;

// 	for(int i=0 ; i<=n ; i++){
// 		for(int j=0 ; j<=m ; j++){
// 			ans = max(ans,dp[i][j]);
// 		}
// 	}

// 	return ans;

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	int m;
// 	cin>>m;

// 	string str1;
// 	cin>>str1;

// 	string str2;
// 	cin>>str2;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<<longestCommonSubsequence(n , m , str1 , str2);

// }






























/* Longest Common Subsequence */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int longestCommonSubsequence(int n , int m , string &str1 , string &str2){
	
// 	for(int i=0 ; i<=n ; i++){
// 		dp[i][0] = 0;
// 	}

// 	for(int j=0 ; j<=m ; j++){
// 		dp[0][j] = 0;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=m ; j++){
// 			if(str1[i] == str2[j]){
// 				dp[i][j] = 1 + dp[i-1][j-1];
// 			}
// 			else{
// 				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
// 			}
// 		}
// 	}

// 	return dp[n][m];

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	int m;
// 	cin>>m;

// 	string str1;
// 	cin>>str1;

// 	string str2;
// 	cin>>str2;

// 	dp.resize(n+1 , vector<int>(m+1 , -1));

// 	cout<<longestCommonSubsequence(n , m , str1 , str2);

// }

































/* coin change - 2 */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int coinChange(int n , vector<int>&arr , int sum){

// 	if(sum==0){
// 		return 1;
// 	}

// 	if(n==0){
// 		return 0;
// 	}

// 	if(arr[n-1]<=sum){
// 		return min(1 + coinChange(n , arr , sum - arr[n-1]) , 1 + coinChange(n-1 , arr , sum));
// 	}
// 	else{
// 		return 1 + coinChange(n-1 , arr ,sum);
// 	}
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	vector<int>arr(n);
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 	}

// 	int sum;
// 	cin>>sum;

// 	cout<<coinChange(n , arr , sum);

// }

































// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int coinChange(int n , vector<int>&coins , int sum){

// 	for(int i=0 ; i<=n ; i++){
// 		dp[i][0] = 1;
// 	}

// 	for(int j=0 ; j<=sum ; j++){
// 		dp[0][j] = 0 ;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=sum ; j++){
// 			if(coins[i-1] <= j ){
// 				dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
// 			}
// 			else{
// 				dp[i][j] = dp[i-1][j];
// 			}
// 		}
// 	}

// 	return dp[n][sum];
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	vector<int>coins(n);
// 	for(int i=0 ; i<n ; i++){
// 		cin>>coins[i];
// 	}

// 	int sum;
// 	cin>>sum;

// 	dp.resize(n+1 , vector<int>(sum+1 , -1));

// 	cout<<coinChange(n , coins , sum);

// }






























/* Rod Cutting Problem */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int rodCutting(int n , int w ,  vector<int>&rod , vector<int>&arr){
// 	if(n==0){
// 		return 0;
// 	}

// 	if(w==0){
// 		return 0;
// 	}

// 	if(dp[n][w] != -1){
// 		return dp[n][w];
// 	}

// 	if(n <= w){
// 		dp[n][w] = max( (rod[n-1] + rodCutting(n , w-arr[n-1] , rod , arr))  ,  rodCutting(n-1 , w , rod , arr) );
// 	}
// 	else{
// 		dp[n][w] = rodCutting(n-1 , w , rod , arr);
// 	}

// 	return dp[n][w];
// }

// int main(){
// 	int n;
// 	cin>>n;

// 	int w = n;

// 	vector<int>rod(n);
// 	for(int i=0 ; i<n ; i++){
// 		cin>>rod[i];
// 	}

// 	vector<int>arr(n);

// 	for(int i=0 ; i<n ; i++){
// 		arr[i] = i+1;
// 	}

// 	dp.resize(n+1 , vector<int>(w+1 , -1));

// 	cout<<rodCutting(n , w , rod , arr);
// }





























// /* Target Sum */

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int targetSum(int n , vector<int>&arr , int subset){

// 	if(subset==0){
// 		return 1;
// 	}

// 	if(n==0){
// 		return 0;
// 	}

// 	if(dp[n][subset] != -1){
// 		return dp[n][subset];
// 	}

// 	if(arr[n-1] <= subset){
// 		dp[n][subset] = targetSum(n-1 , arr , subset-arr[n-1]) + targetSum(n-1 , arr , subset);
// 	}
// 	else{
// 		dp[n][subset] = targetSum(n-1 , arr , subset);
// 	}

// 	return dp[n][subset];
// }

// int main(){

// 	int n;
// 	cin>>n;

// 	vector<int>arr(n);
// 	int sum = 0;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 		sum+=arr[i];
// 	}

// 	int target = 3;

// 	int subset = sum - target;

// 	dp.resize(n+1 , vector<int>(subset/2 + 1 , -1));

// 	if(subset & 1){
// 		cout<<0<<endl;
// 	}
// 	else{
// 		cout<<targetSum( n , arr , subset/2);
// 	}

// }






















/* number of subset with given difference */
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int subsetWithDiff(int n , vector<int>&arr , int subset){
// 	if(subset==0){
// 		return 1;
// 	}

// 	if(n==0){
// 		return 0;
// 	}

// 	if(dp[n][subset] != -1){
// 		return dp[n][subset];
// 	}

// 	if(arr[n-1] <= subset){
// 		dp[n][subset] = subsetWithDiff(n-1 , arr , subset-arr[n-1]) + subsetWithDiff(n-1 , arr , subset);
// 	}
// 	else{
// 		dp[n][subset] = subsetWithDiff(n-1 , arr , subset);
// 	}

// 	return dp[n][subset];
// }

// int main(){
// 	int n ;
// 	cin>>n ;

// 	vector<int>arr(n);

// 	int sum = 0;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 		sum+=arr[i];
// 	}

// 	int d;
// 	cin>>d;

// 	int subset = (sum - d) / 2;

// 	dp.resize(n+1 , vector<int>(subset+1 , -1));

// 	if ((sum - d) < 0 || (sum - d) % 2 != 0) {
//         cout << 0 << endl; 
//         return 0;
//     }
// 	else{
// 		cout<<subsetWithDiff(n  , arr , (sum-d)/2);
// 	}

// }






























/* minimum sum partition */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// void minimumSumPartition(int n , vector<int>&arr , int sum){

// 	for(int i=0; i<=n ; i++){
// 		dp[i][0]= 1;
// 	}

// 	for(int j=1 ; j<=sum ; j++){
// 		dp[0][j] = 0;
// 	}

// 	for(int i=1 ; i<=n ; i++){
// 		for(int j=1 ; j<=sum ; j++){
// 			if(arr[i-1]<=j){
// 				dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
// 			}
// 			else{
// 				dp[i][j] = dp[i-1][j];
// 			}
// 		}
// 	}

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	vector<int>arr(n);

// 	int sum = 0;

// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 		sum+=arr[i];
// 	}

// 	dp.resize(n+1 , vector<int>(sum+1 , -1));

// 	minimumSumPartition(n , arr ,sum);

// 	int ans = INT_MAX;

// 	for(int j=sum/2 ; j>=0 ; j--){
// 		ans = min(ans , sum-2*j);
// 	}

// 	cout<<ans<<endl;

// }





























// /* count subset with the given sum */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int totalSubsetSum(int n , vector<int>&arr , int sum){

// 	if(sum==0){
// 		return 1;
// 	}

// 	if(n==0){
// 		return 0;
// 	}

// 	if(dp[n][sum]!=-1){
// 		return dp[n][sum];
// 	}

// 	if(arr[n-1] <= sum){
// 		dp[n][sum] = totalSubsetSum(n-1 , arr , sum-arr[n-1]) + totalSubsetSum(n-1 , arr , sum);
// 	}
// 	else{
// 		dp[n][sum] = totalSubsetSum(n-1 , arr , sum);
// 	}

// 	return dp[n][sum];
// }

// int main(){

// 	int n;
// 	cin>>n;

// 	vector<int>arr(n);
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 	}

// 	int sum ;
// 	cin>>sum;

// 	dp.resize(n+1 , vector<int>(sum+1,-1));

// 	cout<<totalSubsetSum(n , arr , sum);

// }






























/* equal sum partition */

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>>dp;

// int equalSumPartition(int n , vector<int>&arr , int sum){

// 	if(n==0){
// 		dp[n][sum] = 0;
// 	}

// 	if(sum==0){
// 		dp[n][sum] = 1;
// 	}

// 	if(dp[n][sum]!=-1){
// 		return dp[n][sum];
// 	}

// 	if(arr[n-1] <= sum){
// 		dp[n][sum] = max(equalSumPartition(n-1 , arr , sum-arr[n-1]) , equalSumPartition(n-1 , arr , sum));
// 	}
// 	else{
// 		dp[n][sum] = equalSumPartition(n-1 , arr , sum);
// 	}

// 	return dp[n][sum];

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	vector<int>arr(n);

// 	int sum = 0;
// 	for(int i=0 ; i<n ; i++){
// 		cin>>arr[i];
// 		sum+=arr[i];
// 	}

// 	dp.resize(n+1 , vector<int>(sum+1 , -1));

// 	if(sum & 1){
// 		return 0;
// 	}
// 	else{
// 		cout<<equalSumPartition(n, arr , sum/2);
// 	}
// }