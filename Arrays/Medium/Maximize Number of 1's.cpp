// ques link : https://practice.geeksforgeeks.org/problems/maximize-number-of-1s0905/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximize-number-of-1s

/*  EXPLANATION 
 
currently window size will be zero so i (left side of window) and j (right side of window) 
will be zero while traversing in window  since we are moving right if we encounter zero 
we will decrease the m till it becomes zero if again we encounter zero the m will be negative 
so we will move the left side of window i.e. i++ and before moving it we will check whether it 
was zero or not if it was zero then we will increase the m because one zero is left from this 
window since we will increasing j (right side) and then size of window is automatically 
increasing as i is not moving till m is negative , so in all situation we will get max 
size of window below is the code 

*/

int findZeroes(int arr[], int n, int m)
{
    // sliding window approach
    int i = 0; // left side of window
    int j;     // right side of window
    for (j = 0; j < n; j++)
    {
        if (arr[j] == 0)
            m--;
        if (m < 0 && arr[i++] == 0)
            m++;
    }
    return j - i;
}