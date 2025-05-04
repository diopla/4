﻿#include <iostream>
#include <string>
#include <vector>
#include<set>

using namespace std;
int summas(int* ukaz, int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(ukaz + i);
    }
    return sum;
}
int maxmas(int mas[], int size)
{

    int max = mas[0];

    for (int i = 0; i <= size; i++) {
        int* p{ &mas[i] };
        if (*p > max) {
            max = *p;
        }
    }

    return max;

}
int minmas(int mas[], int size)
{
    int min = mas[0];

    for (int i = 0; i <= 4; i++)
    {
        int* pmass{ &mas[i] };
        if (*pmass < min)
        {
            min = *pmass;
        }
    }
    return min;
}
void obratno(int mas[5], int size)
{
    int* start = mas;
    int* end = mas + size - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << mas[i] << " ";
    }
}
int poisk(int mas[], int size, int a)
{
    int result = -1;

    cout << "" << endl;
    for (int i = 0; i <= size; i++) {
        int* ukaz{ &mas[i] };
        if (*ukaz == a) {
            result = i;
            break;
        }
    }

    if (result != -1) {
        return result;
    }
    else {
        return result;
    }
}
void delmas(int mas[], int size, int a)
{

    int* ukaz = mas;
    int* start = ukaz;
    int* end = ukaz + size;

    for (; start < end; ++start) {
        if (*start == a) {
            for (int* q = start; q < end - 1; ++q) {
                *q = *(q + 1);
            }
            --size;
            break;
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << ukaz[i] << ", ";
    }

}
vector<int> obedinenie(int mas1[5], int mas2[5])
{
    vector <int> obed;
    for (int i = 0; i < 5; i++)
    {
        int* ukaz{ &mas1[i] };
        obed.push_back(*ukaz);

    }
    for (int i = 0; i < 5; i++)
    {
        int* ukaz{ &mas2[i] };
        obed.push_back(*ukaz);

    }
    return obed;
}
void sort(int mas[], int size)
{


    int* ukaz = mas;




    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (*(ukaz + j) > *(ukaz + j + 1)) {

                int temp = *(ukaz + j);
                *(ukaz + j) = *(ukaz + j + 1);
                *(ukaz + j + 1) = temp;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << ukaz[i] << " ";

    }
}
int sumobedinenie(int mas1[5], int mas2[5])
{

    int sumobed = 0;
    for (int i = 0; i < 5; i++)
    {
        int* ukaz{ &mas1[i] };
        sumobed += *ukaz;

    }
    for (int i = 0; i < 5; i++)
    {
        int* ukaz{ &mas2[i] };
        sumobed += *ukaz;

    }
    return sumobed;
}
vector <int> facto(int a)
{
    int facto = 1;
    vector <int> result;
    for (int i = 1; i <= a; i++)
    {
        facto *= i;
        result.push_back(facto);
    }
    return result;
}
vector<int> prosto(int a) {
    vector<int> prostoe;
    bool prime = true;

    if (a == 0 || a < 0 || a == 1) {
        cout << "данные введены не корректно ";
    }
    else {

        for (int i = 2; i <= sqrt(abs(a)); i++) {
            if (a % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << "Число простое" << endl;

            for (int num = 2; num <= a; num++) {
                bool isPrime = true;
                for (int i = 2; i <= sqrt(num); i++) {
                    if (num % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime) {
                    prostoe.push_back(num);
                }
            }
        }
        else {
            cout << "Число составное" << endl;
        }
    }

    return prostoe;
}
set<int> unikal(int mas[], int size) {
    set<int> uniqueelements;

    for (int i = 0; i < size; ++i) {
        uniqueelements.insert(mas[i]);
    }
    for (int i : uniqueelements)
    {
        cout << i << endl;
    }

    return uniqueelements;
}
vector<char> glas(string str)
{
    vector<char> vowels;
    const string vowelsString = "aeiouAEIOU";


    for (char ch : str) {

        if (vowelsString.find(ch) != string::npos) {
            vowels.push_back(ch);
        }
    }

    return vowels;
}
int find(const string str, const string substr) {
    size_t strLength = str.length();
    size_t substrLength = substr.length();

    if (substrLength > strLength) {
        return -1;
    }

    for (size_t i = 0; i <= strLength - substrLength; ++i) {
        if (str.substr(i, substrLength) == substr) {
            return static_cast<int>(i);
        }
    }
    return -1;
}
void cop(int mas[], int size) {

    int* cop = new int[size];


    for (int i = 0; i < size; i++) {
        cop[i] = mas[i];
    }

    cout << "Копия массива:" << endl;


    for (int i = 0; i < size; i++) {
        cout << cop[i] << endl;
    }

}
void sraw(int mas1[], int mas2[], int size)
{

    int* ukaz = mas1;
    int* ukaz2 = mas2;
    int result = 0;



    if (size < size) result = -1;
    else if (size > size) result = 1;
    else {

        for (int i = 0; i < size; ++i) {
            if (*(ukaz + i) < *(ukaz2 + i)) {
                result = -1;
                break;
            }
            else if (*(ukaz + i) > *(ukaz2 + i)) {
                result = 1;
                break;
            }
        }
    }

    if (result == 0) {
        std::cout << "0. Массивы равны." << std::endl;
    }
    else if (result == -1) {
        std::cout << "-1. Первый массив меньше второго." << std::endl;
    }
    else {
        std::cout << "1. Первый массив больше второго." << std::endl;
    }


}
void element(int mas[]) {
    int size = 0;


    while (*mas != 0) {
        size++;
        mas++;
    }
    cout << "Количество элементов в массиве: " << size << endl;
}
void deldup()
{
    vector<int> mas = { 1,2,2,4,4,1,2,3 };
    set<int> unikal;

    for (int num : mas) {
        unikal.insert(num);
    }

    for (int i : unikal) {
        cout << i << endl;
    }
}
void fibo(int a)
{
    int result = 0;


    vector<int> mass;

    for (int i = 0; i <= a; i++) {
        mass.push_back(result);
        result += ((pow((1 + sqrt(5)), i) - pow((1 - sqrt(5)), i)) / (pow(2, i) * sqrt(5)));
    }

    cout << "Числа Фибоначчи от 0 до n: " << endl;
    cout << 0 << endl;
    for (int i : mass) {
        cout << i << endl;
    }
}
void step(int a, int b)
{






    vector<int> powe;

    for (int i = 0; i <= b; ++i) {
        powe.push_back(pow(a, i));
    }

    cout << "Степени числа " << a << " до степени " << b << ":" << endl;
    for (int i = 0; i <= b; ++i) {
        cout << a << "^" << i << " = " << powe[i] << endl;
    }

}
void pere(string str)
{



    vector<char> mas;

    for (int i = size(str) - 1; i >= 0; i--) {
        mas.push_back(str[i]);
    }

    cout << "" << endl;

    for (char i : mas) {
        cout << i << endl;
    }
}
void sraw(int mas1[], int mas2[], int size)
{

    int* ukaz = mas1;
    int* ukaz2 = mas2;
    int result = 0;

    cout << "массив 1: ";
    for (int i = 0; i < size; ++i) {
        cout << ukaz[i] << " ";

    }
    cout << endl;
    cout << "массив 2: ";
    for (int i = 0; i < size; ++i) {
        cout << ukaz2[i] << " ";

    }
    cout << endl;

    if (size < size) result = -1;
    else if (size > size) result = 1;
    else {

        for (int i = 0; i < size; ++i) {
            if (*(ukaz + i) < *(ukaz2 + i)) {
                result = -1;
                break;
            }
            else if (*(ukaz + i) > *(ukaz2 + i)) {
                result = 1;
                break;
            }
        }
    }

    if (result == 0) {
        std::cout << "0. Массивы равны." << std::endl;
    }
    else if (result == -1) {
        std::cout << "-1. Первый массив меньше второго." << std::endl;
    }
    else {
        std::cout << "1. Первый массив больше второго." << std::endl;
    }

}
void konk()
{
    string str;

    cout << "Введите строку: " << endl;
    cin >> str;
    vector<char> mas;

    for (int i = size(str) - 1; i >= 0; i--) {
        mas.push_back(str[i]);
    }

    cout << "" << endl;

    for (char i : mas) {
        cout << i << endl;
    }
}
void zamena() {
    string str;
    char a, b;

    cout << "Введите строку: ";
    cin >> str;

    cout << "Введите символ для замены: ";
    cin >> a;
    cout << "Введите заменяющий символ: ";
    cin >> b;

    vector<char> mas;

    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == a) {
            mas.push_back(b);
        }
        else {
            mas.push_back(str[i]);
        }
    }

    cout << "Результат: ";
    for (char i : mas) {
        cout << i;
    }
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "RU");
    int zad;
    int mas[]{ 13, 15, 22, 54, 2 };
    int* ukaz{ mas };
    int sizemas = sizeof(mas) / sizeof(mas[0]);
    cout << "Введите номер задания";
    cin >> zad;
    switch (zad)
    {
    case 1:
    {
        cout << "сумма чисел массива = " << summas(ukaz, sizemas);
        break;
    }
    case 2:
    {
        cout << maxmas(mas, sizemas);
        break;
    }
    case 3:
    {
        cout << minmas(mas, sizemas);
        break;
    }
    case 4: {

        obratno(mas, sizemas);
        break;
    }
    case 5: {

        cout << poisk(mas, sizemas, 76);
        break;
    }
    case 6:
    {

        delmas(mas, sizemas, 2);
        break;
    }
    case 7:
    {


        int mas1[]{ 1,2,3,4,5 };
        int mas2[]{ 6,7,8,9,10 };
        vector <int> result = obedinenie(mas1, mas2);
        for (int i = 0; i < 10; i++)
        {
            cout << result[i] << ", ";
        }
        break;
    }
    case 8:
    {

        int mas[5]{ 1,3,2,1,5 };
        int sizemas = sizeof(mas) / sizeof(mas[0]);
        set<int> unique = unikal(mas, sizemas);
        for (int i : unique)
        {
            cout << i << endl;
        }
        break;
    }
    case 9: {

        sort(mas, sizemas);
        break;
    }
    case 10: {
        int mas1[]{ 1,2,3,4,5 };
        int mas2[]{ 6,7,8,9,10 };
        cout << sumobedinenie(mas1, mas2);
        break;
    }
    case 11:
    {
        cop(mas, sizemas);
        break;
    }
    case 12: {
        int mas1[]{ 1,2,3,4,5 };
        int mas2[]{ 6,7,8,9,10 };
        sraw(mas1, mas2, sizemas);
        break;
    }
    case 13: {

        obratno(mas, sizemas);
        break;
    }
    case 14: {
        int mas[] = { 1, 2, 3, 4, 5, 0 };
        element(mas);
        break;
    }
    case 15: {
        deldup();
        break;
    }
    case 16: {
        int fac{ 10 };
        vector<int> result = facto(fac);
        for (int i = 0; i < size(result); i++)
        {
            cout << result[i] << ", ";
        }
        break;
    }
    case 17: {
        fibo(12);
        break;
    }
    case 18: {
        step(12, 3);
        break;
    }

    case 19: {
        int pro{ 13 };
        vector<int> result = prosto(pro);
        for (int i = 0; i < size(result); i++)
        {
            cout << result[i] << ", ";
        }
        break;
    }
    case 20: {
        string str1{ "sdasweq" };
        pere(str1);
        break;
    }
    case 21: {
        int mas1[]{ 1,2,3,4,5 };
        int mas2[]{ 6,7,8,9,10 };
        sraw(mas1, mas2, 5);
        break;
    }
    case 22:
    {
        string slovo{ "sisakaka" };
        vector<char> result = glas(slovo);
        for (int i = 0; i < size(result); i++)
        {
            cout << result[i] << ", ";
        }
        break;
    }
    case 23:
        zamena();
        break;
    case 24:
        konk();
        break;
    case 25:
    {
        string str{ "janehochu" };
        string str2{ "hochu" };
        cout << find(str, str2);

        break;
    }

    }

}