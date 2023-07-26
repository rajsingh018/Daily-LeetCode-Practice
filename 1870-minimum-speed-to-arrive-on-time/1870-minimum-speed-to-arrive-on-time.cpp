class Solution
{
    bool checkTime(vector<int>& dist, double hour, int s)
    {
        double t = 0;
        for (int i = 0; i < dist.size() - 1; i++)
            t = t + ceil((double(dist[i])/ s));
        
        t = t + ((double)dist.back()) / s;
        if(t <= hour){
            return true;
        }
        return false;
    }
    
public:
    int minSpeedOnTime(vector<int>& dist, double hour)
    {
        if (hour <= (double)(dist.size()-1)) return -1;
        
        int low = 1, high = 1e7, mid;
        while (low < high)
        {
            mid = (low + high) / 2;
            if (checkTime(dist, hour, mid))
                high = mid;
            else
                low = mid + 1;
        }
        
        return high;
    }
};
