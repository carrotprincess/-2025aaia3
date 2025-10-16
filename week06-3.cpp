// week06-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {//c++¶i¶¥°j°é
        vector<int> a; // °}¦C
        for (string op : operations) {
            // cout<<op<<"\n";
            if (op[0] == '+') {
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp + temp2);
            } else if (op[0] == 'D') {
                a.push_back(a.back() * 2);
            } else if (op[0] == 'C') {
                a.pop_back();
            } else {
                a.push_back(stoi(op));
            }
        }
        //return 0;

        int ans = 0;
        for (int now : a) {
            ans += now;
        }
        return ans;
    }
};