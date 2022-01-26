<<<<<<< HEAD
vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                arr[i] = -1;
            }
            else
            {
                while(st.size()>0 && st.top() < arr[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    st.push(arr[i]);
                    arr[i] = -1;
                }
                else
                {
                    long long curr = st.top();
                    st.push(arr[i]);
                    arr[i] = curr;
                }
            }
        }
        return arr;
=======
vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                st.push(arr[i]);
                arr[i] = -1;
            }
            else
            {
                while(st.size()>0 && st.top() < arr[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    st.push(arr[i]);
                    arr[i] = -1;
                }
                else
                {
                    long long curr = st.top();
                    st.push(arr[i]);
                    arr[i] = curr;
                }
            }
        }
        return arr;
>>>>>>> d62f23cfcb0b1cba68c31d2a6b28ac38b40f9b3c
    }