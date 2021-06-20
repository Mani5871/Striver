// Time Complexity : O(1)
// Space Complexity : O(N)
// https://leetcode.com/problems/lru-cache/

class LRUCache {
public:
    
    unordered_map <int, pair<int, list<int> ::iterator>> map1;
    int size;
    list <int> li;
    
    LRUCache(int capacity) {
        
        size = capacity;
    }
    
    int get(int key) {
        
       if(map1.find(key) == map1.end())
           return -1;
        
        else
        {
            li.erase(map1[key].second);
            li.push_front(key);
            map1[key].second = li.begin();
            
        }
        return map1[key].first;
    }
    
    void put(int key, int value) {
        
        if(map1.find(key) == map1.end())
        {
            if(li.size() == size)
            {
                map1.erase(li.back());
                li.pop_back();
            }
            
           li.push_front(key);
           map1[key] = {value, li.begin()};
                
        }
        
        else
        {
            li.erase(map1[key].second);
            li.push_front(key);
            
            map1[key] = {value, li.begin()};
        }
    }
};

