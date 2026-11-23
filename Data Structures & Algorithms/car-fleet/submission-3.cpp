class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pr;

        for(int i = 0; i < position.size(); i++){
            pr.push_back({position[i], speed[i]});
        }
        sort(pr.rbegin(), pr.rend());

        int fleets = 1;
        double prevTime = (double)(target - pr[0].first) / pr[0].second;
        // the idea is: if a car takes MORE time (currTime > prevTime) to reach the target,
        // he will arrive there separately => a new fleet (from the problem: A single car is also considered a car fleet.)
        for(int i = 0 ; i < position.size(); i++){
            double currTime = (double)(target - pr[i].first) / pr[i].second;
            if(currTime > prevTime){
                fleets++;
                prevTime = currTime;
            }
        }

        return fleets;
    }
};
