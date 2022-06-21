#include <iostream>

#include <vector>

#include <string>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()

{
    vector <Point2i> vec{
        {2,1},{3,3},{2,3},{3, 2} ,{3, 1} ,{1, 3} ,{1, 1} ,{2, 2} ,{1, 2}
    };
    cout<<"before sort:"<<endl;
    for(auto v:vec) cout<<v<<" ";
    cout<<endl;
    sort(vec.begin(),vec.end());
    
    cout<<"hello world"<<endl;

}