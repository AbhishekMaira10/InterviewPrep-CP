#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getSubsets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER n
 *  3. INTEGER_ARRAY arr
 */

int Sum(int N) 
{ 
    int SumOfPrimeDivisors[N+1] = { 0 }; 
  
    for (int i = 2; i <= N; ++i) { 
  
        // if the number is prime 
        if (!SumOfPrimeDivisors[i]) { 
  
            // add this prime to all it's multiples 
            for (int j = i; j <= N; j += i) { 
  
                SumOfPrimeDivisors[j] += i; 
            } 
        } 
    } 
    return SumOfPrimeDivisors[N]; 
} 
int getSubsets(int k, int n, vector<int> arr) {
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s+=Sum(arr[i]);
    }
    if(k==2)
    return s+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = getSubsets(k, n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

