class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> st;
        st.push(-1);
        for(int i = n - 1; i >= 0; i--) {
            while(st.top() != -1 && heights[st.top()] >= heights[i])
                st.pop();
            right[i] = st.top();
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        st.push(-1);
        for(int i = 0; i < n; i++) {
            while(st.top() != -1 && heights[st.top()] >= heights[i])
                st.pop();
             left[i] = st.top();
            st.push(i);
        }
        int area = INT_MIN;
        for(int i = 0; i < n; i++) {
            int l = heights[i];
             if(right[i] == -1)
                right[i] = n;
            int b = right[i] - left[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
    return area;
    }
}; 