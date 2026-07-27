class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> score;
        int res = 0;

        for (auto curr : operations) {

            if (curr == "+") {

                int currenttop = score.top();
                score.pop();
                int newtop = currenttop + score.top();
                score.push(currenttop);
                score.push(newtop);
                res += score.top();

            } else if (curr == "D") {

                score.push(2 * score.top());
                res += score.top();

            } else if (curr == "C") {

                res -= score.top();
                score.pop();
                
            } else {

                score.push(stoi(curr));
                res += score.top();
            }
        }
        return res;
    }
};