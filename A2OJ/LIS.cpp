
// subset DP. 1 2 3 4 5 6



int numList[] = {5, 2, 7, 3, 4, 6};	// solution is finally set of 0s and 1s..pick or leave.
//			     0  1  0  1  1  1

int m = 7;
// called with LIS(0, m)
int LIS(int i, int prev)
{
	if(i == m)
		return 0;

	int choice1 = LIS(i+1, prev);	// LEAVE
	int choice2 = 0;

	if(numList[prev] <= numList[i])
		choice2 = LIS(i+1, i) + 1;

	return max(choice1, choice2);
}
