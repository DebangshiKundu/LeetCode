class LRUCache {
public:
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if (cache.find(key)==cache.end()) return -1;
        usage.splice(usage.begin(),usage,cache[key].second);
        return cache[key].first;
    }
    
    void put(int key, int value) {
        if (cache.find(key)!= cache.end()){
            cache[key].first=value;
            usage.splice(usage.begin(),usage,cache[key].second);
        }
        else{
            if(size(cache)==cap){
                int val=usage.back();
                usage.pop_back();
                cache.erase(val);
            }
            usage.push_front(key);
            cache[key]={value,usage.begin()};
        }
    }
private:
    int cap;
    list<int> usage;
    unordered_map<int,pair<int,list<int>::iterator>> cache;
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */