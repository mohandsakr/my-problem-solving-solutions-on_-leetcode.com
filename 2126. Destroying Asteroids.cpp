/*
* problem link :https://leetcode.com/problems/destroying-asteroids/
* problem name: 2126. Destroying Asteroids
* Status: Accepted.
* Author : Mohand sakr.
*/


class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        unsigned long long mass2=mass;
    int len=asteroids.size();
    sort(asteroids.begin(),asteroids.end());
        int destroyed=0;
        for(int i=0;i<len;i++){
            
            if(mass2>=asteroids[i])
            {
                mass2+=asteroids[i];
                ++destroyed;
            }
            
        }
        
        return len==destroyed;
        
    }
};
