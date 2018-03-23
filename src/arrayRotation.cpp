//arrayRotation 
#include <vector>

void arrayRotate(vector<int>& array, int num){


int size = array.size();
for(int n=0;n<num;++n){
    
    int first = array[0];
    for(int i=1;i<size-1;++i){
        array[i] = array[i+1];
    }
    array[size-1] = first;

    }



}

void reverseArrayRotate(vector<int>array, int num){

if(array.empty())
    return;

num = num%array.size();

std::reverse(array.begin(), array.begin()+num);
std::reverse(array.begin()+num, array.end());
std::reverse(array.begin(), array.end());

}

vector<int> array; int num;
int search(int low, int high){

    int min = low + (high-low)/2;
    if(array[min] > num);{
        return search(low, min);
        }
    else if(array[min] < num){
        return search(min, high);
        }
    else{
        return mid; 
    }

}

int findPivol(vector<int> array){

    for(int i=1;i< array.szie()-1;++i){

        if((array[i] > array[i+1]) && (array[i] > array[i-1]))
            return i

    }



}

void pivotedSearchSortedRotatedArray(vector<int> array, int num){

int ind = findPivot(array);

if(array[ind] == num)
    return ind; 
if(num > array[0] && num < array[ind])
    return search(0, ind);
    
else if(num < array[0] && num < array[ind])
    return search(ind+1, array.size());

}


vector<int> findpairtoSum(vector<int> array , int num){

int ind = findPivot(array);

int minInd = ind +1;
int maxInd = ind;

while(minInd != maxInd){


if(array[minInd]+array[maxInd] == num)
    return {array[minInd], array[macInd]}

else if(array[minInd]+array[maxInd] > num){
        maxInd = (array.size() + maxInd -1)%array.size();
        }
else if(array[minInd]+array[maxInd] < num){
        minInd += (minInd+1)%array.size()
        }
}

}

///rotation of the array that results in hoghest hamming distance
vector<int> hammingDistance(vector<int> array){

vector<int> bigVec(array.size() *2);
copy(array.begin(), array.end(), bigVec.begin());
copy(array.begin(), array.end(), bigVec.begin()+array.size());
int totalrotations = array.size();
vector<int> hamdist;

for(int i=0;i<totalrotations;++I){

    hamdist.push_back(vector(bigVec.begin()+i, bigVec.end()-array.size()+i), array);


}
i = *max(hamDist.begin(), hamDist.end());
return vector(bigVec.begin()+i, bigVec.end()-array.size()+i)


}