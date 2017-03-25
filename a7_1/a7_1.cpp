//
//  main.cpp
//  a7_1
//
//  Created by Angela D Penland on 3/13/17.
//  Copyright © 2017 ___ANGELAPENLAND___. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void doOneSet (int operand1, int operand2);

int main()
{
    srand(static_cast<unsigned>(time(0)));
    void doOneSet(int operand1, int operand2);  //need void or int to avoid XCode error "C++ requires a type
                                                //specifier for all delcarations."

    for (int i = 0; i < 10; i++){
        //  num = rand() % 101;
        cout << setw(8) << rand() % 101;
        if (i % 5 == 4){
            cout << endl;
        }
    }

}









//doOneSet (Phase 2) : Function that creates an addition problem from random numbers



    void doOneSet (int& operand1, int& operand2) {
  
        
    int sum;
    operand1 = rand();
    operand2 = rand();
    
    sum = operand1 + operand2;
    
    cout << operand1 << " + " << operand2 << "=" << sum;
    
    
    
    
    
    }









/*Function that generates 10 random numbers between 1 and 100.

    int num;
    int rand () {
    for (int i = 0; i < 10; i++){    //xcode error "thread 1: EXC_BAD_ACCESS (code=2, address=0x7fff5f3ffffc)
        num = rand() % 101;
        if (i % 5 == 4){
            cout << endl;
        }
    }
        return 0;
}
*/








//doOneProblem (Phase 2)

