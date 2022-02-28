//
// Created by Moynstain_MBA on 2022/2/22.
//
#include "iostream"
#include "ctime"
using namespace std;

// for loop 2022/2/22
int for_loop(int val){
    for (int i = 0; i <= 5; i++){
        cout << "C++ knows how many loops have been run, loop no." << i << endl;
    }
    cout << "for loop ends!\n";

    // following for loop countdown function
    cout << "Insert the countdown limit value: \n";
    int limit_val = 5;
    // cin >> limit_val;
    int i;
    for (i = limit_val; i;  i--){
        cout << "--- i = " << i << " ---\n";
    }
    cout << "now the countdown is over where i = " << i << endl;
    cout << (i = 100) << endl;
    cout << (i > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << (i > 3) << endl;
    int value_length = 10;
    long long calculate_value[value_length];
    calculate_value[1] = calculate_value[0] = 1;
    for (int i = 1; i < value_length; i++){
        calculate_value[i] = calculate_value[i-1] * i;
    }
    for (int i = 0; i < value_length; i++){
        cout << i << "! = " << calculate_value[i] << endl;
    }

    // following modify the step value in for loop
    cout << "Enter a step-up value: \n";
    int by = 13;
    // cin >> by;
    for (i = 0; i < 100; i += by){
        cout << i << endl;
    }

    // following read letters in string with for loop
    cout << "--- next, mirror change ---\nEnter a word: \n";
    string sentence = "Robotics save the world.";
    // getline(cin, word);
    // display letters in reverse order
    cout << sentence << "  |  ";
    for (int i = sentence.size() - 1; i >= 0; i--){
        cout << sentence[i];
    }
    cout << "\nFinished, bye.\n";
    int a = 20, b = 20;

    cout << "a++ = " << a++ << ", ++b = " << ++b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;
    a++; ++b;
    cout << "a = " << a << ", b = " << b << endl;

    // following char compare in for-loop 2022/2/28
    cout << "\n--- following char compare in for-loop ---\n";
    char test = 'z';
    cout << test ++;
    cout << test ++;
    cout << test ++ << endl;
    char word[5] = "zate";
    // word = "?ate";
    for (char ch = '?'; strcmp(word, "mate"); ch++){
        cout << word << endl;
        word[0] = ch;
    }

    // 换用string作比较，而非char 2022/2/28
    cout << "\n--- following string compare in for-loop ---\n";
    string word_cmp = "?ate";
    for (char ch = 'a'; word_cmp != "mate"; ch++){
        cout << word_cmp << endl;
        word_cmp[0] = ch;
    }

    // following while-loop 2022/2/28
    cout << "\n--- following while-loop ---\n";
    cout << "Please insert your name: \n";
    string name;
    getline(cin, name);
    cout << "Your name has been transformed to such format: \n";
    int j = 0;
    while (name[j] != '\0'){
        cout << name[j] << ": " << int(name[j]) << endl;
        j++;
    }

    // following waiting function 2022/2/28
    // add #include <ctime> for the code
    cout << "\n--- following waiting function ---\n";
    cout << "Enter the delay time in second: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting \a\n";
    clock_t start = clock();
    while ((clock() - start) < delay)
        ;
    cout << "done\a\n";

    // following do-while loop 2022/2/28
    cout << "\n--- following do-while loop ---\n";
    int fav_num;
    cout << "Guess what my favorite number is? (1-10)\n";
    cout << "Insert a number:\n";
    do{
        cin >> fav_num;
    }while(fav_num != 8);
    cout << "Bingo! It's 8！\n";

    return 0;
}


int main(){
    for_loop(1);
    return 0;
}
