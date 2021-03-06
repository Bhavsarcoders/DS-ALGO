/*Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.

Input Format:

The first and the only argument contains an integer, A.
Output Format:

Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:

1 <= A <= 1000
Examples:

Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

Input 2:
    4

Output 2:
    [   [1, 2, 3, 4],
        [12, 13, 14, 5],
        [11, 16, 15, 6],
        [10, 9, 8, 7]   ]*/

/*****************************************************************************************************************************************

************************************************** SOLUTION IN CPP **********************************************************************

*****************************************************************************************************************************************/


vector<vector<int> > Solution::generateMatrix(int A) {
    if(A<=0) return vector<vector<int>>();
        vector<vector<int>> result(A,vector<int>(A));
        int xBeg=0,xEnd=A-1;
        int yBeg=0,yEnd=A-1;
        int cur=1;
        while(true){
            for(int i=yBeg;i<=yEnd;i++) result[xBeg][i]=cur++;
            if(++xBeg>xEnd) break;
            for(int i=xBeg;i<=xEnd;i++) result[i][yEnd]=cur++;
            if(--yEnd<yBeg) break;
            for(int i=yEnd;i>=yBeg;i--) result[xEnd][i]=cur++;
            if(--xEnd<xBeg) break;
            for(int i=xEnd;i>=xBeg;i--) result[i][yBeg]=cur++;
            if(++yBeg>yEnd) break;
        }
        return result; 
}
