class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());//排序
        double total=0;//有小數點
        for(int i=1;i<salary.size()-1;i++)//避開最大salary[N-1]最小salary[0]
        {
            total +=salary[i];
        }
        return total / (salary.size()-2);
    }
};