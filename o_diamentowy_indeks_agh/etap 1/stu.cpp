#include <iostream>

using namespace std;

string StudZad5(int _cin[]) {
    int iStudentow = _cin[0];
    if (iStudentow >= 1 && iStudentow <= 300 && iStudentow % 2 == 0)
    {
        int sumaPkt = 0;
        for (int i = 1; i <= iStudentow; i++)
        {
            int iPkt = _cin[i];
            if (iPkt >= 0 && iPkt <= 200)
                sumaPkt += iPkt;
            else
                return "NIE";
        }
        if (sumaPkt % 2 == 0)
            return "TAK";
    }
    return "NIE";
}

int main () {
    int iStud;
    cin >> iStud;
    int arr[iStud+1];
    arr[0] = iStud;
    for (int _i = 1; _i <= iStud; _i++) {
        cin >> arr[_i];
    }
    cout << StudZad5(arr);
    // int[] cin = { 10, 70, 150, 80, 120, 200, 50, 190, 55, 60, 65 };
    // Console.WriteLine(StudZad5(cin));
    return 0;
}