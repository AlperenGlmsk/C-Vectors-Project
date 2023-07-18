#include <iostream>
#include <vector>

using namespace std;

int main() {
     vector<double> vec;
     char choice{};
     while(true){
         cout << "P-print numbers" << endl;
         cout << "A-add a number" << endl;
         cout << "M-Display mean of the numbers" << endl;
         cout << "S-Display the smallest number" << endl;
         cout << "L-Display the largest" << endl;
         cout << "Q-Quit" << endl;
         cout << "-----------------" << endl;
         cout << "Enter your choice : ";
         cin >> choice;
         
    if(choice == 'p' || choice == 'P'){
        cout<<"[";
        for(unsigned i{};i < vec.size() ; i++)
            cout << vec.at(i)<<" ";
        cout<<"]" << endl;
        cout << endl;
        }
    
    else if(choice == 'a' || choice == 'A'){
        int num{};
        cout << "Enter a number : ";
        cin >> num;
        vec.push_back(num);
    }
    else if(choice == 'm' || choice == 'M'){
        double sum{};
        for(auto i :vec){
            sum += i;
        }
        cout << "Mean of the values : " << (sum / vec.size()) << endl;
    }
    else if(choice == 's' || choice == 'S'){
        int min = vec.at(0);
        for(auto i : vec){
            if(i<min)
                min = i;
        }
        cout<<"Minimum number is " <<min << endl;
    }
    else if(choice == 'l' || choice == 'L'){
        int max = vec.at(0);
        for(auto i : vec){
            if(i>max)
                max = i;
    }
        cout<<"Maximum number is " << max << endl;
    
    }
    else if(choice == 'q' || choice == 'Q'){
        break;
    }
    else
        cout<<"Enter a valid choice"<<endl;
    }

    return 0;
}

