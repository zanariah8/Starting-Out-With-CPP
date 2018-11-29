//The East Coase sales division generates 62 percent
//of total sales. Based on that percentage how much
//will the company generate if there are 4.6Million in sales
#include <iostream>
using namespace std;
int main(void){
    
    float sales = 4.6E6;
    float percent = .62;
    float generated = sales * percent;

    cout<<generated<<" will be generated";

    return 0;
}