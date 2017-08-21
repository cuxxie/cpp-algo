//
//  bubblesort
//  bubblesort
//
//  Created by Hendri on 8/21/17.
//  Copyright © 2017 Hendri. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> bubblesort(vector<int> input)
{
    for(int i=0;i<input.size();i++)
        for(int j=i+1;j<input.size();j++)
            if(input[i]<input[j])
                swap(&input[i],&input[j]);
    return input;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int in[] = {1,6,5,2,3,9,45,2,8,10,12,3,5,6,8,7};
    vector<int> input(in, in + sizeof(in) / sizeof(in[0]));
    input = bubblesort(input);
    for(int i=0;i<input.size();i++)
        cout<<input[i]<<" ";
    return 0;
}
