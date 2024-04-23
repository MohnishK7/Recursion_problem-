/**
 *    author:  QubitWizard
**/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------------------------------------------------------------------------------------------------------------------------*/

//recursion
// print number from 1 to n;

// void printNum(int i, int n) {
//    if (i < 1) {
//       return;
//    }
//    //printNum(i - 1, n); // this line is backtrack
//    cout << i << endl;
//    printNum(i - 1, n);
// }

// void numbers(int i, int n) {
//    if (i > n)return;
//    numbers(i + 1, n); // swap line 7 and 8 --- backtracking
//    cout << i << endl;
// }


//print all subsequence;
// void printSubsq(int ind, vector<int> &ds, int arr[], int n) {
//    if (ind >= n) {
//       for (auto it : ds) {
//          cout << it << " ";
//       }
//       cout << endl;
//       return;
//    }

//    //take;
//    ds.push_back(arr[ind]);
//    printSubsq(ind + 1, ds, arr, n);
//    ds.pop_back();

//    //not take;
//    printSubsq(ind + 1, ds, arr, n);
// }

//print all the subsequence whose sum = k
// void printSubsqSumK(int ind, vector<int> & ds, int s, int sum, int arr[], int n) {
//    if (ind == n) {
//       if (s == sum) {
//          for (auto it : ds) {
//             cout << it << " ";
//          }
//          cout << endl;
//       }
//       return;
//    }

//    //take
//    ds.push_back(arr[ind]);
//    s += arr[ind];

//    printSubsqSumK(ind + 1, ds, s, sum, arr, n);

//    s -= arr[ind];
//    ds.pop_back();

//    //not take
//    printSubsqSumK(ind + 1, ds, s, sum, arr, n);
// }

// to print only one answer
// bool printSubsqSumK(int ind, vector<int> & ds, int s, int sum, int arr[], int n) {
//    if (ind == n) {

//       //condition satisfied
//       if (s == sum) {
//          for (auto it : ds) {
//             cout << it << " ";
//          }
//          cout << endl;
//          return true;
//       }
//       return false;
//    }

//    //take
//    ds.push_back(arr[ind]);
//    s += arr[ind];

//    if (printSubsqSumK(ind + 1, ds, s, sum, arr, n) == true) {
//       return true;
//    }
//    s -= arr[ind];
//    ds.pop_back();

//    //not take
//    if (printSubsqSumK(ind + 1, ds, s, sum, arr, n) == true) {
//       return true;
//    }
//    return false;
// }

// count the subsequences with sum = k;
int printSubsqSumK(int ind, int s, int sum, int arr[], int n) {
   if (ind == n) {
      //condition satisfied
      if (s == sum) {
         return 1;
      }
      else {
         //condition not satisfied
         return 0;
      }
   }



   //take
   s += arr[ind];

   int l = printSubsqSumK(ind + 1, s, sum, arr, n);
   s -= arr[ind];

   //not take
   int r = printSubsqSumK(ind + 1, s, sum, arr, n);

   return l + r;
}



/*--------------------------------------------------------------------------------------------------------------------------------------*/
int main() {
#ifndef ONLINE_JUDGE
   //input.txt
   freopen("input1.txt", "r", stdin);
   //output.txt
   freopen("output1.txt", "w", stdout);
   //error
   freopen("error.txt", "w", stderr);
#endif
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   // code here
   // int n;
   // cin >> n;
   // //printNum(n, n);
   // numbers(1, n);

   //print all the subsequences;
   // int arr[] = {3, 1, 2};
   // int n = 3;
   // // cin>>n;
   // vector<int> ds;
   // printSubsq(0, ds, arr, n);


   //print all the subsequence whose sum = k
   int arr[] = {1, 2, 1};
   int n = 3;
   int sum = 2;
   // cin>>n;
   //vector<int> ds;
   cout << printSubsqSumK(0, 0, sum, arr, n);
   return 0;
}
