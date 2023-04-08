#include <iostream>
using namespace std;

int main()
{
    int code, infant = 0, child = 0, teenager = 0, adult = 0, next = 1, numberoftikets = 0;
    int *pcode = &code, *pinfant = &infant, *pchild = &child, *pteenager = &teenager, *padult = &adult, *pnext = &next, *pnumberoftikets = &numberoftikets;
    int MFchild = 0, MFinfant = 0, MFteenager = 0, MFadult = 0, totalmoney = 0, total_number; // MF stands for " money from..."
    int *ptotal_number = &total_number, *pMFchild = &MFchild, *pMFinfant = &MFinfant, *pMFteenager = &MFteenager, *pMFadult = &MFadult, *ptotalmoney = &totalmoney;

    cout << " ****Kokebe Tsibah secondary and preparatory prepare school closing function*****\n";
    while ((*pnext) == 1)
    {
        cout << "enter your code number: ";
        cin >> *pcode;
        if (*pcode < 0)
            break;
        switch (*pcode)
        {
        case 1:
            (*pinfant)++;
            (*ptotalmoney) += 10;
            MFinfant += 10;
            break;
        case 2:
            (*pchild)++;
            (*ptotalmoney) += 5;
            (*pMFchild) += 5;
            break;
        case 3:
            (*pteenager)++;
            (*ptotalmoney) += 20;
            (*pMFteenager) += 20;
            break;
        case 4:
            (*padult)++;
            (*ptotalmoney) += 20;
            (*pMFadult) += 20;
            break;
        default:
            cout << "wrong input!\n";
            break;
        }
        if (*pcode >= 1 && *pcode <= 4)
            (*pnumberoftikets)++;
        cout << "enter one to get in to: ";
        cin >> *pnext;
        system("cls");
    }
    *ptotal_number = *pnumberoftikets;
    cout << "total number of peoples attend the function is: " << *ptotal_number << " peoples" << endl;
    cout << "the total number of tikets solled is: " << *pnumberoftikets << " tikets\n";
    cout << "total amount of money collected is: " << *ptotalmoney << " birr\n";
    cout << "number of infants attending the function is: " << *pinfant << " infants"
         << "\ntotal amount of money collected from infants is: " << *pMFinfant << " birr\n";
    cout << "number of childrens attending the function is: " << *pchild << " childs"
         << "\ntotal amount of money collected from child is: " << *pMFchild << " birr\n";
    cout << "number of teenagers attending the function is: " << *pteenager << " teenagers"
         << "\ntotal amount of money collected from teenagers is: " << *pMFteenager << " birr\n";
    cout << "number of adults attending the function is: " << *padult << " adults"
         << "\ntotal amount of money collected from adults is: " << *pMFadult << " birr\n";

    return 0;
}