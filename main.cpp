#include <iostream>
#include <list>
using namespace std;

int Sum(list<int> numbers){
    int sum = 0;
    for(int i: numbers){
        sum = sum + i;
    }
    return sum;
}
int Multiplies(list<int> numbers){
    int mult = 1;
    for(int i : numbers){
        mult = mult * i;
    }
    return mult;
}
int main(){
    
    list<int> numbers;
    int num;
    cout << "Enter numbers: ";
    while(cin >> num){
        numbers.push_back(num);// to add a new number to the end of list
        cout << "Enter numbers: ";
    }
    cout << endl;
    cout <<"Sum: " << Sum(numbers) << endl;
    cout <<"Mult: " << Multiplies(numbers) << endl;
   
  
    return 0;

}
