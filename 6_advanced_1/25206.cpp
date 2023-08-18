#include <iostream>

using namespace std;

int main() {

    string subject, grade;
    double credit, ans, credit_sum = 0, grade_sum = 0;
    int cnt = 20;

    while (cnt--) {
        double grade_value;
        cin >> subject >> credit >> grade;

        if (grade == "P")
            continue;
        else if (grade == "A+")
            grade_value = 4.5;
        else if (grade == "A0")
            grade_value = 4.0;
        else if (grade == "B+")
            grade_value = 3.5;
        else if (grade == "B0")
            grade_value = 3.0;
        else if (grade == "C+")
            grade_value = 2.5;
        else if (grade == "C0")
            grade_value = 2.0;
        else if (grade == "D+")
            grade_value = 1.5;
        else if (grade == "D0")
            grade_value = 1.0;
        else if (grade == "F")
            grade_value = 0.0;

        credit_sum += credit;
        grade_sum += grade_value * credit;
    }

    ans = grade_sum / credit_sum;
    cout << ans;
    return 0;
}