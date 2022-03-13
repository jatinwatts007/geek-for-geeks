int solve(vector<vi>& graph, int s, int d, vector<bool>& vis) {
	queue<int> nodes;
	nodes.push(s);
	vis[s] = true;
	nodes.push(-1);
	int l = 0;
	while(!nodes.empty()) {
		int node = nodes.front();
		cout<<node<<" ";
		nodes.pop();
		if(node == -1) {
			if(!nodes.empty()) nodes.push(-1);
			l++;
			continue;
			
		}
		else if(node == d) return l;
		for(auto &nbr: graph[node]) {
			if(!vis[nbr]) {
				nodes.push(nbr);
				vis[nbr] = true;
			}
		}
	}
	return -1;
}

int32_t main() {
	int n;
	cin>>n;
	vector<vi> graph(n, vi());
	for(int i = 0; i <= n; i++) {
		string input;
		getline(cin, input);
		if(i == 0) continue;
		istringstream ss(input);
		string nbr;
		while(ss >> nbr) 
			graph[i-1].pb(stoi(nbr) - 1);
	}
	int src, dest;
	cin>>src>>dest;
	vector<bool> vis(n, false);
	solve(graph, src-1, dest-1, vis);
	return 0;
}
