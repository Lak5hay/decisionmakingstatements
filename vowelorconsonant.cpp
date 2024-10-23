//lakshay tanwar 23070123079
int main() {
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    
    ch = tolower(ch);
    if (ch >= 'a' && ch <= 'z') { 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not a valid alphabet character." << endl;
    }

    return 0;
}
/*
Enter a single character: h
h is a consonant.
Enter a single character: a
a is a vowel.
*/
