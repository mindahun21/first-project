
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // don't forget the year is must be four digit

    int date, day, count, month, year, condition = 1;
    string invalid;                     // this is the message when the day from the user is invalid
    string fyear, fmonth, fday, NLyear; // final year,month,day & NLyear is next leap year
    while (condition == 1)
    {
        system("cls");
        cout << "enter the date (ddmmyyyy): ";
        cin >> date;
        int temp = date;
        if (temp / 10000000 == 0) // if the ady is from 01 up to 09
        {
            temp += 10000000;
        }

        count = 0;
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }
        if (count == 8)
        {

            year = date % 10000;

            switch (year)
            {
            case 0:
                fyear = "0000";
                break;
            case 1 ... 9:
                fyear = "000" + to_string(year);
                break;
            case 10 ... 99:
                fyear = "00" + to_string(year);
                break;
            case 100 ... 999:
                fyear = "0" + to_string(year);
                break;
            default:
                fyear = to_string(year);
                break;
            }

            temp = date / 10000;
            month = temp % 100;

            day = temp / 100;
            if (day < 10)
            {
                switch (day)
                {
                case 1 ... 9:
                    fday = "0" + to_string(day);
                    break;
                }
            }
            else
            {
                fday = to_string(day);
            }

            bool leap; // leap year
            if (year % 4 == 0)
            {
                if (year % 100 == 0)
                {
                    if (year % 400 == 0)
                    {
                        leap = true;
                    }
                    else
                    {
                        leap = false;
                    }
                }
                else
                {
                    leap = true;
                }
            }
            else
            {
                leap = false;
            }
            bool valid = false; // valid number of days

            if (month > 0 && month <= 12 && day > 0)
            {
                switch (month)
                {
                case 1:
                    if (day <= 31)
                    {
                        valid = true;
                        fmonth = "01";
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day!";
                    }

                    break;
                case 2:
                    if (leap == true)
                    {
                        if (day <= 29)
                        {
                            valid = true;
                        }
                        else
                        {
                            if (day <= 31)
                            {
                                invalid = to_string(day) + " is invalid day  in february!";
                            }
                            else
                            {
                                invalid = to_string(day) + " is invalid day!";
                            }
                        }
                    }
                    else
                    {
                        if (day <= 28)
                        {
                            valid = true;
                        }
                        else
                        {
                            if (day == 29)
                            {
                                invalid = to_string(day) + " is invalid day  in february \nbecause the year is not leap year ";
                            }
                            else if (day <= 31)
                            {
                                invalid = to_string(day) + " is invalid day  in february";
                            }
                            else
                            {
                                invalid = to_string(day) + " is invalid day";
                            }
                        }
                    }
                    fmonth = "02";
                    break;
                case 3:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "03";
                    break;
                case 4:
                    if (day <= 30)
                    {
                        valid = true;
                    }
                    else
                    {
                        if (day == 31)
                        {
                            invalid = to_string(day) + " is invalid day  in april";
                        }
                        else
                        {
                            invalid = to_string(day) + " is invalid day";
                        }
                    }
                    fmonth = "04";
                    break;
                case 5:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "05";
                    break;
                case 6:
                    if (day <= 30)
                    {
                        valid = true;
                    }
                    else
                    {
                        if (day == 31)
                        {
                            invalid = to_string(day) + " is invalid day  in june";
                        }
                        else
                        {
                            invalid = to_string(day) + " is invalid day";
                        }
                    }
                    fmonth = "06";
                    break;
                case 7:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "07";
                    break;
                case 8:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "08";
                    break;
                case 9:
                    if (day <= 30)
                    {
                        valid = true;
                    }
                    else
                    {
                        if (day == 31)
                        {
                            invalid = to_string(day) + " is invalid day  in june";
                        }
                        else
                        {
                            invalid = to_string(day) + " is invalid day";
                        }
                    }
                    fmonth = "09";
                    break;
                case 10:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "10";
                    break;
                case 11:
                    if (day <= 30)
                    {
                        valid = true;
                    }
                    else
                    {
                        if (day == 31)
                        {
                            invalid = to_string(day) + " is invalid day  in june";
                        }
                        else
                        {
                            invalid = to_string(day) + " is invalid day";
                        }
                    }
                    fmonth = "11";
                    break;
                case 12:
                    if (day <= 31)
                    {
                        valid = true;
                    }
                    else
                    {
                        invalid = to_string(day) + " is invalid day";
                    }
                    fmonth = "12";
                    break;
                }
            }
            else
            {
                if (month == 0)
                {
                    fmonth = "0" + to_string(month);
                }
                else
                {
                    invalid = fmonth + " is invalid month ";
                }
            }

            if (valid == true)
            {
                if (leap == true)
                {
                    cout << fday + "/" + fmonth + "/" + fyear + " is valid and also leap year.\nhear is below the next twenty Leap years are : \n";
                    temp = year;
                    for (int i = 1; i <= 20; i++)
                    {
                        temp += 4;
                        switch (temp)
                        {
                        case 1 ... 9:
                            NLyear = "000" + to_string(temp);
                            break;
                        case 10 ... 99:
                            NLyear = "00" + to_string(temp);
                            break;
                        case 100 ... 999:
                            NLyear = "0" + to_string(temp);
                            break;
                        default:
                            NLyear = to_string(temp);
                            break;
                        }
                        cout << NLyear << ", ";
                    }
                }
                else
                {
                    cout << " " + fday + "/" + fmonth + "/" + fyear + " is valid but not leap year.";
                }
            }
            else
            {
                cout << invalid;
            }
        }
        else
        {
            cout << "the date you entered is does't feet with requered format!";
        }
        cout << "\nenter 1 if you want to continue: ";
        cin >> condition;
    }
    return 0;
}