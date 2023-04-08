#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int jumps[] = {-5,4,-2,3,1,-1,-6,-1,0,5};
    int n = sizeof(jumps) / sizeof(jumps[0]);
    int min_stair = 0; // initialize the minimum stair level to 1
    int curr_stair = min_stair; // initialize the current stair level to the minimum stair level
    
    for(int i = 0; i < n; i++) {
        curr_stair += jumps[i]; // update the current stair level based on the current jump
        if(curr_stair <= 0) { // if the current stair level falls to or below 0
            min_stair += abs(curr_stair); // update the minimum stair level
            curr_stair += abs(curr_stair); // update the current stair level
        }
    }
    
    cout << "Minimum stair level: " << min_stair+1 << endl;
    
    return 0;
}
