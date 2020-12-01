// Jasiu

// Jasiu bierze do szkoły x cukierków, każdemu w klasie daje tyle samo.
// Po ile cukierków dostanie każdy przy n liczbie uczniów, i ile zostanie Jasiowi na wieczór?
// (Jasiu nie je w szkole i nauczycielka nie je bo jest na diecie.)

#include <iostream>

using namespace std;

int main()
{
    int sweets,   //liczba cukierków
        students; //liczba uczniów

    cout << "Ile cukierkow Jasiu dostal? ";
    cin >> sweets;
    cout << "Ile jest uczniow w klasie? ";
    cin >> students;

    int sweets_per_student = sweets / (students - 1);
    int sweets_for_evening = sweets - (sweets_per_student * (students - 1));

    cout << "Cukierkow dla kazdego: " << sweets_per_student << endl;
    cout << "Cukierkow na wieczor: " << sweets_for_evening;

    return 0;
}