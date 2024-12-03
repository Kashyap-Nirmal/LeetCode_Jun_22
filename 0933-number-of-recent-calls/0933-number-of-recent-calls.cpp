class RecentCounter {
public:
    vector<int> request;
    RecentCounter() {
        request.clear();
    }
    
    int ping(int t) {
        int ans = 0;
        request.push_back(t);
        auto it = find(request.begin(), request.end(), t - 3000);
        if (it != request.end()) return request.end() - it;
        for (int i = 0; i < request.size(); i++) {
            if (request[i] >= t - 3000 && ans == 0) return request.size() - i;            
        }
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */