// /*
// Write the program according to the following requirements:
// a) Declare the class Competitor containing: ID, FirstName, LastName, Points[5], and the
// member functions readData(), print(), average().
// (The array Points[5] stores the points/results of the competitor in 5 games/meetings.)
// b) The definitions of the functions are to be written outside the class.
// c) In the main() function, declare an array of 3 competitors (Competitor C[3]) and for each
// element read the data (values of the corresponding class members) using the readData()
// function. Then, using the print() function, display the data only for those competitors
// whose average points (calculated by average()) is greater than 5.0.
// */
// /*
// #include <iostream>
// #include <string>
// using namespace std;

// class Competitor{

//     public:
//     int ID;
//     string FirstName, LastName;
//     double points[5];

//     void readData();
//     void print();
//     double average();

// };

// void Competitor::readData(){
//     cout << "ID : "; cin >> ID;
//     cout << "Emri : "; cin >> FirstName;
//     cout << "Mbiemri : "; cin >> LastName;
//     cout << "Enter 5 points: ";
//     for(int i = 0; i < 5; i++){
//         cin >> points[i];
//     }

// }
// void Competitor::print(){
//     cout << "ID : " << ID << ", Emri : " << FirstName << ", Mbiemri : " << LastName << ", Points : ";
//     for(int i = 0; i < 5; i++){
//         cout << points[i] << " ";
//     }
//     cout << "Average : " << average() << endl;
// }
// double Competitor::average(){
//     double sum = 0;
//     for(int i = 0; i < 5; i++){
//         sum += points[i];
//     }

//     return sum/5.0;
// }

// int main(){
//     Competitor C[3];
//     for(int i = 0; i < 3; i++){
//         cout << "Give data for C[" << i+1 << "]" << endl;
//         C[i].readData();
//     }

//     for(int i = 0; i < 3; i++){
//         if(C[i].average() > 5.0){
//             C[i].print();
//         }
//     }

//     return 0;
// }
//     */

// /*
// Write a program according to the following requirements:
// a. Create a class called Car with the following private data attributes: string brand, int year,
// double price.
// b. Write the following constructors:
// - A default constructor that sets brand to "Unknown", year to 0, and price to 0.0.
// - A constructor that takes only the brand as a parameter and sets year to 0 and
// price to 0.0.
// - A constructor that takes brand and year as parameters and sets price to 0.0.
// - A constructor that takes all three parameters (brand, year, and price).
// c. Write a print() function that displays all the attributes.
// d. In main(), create four Car objects, one using each constructor, and print them all
// */
// /*
// #include <iostream>
// #include <string>
// using namespace std;

// class Car{
//    private:
//     string brand;
//     int year;
//     double price;
// public:
//     Car(){
//         brand = "Unknown";
//         year = 0;
//         price = 0.0;
//     }
//     Car(string b){
//         brand = b;
//         year = 0;
//         price = 0.0;
//     }
//     Car(string b, int y){
//         brand = b;
//         year = y;
//         price = 0.0;
//     }
//     Car(string b, int y, double p){
//         brand = b;
//         year = y;
//         price = p;
//     }

//     void print(){
//         cout << "Brand : " << brand << endl;
//         cout << "Year : " << year << endl;
//         cout << "Price : " << price << "$" << endl;
//         }
// };

// int main(){
//     Car C1;
//     Car C2("Toyota");
//     Car C3("Toyota", 2000);
//     Car C4("Toyota", 2000, 20.8);

//     C1.print();
//     C2.print();
//     C3.print();
//     C4.print();

//     return 0;
// }
//     */

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int *p, i;
// //     i = 5;
// //     cout << "\nValue of variable i: "
// //          << i
// //          << "\n";
// //     p = &i; // store the address of i in pointer p
// //     cout << "\nAddress stored in pointer p: "
// //          << p
// //          << "\n\n";
// //     return 0;
// // }

// /*
// Create a function named Calculate which takes two given numbers as parameters
// (e.g., a and b, where a < b) and, through pointers, returns three calculations as described
// below:
// 1. The sum of all numbers from a to b (including a and b).
// 2. The product of all numbers from a to b (including a and b).
// 3. Indicates (true/false) whether both numbers a and b are single-digit (True/False).
// 4. The main function (with variables: a, b, Sum_ab, Prod_ab, IsSingleDigit) calls the
// Calculate function. The values a and b are declared and initialized with fixed values (a
// less than b).
// */

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // void Calculate(int a, int b, int *sum_ab, int *prod_ab, bool *isSingleDigit)
// // {
// //     *sum_ab = 0;
// //     *prod_ab = 1;

// //     for (int i = a; i < b; i++)
// //     {
// //         cout << i << " ";
// //         *sum_ab += i;
// //         *prod_ab *= i;
// //     }

// //     if (a < 10 && b < 10)
// //     {
// //         *isSingleDigit = true;
// //     }
// //     else
// //     {
// //         *isSingleDigit = false;
// //     }
// // }

// // int main()
// // {
// //     int a = 1;
// //     int b = 10;
// //     int sum_ab;
// //     int prod_ab;
// //     bool isSingleDigit;

// //     Calculate(a, b, &sum_ab, &prod_ab, &isSingleDigit);

// //     cout << "Sum from a = " << a << " to b = " << b << ", sum = " << sum_ab << endl;
// //     cout << "Product from a = " << a << " to b = " << b << ", product = " << prod_ab << endl;

// //     if (isSingleDigit)
// //     {
// //         cout << "a and b are single digits, a = " << a << ", b = " << b << endl;
// //     }
// //     else
// //     {
// //         cout << "a and/or b are not single digits a = " << a << ", b = " << b << endl;
// //     }

// //     return 0;
// // }

// /*
// Të krijohet një program në C++ me funksionin main, sipas kërkesave në vijim:
// a. Të deklarohet një vektor i cili mund të ruaj numra të plotë (STL, vector).
// b. Të lexohen 7 numra të plotë nga tastiera dhe të shtohen brenda vektorit të deklaruar në
// pikën a).
// c. Të gjendet dhe shtypet vlera mesatare e anëtarit të parë dhe të fundit të vektorit.
// d. Të gjendet dhe të shtypet vlera e anëtarit në mes të vektorit
// */

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {
// //     vector<int> numra;
// //     int temp;

// //     cout << "Jepni 7 numra te plote : " << endl;
// //     for (int i = 0; i < 7; i++)
// //     {
// //         cout << "Numri " << i + 1 << ": ";
// //         cin >> temp;
// //         numra.push_back(temp);
// //     }

// //     double mesatarja = (numra.front() + numra.back()) / 2.0;
// //     cout << "Mesatarja e numrit te pare dhe te fundit eshte " << mesatarja << endl;
// //     int mes = numra.size() / 2;
// //     cout << "Vlera e anetarit ne mes eshte " << numra[mes] << endl;;

// //     return 0;
// // }

// /*
//  Të shkruhet funksioni list<int> KrijoListen(int n) i cili pranon si argument një numër
// të plotë, e mbushë listën me n numra të plotë nga tastiera dhe si rezultat e kthen listen e krijuar.
// Gjatë leximit të numrave, nëse numri është tek, të shtohet në fillim të listës, ndërsa nëse numri
// është çift të shtohet në fund të listës.
// Nuk është i domosdoshëm main( ), mjafton vetëm të definohen funksionet përkatëse!
// */

// // #include <iostream>
// // #include <list>
// // using namespace std;

// // list<int> KrijoListen(int n){
// //     list<int> listaIme;
// //     int numri;

// //     cout << "Jepni " << n << " numra te plote: " << endl;

// //     for(int i = 0; i < n; i++){
// //         cout << "Numri " << i+1 << ": ";
// //         cin >> numri;

// //     if(numri % 2 != 0){
// //         listaIme.push_front(numri);
// //     }else{
// //         listaIme.push_back(numri);
// //     }
// //     }

// //     return listaIme;

// // }

// /*
// Pjesa 1: Klasa dhe Konstruktorët
// a. Krijoni klasën Student me këto atribute private: string emri, int mosha, dhe një varg (array) double notat[3].
// b. Shkruani konstruktorët:

//     Një default constructor (emri "I panjohur", mosha 0, notat 0.0).

//     Një konstruktor që pranon të gjitha parametrat.
//     c. Shkruani funksionet:

//     lexoTeDhenat(): Lexon emrin, moshën dhe 3 notat nga tastiera.

//     mesatarja(): Kthen mesataren e 3 notave të studentit.

//     print(): Shtyp të gjitha të dhënat e studentit.

// Pjesa 2: Pointerët dhe Kalkulimet
// d. Shkruani një funksion AnalizoStudentin i cili pranon si parametër një objekt të klasës Student dhe përmes pointerëve kthen:

//     Sumën e notave të tij.

//     Një vlerë bool që tregon nëse studenti është kalues (nëse mesatarja > 5.0).

// Pjesa 3: STL (Vector dhe List)
// e. Në main():

//     Krijoni një vector me 3 studentë dhe mbushni të dhënat e tyre (duke përdorur lexoTeDhenat()).

//     Krijoni një list<string> (STL List). Për secilin student në vektor, nëse është "kalues", shtoni emrin e tij në fillim të listës, nëse nuk është, shtoni emrin në fund të listës.
// */

// // #include <iostream>
// // #include <vector>
// // #include <list>
// // #include <string>
// // using namespace std;

// // class Student
// // {
// // private:
// //     string emri;
// //     int mosha;
// //     double notat[3];

// // public:
// //     Student()
// //     {
// //         emri = "Panjohur";
// //         mosha = 0;
// //         for (int i = 0; i < 3; i++)
// //             notat[i] = 0.0;
// //     }

// //     Student(string e, int m, double n[])
// //     {
// //         emri = e;
// //         mosha = m;
// //         for (int i = 0; i < 3; i++)
// //             notat[i] = n[i];
// //     }

// //     void lexoTeDhenat();
// //     double mesatarja();
// //     void print();

// //     string getEmri() {return emri;}
// // };

// // void Student::lexoTeDhenat()
// // {
// //     cout << "Emri : ";
// //     cin >> emri;
// //     cout << "Mosha : ";
// //     cin >> mosha;
// //     cout << "Jepni 3 nota : " << endl;
// //     for (int i = 0; i < 3; i++)
// //     {
// //         cin >> notat[i];
// //     }
// // }

// // void Student::print()
// // {
// //     cout << "Emri : " << emri << endl;
// //     cout << "Mosha : " << mosha << endl;
// //     cout << "Notat : ";
// //     for (int i = 0; i < 3; i++)
// //     {
// //         cout << notat[i] << endl;
// //     }
// // }
// // double Student::mesatarja()
// // {
// //     int sum = 0;
// //     for (int i = 0; i < 3; i++)
// //     {
// //         sum += notat[i];
// //     }

// //     return sum / 3.0;
// // }

// // void AnalizoStudentin(Student s, double *sum, bool *kalon)
// // {
// //     *sum = s.mesatarja() * 3;
// //     if(s.mesatarja() > 5){
// //         *kalon = true;
// //     }else{
// //         *kalon = false;
// //     }

// // }

// // int main(){
// //     vector<Student> grupi;
// //     list<string> listaEmrave;

// //     for(int i = 0; i < 3; i++){
// //         cout << "Shenoni te dhenat per studentin " << i+1 << ": " << endl;
// //         Student temp;
// //         temp.lexoTeDhenat();
// //         grupi.push_back(temp);
// //     }

// //     cout << "Rezultatet e analizes " << endl;
// //     for(int i = 0; i < 3; i++){
// //         double totali = 0;
// //         bool statusi = false;
// //         AnalizoStudentin(grupi[i], &totali,&statusi);
// //         if(statusi){
// //             listaEmrave.push_front(grupi[i].getEmri());
// //         }else{
// //             listaEmrave.push_back(grupi[i].getEmri());
// //         }
// //     }

// //     cout << "Renditja ne liste (kaluesit ne fillim): " << endl;
// //     for(string emri : listaEmrave){
// //         cout << emri << " ";
// //     }
// //     cout << endl;

// //     return 0;
// // }

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {
// //     vector<int> numra;
// //     int temp;
// //     cout << "Jepni 5 numra : ";
// //     for (int i = 0; i < 5; i++)
// //     {
// //         cin >> temp;
// //         numra.push_back(temp);
// //     }
// //     numra.pop_back();

// //     numra.insert(numra.begin(), 100);

// //     cout << "Vektori pas ndryshimeve: ";
// //     for(int i = 0 ; i < numra.size(); i++){
// //         cout << numra[i] << " ";
// //     }

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // double LlogaritDiferencen(int a, int b, int *rezultati)
// // {
// //     *rezultati = a - b;

// //     return *rezultati;
// // }

// // int main()
// // {
// //     int x = 50;
// //     int y = 20;
// //     int diff = 0;
// //     LlogaritDiferencen(x, y, &diff);

// //     cout << diff;

// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Product
// // {
// // private:
// //     string emri;
// //     double cmimi;

// // public:
// //     void vendosTeDhenat(string e, double c);
// //     void shfaq();
// //     double aplikoZbritje(double perqindja);
// // };

// // void Product::vendosTeDhenat(string e, double c)
// // {
// //     emri = e;
// //     cmimi = c;
// // }

// // void Product::shfaq()
// // {
// //     cout << "Emri : " << emri << endl;
// //     cout << "Cmimi : " << cmimi << endl;

// // }
// // double Product::aplikoZbritje(double perqindja){
// //     perqindja = perqindja / 100;
// //     cmimi = cmimi - (cmimi * perqindja);

// //     return cmimi;
// // }

// // int main(){
// //     Product p;
// //     p.vendosTeDhenat("laptop", 800);
// //     p.shfaq();
// //     p.aplikoZbritje(20);
// //     p.shfaq();

// //     return 0;
// // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Student
// // {
// // private:
// //     int ID;
// //     string emri, mbiemri;
// //     double nota[5];

// // public:
// //     Student();

// //     void shtyp();
// //     double nMes();
// // };

// // Student::Student()
// // {

// //     cout << "ID : ";
// //     cin >> ID;
// //     cout << "Emri : ";
// //     cin >> emri;
// //     cout << "Mbiemri : ";
// //     cin >> mbiemri;
// //     cout << "Shenoni notat : ";
// //     for (int i = 0; i < 5; i++)
// //     {
// //         if (nota[i] > 5 || nota[i] <= 10 )
// //         {
// //             cin >> nota[i];
// //         }
// //         else
// //         {
// //             cout << "Nota e japur eshte me e vogel se 6" << endl;
// //             i--;
// //         }
// //     }
// // }
// // void Student::shtyp(){
// //     cout << "ID : " << ID << endl;
// //     cout << "Emri : " << emri << endl;
// //     cout << "Mbiemri : " << mbiemri << endl;
// //     cout << "Notat: ";
// //     for(int i = 0; i < 5; i++){
// //         cout << nota[i] << endl;
// //     }

// // }
// // double Student::nMes(){
// //     int sum = 0;
// //     for(int i = 0; i < 5; i++){
// //         sum += nota[i];
// //     }
// //     return sum / 5.0;
// // }

// // int main(){
// //     Student S[3];
// //     cout << "Studentet me note mesatare me te larte se 8 : ";
// //     for(int i = 0; i < 3; i++){
// //         if(S[i].nMes() >= 8){
// //             S[i].shtyp();
// //         }
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> Numra;

//     cout << "Jepni 7 vlera : ";
//     for (int i = 0; i < 7; i++)
//     {
//     int numri;
//     cin >> numri;
//     Numra.push_back(numri);
//     }
//     double mesatarja_numrave_pare_fundit = (Numra.front() + Numra.back()) / 2.0;

//     int indeksi_mesit = Numra.size() / 2.0;

//     cout << "Mesatarja e numrave te pare dhe te fundit eshte :" << mesatarja_numrave_pare_fundit << endl;
//     cout << "Numri ne mes eshte : " << indeksi_mesit << " dhe numri ne ate pozit eshte " << Numra[indeksi_mesit];

//     return 0;
//

// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     const int n = 6;
//     int v[n] = {1, -2, 3, -4, 5, -6};
//     stack<int> steku1;
//     for (int i = 0; i < n; i++)
//     {
//         steku1.push(0);
//         if (v[i] > 0)
//         {
//             steku1.push(2 * v[i]);
//         }
//     }
//     while (!steku1.empty())
//     {
//         cout << steku1.top() << " ";
//         steku1.pop();
//     }
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;
// stack<int> krijo_stekun(int n)
// {
//     stack<int> steku;
//     int x[6] = {1, 2, 3, 4, 5, 6};
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             steku.push(x[i]);
//         }
//     }
//     return steku;
// }
// void shtyp(stack<int> &steku)
// {
//     while (!steku.empty())
//     {
//         cout << steku.top() << " ";
//         steku.pop();
//     }
// }
// int main()
// {
//     stack<int> s1;
//     s1 = krijo_stekun(6);
//     shtyp(s1);
//     return 0;
// }

/*
Here I started learning for the 2nd kollokfium that i have on the 11th of june 2026
Whatever is down from here i need to learn


*/
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<string> cars = {"BMW","Mercedes","Audi"};
//     cout << "Printing the first car by index : " << cars[0] << endl;
//     cout << "Printing the second car by index : " << cars[1] << endl;
//     cout << "Printing the third car by index : " << cars[2] << endl;

//     cout << "Printing the first car by library function : " << cars.front() << endl;
//     cout << "Printing the last car by library function : " << cars.back() << endl;

//     cout << "Printing any car with indexing : " << cars.at(1) << endl;

//     cout << "Printing all the cars with a for loop : " << endl;

//     for(int i = 0; i < cars.size(); i++){
//         cout << cars[i] << endl;
//     }
//     cout << "Printing cars with a for each loop : " << endl;
//     for(string car : cars){
//         cout << car << endl;
//     }

//     cout << endl << "Changing an element: " << endl;
//     cars.at(0) = "Ford";

//     for(string car : cars){
//         cout << car << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<string> cars = {"BMW","Mercedes","Audi"};
//     cars.push_back("Tesla");
//     cars.push_back("VW");

//     cars.pop_back();

//     for(string car : cars){
//         cout << car << endl;
//     }
//     cout << "Size of vector : " << cars.size() << endl;

//     vector<string> planet = {};
//     if(planet.empty()){
//         cout << "The planet vector is empty" << endl;
//     }

//     vector<string> organizations;
//     if(planet.empty()){
//         cout << "The organizations vector is empty" << endl;
//     }

//     return 0;

// }

// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
//     list<string> cars = {"Volvo","BMW", "Ford", "Mazda"};
//     cars.push_front("Tesla");
//     cars.push_back("VW");

//     for(string car : cars){
//         cout << car << "\n";

//     }

//     cars.pop_front();
//     cars.pop_back();
//     return 0;
// }

/*
Të krijohet një program në C++ me funksionin main, sipas kërkesave në vijim:
a. Të deklarohet një vektor i cili mund të ruaj numra të plotë (STL, vector).
b. Të lexohen 7 numra të plotë nga tastiera dhe të shtohen brenda vektorit të deklaruar në
pikën a).
c. Të gjendet dhe shtypet vlera mesatare e anëtarit të parë dhe të fundit të vektorit.
d. Të gjendet dhe të shtypet vlera e anëtarit në mes të vektor
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> numra;
//     cout << "Jepni vlere per 7 numra : " << endl;
//     for(int i = 0; i < 7; i++){
//         int numri;
//         cin >> numri;

//         numra.push_back(numri);

//     }

//     double mesatarja_fillim_fund = (numra.front() + numra.back()) / 2.0;
//     int mesi = numra.size() / 2.0;

//     cout << "Mesatarja e dy numrave ne fillim dhe ne fund eshte : " << mesatarja_fillim_fund << endl;
//     cout << "Pozita e numrit te mesit eshte " << mesi << " dhe vlera ne ate eshte " << numra[mesi] << endl;

//     return 0;
// }

/*
Të shkruhet funksioni list<int> KrijoListen(int n) i cili pranon si argument një numër
të plotë, e mbushë listën me n numra të plotë nga tastiera dhe si rezultat e kthen listen e krijuar.
Gjatë leximit të numrave, nëse numri është tek, të shtohet në fillim të listës, ndërsa nëse numri
është çift të shtohet në fund të listës.
Nuk është i domosdoshëm main( ), mjafton vetëm të definohen funksionet përkatëse!!
*/

// #include <iostream>
// #include <list>
// using namespace std;

// list<int> KrijoListen(int n){
//     list<int> rezultati;
//     cout << "Jepni " << n << " vlera : " << endl;
//     for(int i = 0; i < n; i++){
//         int numri;
//         cin >> numri;
//         if(numri % 2 == 0){
//             rezultati.push_back(numri);
//         }else{
//             rezultati.push_front(numri);
//         }
//     }

//     return rezultati;

// }

// int main(){
//     int saNumra;
//     cout << "Sa numra deshironi te shtoni ne liste : "; cin >> saNumra;
//     list<int> ListaIme = KrijoListen(saNumra);

//     cout << "Lista sipas renditjes : " << endl;
//     for(int x : ListaIme){
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> Lista1, Lista2;
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i > 5)
//         {
//             Lista1.push_front(2 * i);
//         }
//         else
//         {
//             Lista2.push_back(i);
//         }
//     }
//     cout << "Vlerat nga Lista1 dhe Lista2:\n";
//     while (!Lista1.empty() && !Lista2.empty())
//     {
//         cout << Lista2.front() << " " << Lista1.front() << " ";
//         Lista2.pop_front();
//         Lista1.pop_front();
//     }
//     cout << "\n";
//     return 0;
// }

// Operacione me Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> nums;

//     nums.push(1);
//     nums.push(2);
//     nums.push(3);
//     nums.pop();

//     cout << "Stack size : " << nums.size() << endl;
//     cout << "Stack is empty " << nums.empty() << endl;

//     while(!nums.empty()){
//         cout << nums.top() << " ";
//         nums.pop();
//     }
//     cout << endl;

//     cout << "Stack size: " << nums.size() << endl;
//     cout << "Stack is empty : " << nums.empty() << endl;

//     return 0;
// }

/*
Të shkruhet programi në C++, i cili mundëson mbushjen e një steku me numrat që
plotëpjestohen me 4, e të cilët janë në diapazonin prej numrit X1 deri te numri X2 (duke i
përfshirë X1 dhe X2). Numrat X1 dhe X2 duhet të mundësohet që përdoruesi i programit t’i jep
përmes tastierës. Në fund, numrat e vendosur në stek të shtypen në ekran në një rresht të
vetëm (në drejtim horizontal). (Për krijimin e strukturës së të dhënave stek të përdoret libraria
<stack> nga Standard Template Library (STL) e gjuhës programuese C++)
*/

// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){
//     stack<int> nums;
//     int x1,x2;
//     cout << "Jepni vlere per x1 : "; cin >> x1;
//     cout << "Jepni vlere per x2 : "; cin >> x2;

//     for(int i = x1; i <= x2; i++){
//         if(i % 4 == 0){
//             nums.push(i);
//         }
//     }

//     while(!nums.empty()){
//         cout << nums.top() << " ";
//         nums.pop();
//     }

//     cout << endl;

//     return 0;
// }

// queue mesimi i saj dhe operacione me te

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     queue<int> nums;

//     nums.push(1);
//     nums.push(2);
//     nums.push(3);

//     cout << nums.front() << endl;
//     cout << nums.back() << endl;

//     nums.front() = 100;
//     nums.back() = 300;

//     cout << nums.front() << endl;
//     cout << nums.back() << endl;

//     cout << "Queue size : " << nums.size() << endl;
//     cout << "Queue is empty : " << nums.empty() << endl;

//     while(!nums.empty()){
//         cout << nums.front() << " ";
//         nums.pop();
//     }

//     return 0;

// }

// #include  <iostream>
// #include <stack>
// #include <vector>
// #include <string>
// using namespace std;

// int main(){
//     string ops[5] = {"5","2","C","D","+"};
//     stack<int> nums;
//     for(int i = 0; i < 5; i++){
//         if(ops[i] == "C"){
//             nums.pop();
//         }else if(ops[i] == "D"){
//             nums.push(nums.top() * 2);
//         }else if(ops[i] == "+"){
//             int top_score = nums.top();
//             nums.pop();
//             int previousTopScore = nums.top();
//             nums.push(top_score);
//             nums.push(previousTopScore + top_score);

//         }else{
//             nums.push(stoi(ops[i]));
//         }
//     }
//     int sum = 0;
//     while(!nums.empty()){
//         sum += nums.top();
//         nums.pop();
//     }

//     cout << "Sum = " << sum << endl;

//     return 0;
// }

// #include <iostream>
// #include <cctype>
// #include <string>
// #include <stack>
// using namespace std;

// class Solution
// {
// public:
//     string clearDigits(string s)
//     {
//         string output;
//         for (char c : s)
//         {
//             if (isdigit(c))
//             {
//                 output.pop_back();
//             }
//             else
//             {
//                 output.push_back(c);
//             }
//         }
//         return output;
//     }
// };

// int main(){
//     Solution s;
//     cout << "Test case 1 : " << s.clearDigits("abc") << endl;
//     cout << "Test case 2 : " << s.clearDigits("cb34") << endl;

//     return 0;
// }

// #include <iostream>
// #include <cctype>
// #include <string>
// #include <stack>
// using namespace std;

// class Solution{
//     public:
//         string reversePrefix(string word, char ch){
//             stack<char> s;
//             int k = 0;
//             bool found = false;

//             for(int i = 0; i < word.size(); i++){
//                 s.push(word[i]);
//                 if(word[i] == ch){
//                     k = i+1;
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found) return word;

//             string first_part;
//             while(!s.empty()){
//                 first_part += s.top();
//                 s.pop();
//             }

//             string second_part;
//             for(int i = k; i < word.size(); i++){
//                 second_part += word[i];
//             }

//             return first_part + second_part;

//         }
// };

// int main(){
//     Solution solver;

//     string fjala1 = "abcdefd";
//     char shkronja1 = 'd';

//     string fjala2 = "fiekujcoders";
//     char shkronja2 = 'x';

//     string rezultati1 = solver.reversePrefix(fjala1, shkronja1);
//     string rezultati2 = solver.reversePrefix(fjala2, shkronja2);

//     cout << "Rasti 1:" << endl;
//     cout << "Fjala origjinale: " << fjala1 << " (Karakteri: '" << shkronja1 << "')" << endl;
//     cout << "Pas ndryshimit:   " << rezultati1 << endl;

//     cout << "\n-----------------------------\n" << endl;

//     cout << "Rasti 2 (Kur nuk gjendet karakteri):" << endl;
//     cout << "Fjala origjinale: " << fjala2 << " (Karakteri: '" << shkronja2 << "')" << endl;
//     cout << "Pas ndryshimit:   " << rezultati2 << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <cctype>
// #include <string>
// using namespace std;

// int main(){
//     string s_string = "123y";
//     stack<char> s_stack;

//     for(char c : s_string){
//         s_stack.push(c);
//     }

//     string reversed_string;
//     while (!s_stack.empty()){
//         reversed_string += s_stack.top();
//         s_stack.pop();
//     }

//     cout << "Original script : " << s_string << endl;
//     cout << "Reversed string : " << reversed_string << endl;

//     return 0;
// }

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main(){
//     string s= "(1+(2*3)+((8)/4))+1";
//     stack<char> s_stack;
//     vector<int> counter;
//     int k = 0;
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == '('){
//             k++;
//             s_stack.push('(');
//         }else if(s[i] == ')'){
//             k--;
//             s_stack.pop();
//         }
//         counter.push_back(k);
//     }

//     int max = counter[0];
//     for(int i = 1; i<counter.size(); i++){
//         if(counter[i] > max){
//             max = counter[i];
//         }
//     }

//     cout << "MAX : " << max << endl;

//     return 0;

// }

/*
ë shkruhet programi në C++, i cili simulon një radhë në një bankë. Përdoruesi
fillimisht jep numrin N të klientëve, dhe pastaj jep emrat e N klientëve që hyjnë në radhë sipas
radhës së arritjes. Pas kësaj, programi duhet të shtypë në ekran rendin sipas të cilit klientët do
të shërbehen (nga i pari që ka hyrë deri tek i fundit). (Për krijimin e strukturës së të dhënave
radhë të përdoret libraria <queue> nga Standard Template Library (STL) e gjuhës programuese
C++)
*/

// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;

// int main(){
//     queue<string> banka;
//     int n;
//     string emri;

//     cout << "Numri i klienteve : "; cin >> n;

//     for(int i = 0; i < n; i++){
//         cout << "Emri i klientit " << i+1 << ": ";
//         cin >> emri;
//         banka.push(emri);
//     }

//     cout << "Rendi i sherbimit : ";
//     while (!banka.empty()){
//         cout << banka.front() << " ";
//         banka.pop();
//     }

//     return 0;

// }

// #include <iostream>
// using namespace std;

// struct TreeNode{
//     int value;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(int v){
//         value = v;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// int main(){
//     TreeNode* root = new TreeNode(10);
//     root->left = new TreeNode(8);
//     root->left->right = new TreeNode(9);

//     root->right = new TreeNode(20);
//     root->right->left = new TreeNode(15);
//     root->right->right = new TreeNode(21);

//     cout << "Root : " << root->value << endl;
//     cout << "  Left : " << root->left->value << endl;
//     cout << "    Right : " << root->left->right->value << endl;
//     cout << "  Right : " << root->right->value << endl;
//     cout << "    Left : " << root->right->left->value << endl;
//     cout << "    Right : " << root->right->right->value << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int linear_search(vector<int> &nums, int target){
//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] == target){
//             return i;
//         }

//     }

//     return -1;
// }

// int main(){
//     vector<int> nums = {4,7,5,2,1};
//     int target = 2;
//     int index = linear_search(nums,target);

//     if(index == -1){
//         cout << "The element was not found " << endl;
//     }else{
//         cout << "The element was found at " << index << " index." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int binary_search(vector<int> &nums, int target)
// {
//     int low = 0;
//     int high = nums.size() - 1;
//     while (low <= high)
//     {
//         int middle = low + (high - low) / 2;
//         if (nums[middle] == target)
//         {
//             return middle;
//         }
//         else if (target < nums[middle])
//         {
//             high = middle - 1;
//         }
//         else
//         {
//             low = middle + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> nums = {1, 4, 5, 7, 8, 10};
//     int target = 7;
//     int index = binary_search(nums, target);
//     if (index == -1)
//     {
//         cout << "The target was not found!" << endl;
//     }
//     else
//     {
//         cout << "The target was found at " << index << " index." << endl;
//     }
//     return 0;
// }

//
//  #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums = {1,2,3,1};
//     bool found_element = false;

//     for(int i = 0; i < nums.size(); i++){
//         for(int j = 0; j < nums.size(); j++){
//             if(i == j){
//                 continue;
//             }
//             if(nums[i] == nums[j]){
//                 found_element = true;
//                 break;
//             }

//         }
//         if(found_element) break;
//     }

//     if(found_element){
//         cout << "Element found" << endl;
//     }else {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }

/*
Shkruani një funksion të thjeshtë në C++: void fshijElementetEPlota(stack<int> &s) i cili pranon si parametër një stak me numra të plotë dhe fshin nga staku të gjithë numrat që janë çift (p.sh. 2, 4, 6...). Elementet e tjera (tek) duhet të mbesin në stak.
(Hint për strukturën: Mund të përdorësh një stak ndihmës ose thjesht t'i largosh).
*/


// #include <iostream>
// #include <stack>
// using namespace std;


// void fshijElementetEPlota(stack<int> &s){
//     stack<int> ndihmes; 

    
//     while(!s.empty()) {
        
//         if(s.top() % 2 != 0) { 
//             ndihmes.push(s.top()); // Nëse është tek, e ruajmë te ndihmësi
//         }
//         s.pop(); 
//     }

   
//     while(!ndihmes.empty()) {
//         s.push(ndihmes.top());
//         ndihmes.pop();
//     }
// }

// int main(){
//     stack<int> steku;
   
//     steku.push(1);
//     steku.push(2);
//     steku.push(3);
//     steku.push(4);
//     steku.push(5);
//     steku.push(6);
    
//     fshijElementetEPlota(steku);

   
//     cout << "Elementet e mbetura (tek): ";
//     while(!steku.empty()) {
//         cout << steku.top() << " ";
//         steku.pop(); 
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    for(int i = 0;i < nums.size(); i++){
        int numra = nums.front();
        nums.pop();
        nums.push(numra);
        
    }    


    while(!nums.empty()){
        cout << nums.front();
        nums.pop();
    }


    return 0;
}
