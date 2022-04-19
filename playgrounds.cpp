vector<int> solve(vector<string> &words, vector<string> &sentences) {
    unordered_map<string, vector<string>> mpp;
    for(string word: words) {
        string sorted = word;
        sort(sorted.begin(), sorted.end());
        mpp[sorted].push_back(word);
    }
    vector<int> ans;
    for(string sentence: sentences) {
        stringstream s(sentence);
        string tmp;
        int c = 1;
        while(s>>tmp) {
            string key = tmp;
            sort(key.begin(), key.end());
            if(mpp.find(key) != mpp.end()) {
                c *= mpp[key].size();
            }
        }
        ans.push_back(c);
    }
    
    return ans;
}

int main() {
    vector<string> words{"bats","tabs","in","cat","act"};
	vector<string> sentences{"cat the bats", "in the act", "act tabs in"};
    for(int i: solve(words, sentences)) {
        cout<<i<<" ";
    }
}
