vector<int> gradingStudents(vector<int> grades) {
    int sz = (int)grades.size();
    vector<int>ans(sz);
    for (int i = 0; i<sz; ++i){

        if ((grades[i] >= 38) && grades[i] % 5 != 0){
            int z = (grades[i] / 5) + 1;
            z = z * 5;
            if (z - grades[i]<3) ans[i] = z;
            else ans[i] = grades[i];
        }
        else ans[i] = grades[i];
    }

    return ans;
}