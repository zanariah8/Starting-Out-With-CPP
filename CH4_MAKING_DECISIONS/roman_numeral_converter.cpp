#include <iostream>
using namespace std;
int main(void){
    int answer = 0;

    

    while((answer <= 0) || (answer > 10)){
        cout<<"Enter a number between 1-10 to see it converted to roman numerals"<<endl;
        cin>>answer;
    }

    switch(answer)
    {
        case 1: cout<<answer<<" converted to roman numerals is I"<<endl; break;
        case 2: cout<<answer<<" converted to roman numerals is II"<<endl; break;
        case 3: cout<<answer<<" converted to roman numerals is III"<<endl; break;
        case 4: cout<<answer<<" converted to roman numerals is IV"<<endl; break;
        case 5: cout<<answer<<" converted to roman numerals is V"<<endl; break;
        case 6: cout<<answer<<" converted to roman numerals is VI"<<endl; break;
        case 7: cout<<answer<<" converted to roman numerals is VII"<<endl; break;
        case 8: cout<<answer<<" converted to roman numerals is VII"<<endl; break;
        case 9: cout<<answer<<" converted to roman numerals is IX"<<endl; break;
        case 10: cout<<answer<<" converted to roman numerals is X"<<endl; break;

    }

    return 0;
    
}