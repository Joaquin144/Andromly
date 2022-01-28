#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define ull unsigned long long
#define F first
#define S second
#define nl "\n"
#define mem(v, t) memset(v, t, sizeof(v))
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define rep(i,init,n) for(int i=init;i<n;i++)
#define vll vector<ll>
#define VC vector<ll> 
#define VV vector<vector<ll>>
#define pll pair<ll, ll>
#define mp make_pair
#define PI 3.141592653589793238462643383279502884197169399375
#define jaldi                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll mod = 1e9 + 7;
#define tc    \
    int t;     \
    cin >> t; \
    while (t--)

#define HCF __gcd

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << nl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}


void progressive_overload()
{
    cout<<"\t\t\t\t----:DevComm:---------------\n\n"<<nl;
    cout<<"Currently Chosen topics are :-\n";
    cout<<"1.) Linear DP\n";
    cout<<"2.) Knapsack DP\n";
    cout<<"3.) String DP\n";
    cout<<"4.) Memoization\n";
    cout<<nl<<nl;
    vector<int> topicsTotal={-1,37,11,29,17,12,3,8,20,3,55,4,1,2,6,1,7};
    cout<<"Enter Number of problems you wish to do today\n";
    int n;
    cin>>n;
    vector<int> topicsChosen;
    topicsChosen.emplace_back(1);
    topicsChosen.emplace_back(2);
    topicsChosen.emplace_back(8);
    topicsChosen.emplace_back(14);
    int len=topicsChosen.size();
    cout<<nl<<nl<<"These are questions you need to solve( See Pdf)\n";
    //todo : give random questions
    set<pair<int,int>> alreadyDone;
    for(int i=0;i<n;i++){
        int index=rand()%len;//in range [0,len-1]
        int questionsAvailable=topicsTotal[index];
        int randomQuestionNumber=1+(rand()%questionsAvailable);
        auto f=alreadyDone.find(make_pair(index,randomQuestionNumber));
        if(f!=alreadyDone.end()){
            i--;
            continue;
        }
        alreadyDone.insert(make_pair(index,randomQuestionNumber));
        cout<<i+1<<".)  Tag: "<<topicsChosen[index]<<"  Number: "<<randomQuestionNumber<<nl;
    }
    cout<<nl<<nl<<"Thanks for using our application\n\t\t\t\t----:Devcomm:-------\n";
    system("PAUSE");
}

int main()
{
/*#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("output.txt", "w", stdout);
#endif*/
    	
    //jaldi
    //tc
        progressive_overload();
}
