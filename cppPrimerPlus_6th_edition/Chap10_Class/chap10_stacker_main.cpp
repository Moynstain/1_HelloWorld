//
// Created by Moynstain_MBA on 2022/12/13.
//

#include "iostream"
#include "chap10_stack.h"
#include "cctype"

int main(){
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Enter A to add a purchase order,\n" << "P to process a po, Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q'){
        while ((cin.get() != '\n')){
            continue;
        }
        if (!isalpha(ch)){
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull()){
                    cout << "stack already full\n";
                } else{
                    st.push(po);
                }
                break;
            case 'P':
            case 'p':
                if (st.isempty()){
                    cout << "stack already empty\n";
                } else{
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
        }
        cout << "Enter A to add a purchase order,\n" << "P to process a po, Q to quit.\n";
    }
    cout << "Done\n";
    return 0;
}