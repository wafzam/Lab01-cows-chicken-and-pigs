// 0123-Zaman-Buying Cows, Pigs, and Chickens
//

#include <iostream>
using namespace std;
int main()
{
    int maxCow = 100 / 10;//max number of cows in a 100 dollar
    int maxPig = 100 / 3;//max number of pigs in a 100 dollar
    
    int i = 1;
    while (i <= maxCow)//to keep count of cows
    {
        int k = 1;
        while (k <= maxPig)//to keep count of pigs
        {
            
            int cost = i*10 + k*3;
            int leftover = 100 - i - k;//number of chickens
            if (leftover % 2 == 0)//Makes sure the number 
            {
                int costofchicken = leftover / 2;
                cost += costofchicken;
                if (cost == 100) {
                    cout <<  " Cows: " << i << " Pigs: " <<k<< " Chickens:"<< leftover;
                }
                   
            } 
            k++;
        }
        i++;
        
    }
    
}

