#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int Q_no = 1;
int correct = 0;
int wrong = 0;
bool ask[10] = {true, true, true, true, true, true, true, true, true, true};

void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();

int main()
{
    display();
    return 0;
}

void display()
{
    system("cls");
    cout << "Question No: " << Q_no << "\t\tCorrect Answers: " << correct << "\t\tWrong Answers: " << wrong << endl
         << endl;
    display_random_question();
}

void display_random_question()
{
    srand(time(0));
    bool is_question_remaining = false;
    for (int i = 0; i < 10; i++)
    {
        if (ask[i])
        {
            is_question_remaining = true;
            break;
        }
    }

    if (!is_question_remaining)
    {
        result();
        return;
    }

    while (true)
    {
        int no = rand() % 10;
        if (ask[no])
        {
            ask[no] = false;
            switch (no)
            {
            case 0:
                question("1. Who are the principals of Government Engineering College Ajmer? ", "Anurag Garg", "Rekha Mehara", "Modani", "Vishnu Priya", 'b');
                break;
            case 1:
                question("2. Which language supports object-oriented programming techniques?", "C language", "C++ language", "Java language", "Fortran language", 'b');
                break;
            case 2:
                question("3. Who is the Prime Minister of India?", "Rahul Gandhi", "Ashok Gehlot", "Modi", "Naidu", 'c');
                break;
            case 3:
                question("4. The mass of a star is two times the mass of the Sun. How will it come to an end?", "Neutron Star", "Black Hole", "White Dwarf", "Red Giant", 'a');
                break;
            case 4:
                question("5. When the speed of a car is doubled, what should be the braking force of the car to stop it at the same distance?", "Two times", "Four times", "Half", "One fourth", 'b');
                break;
            case 5:
                question("6. The energy by virtue of its position is known as:", "Kinetic energy", "Potential energy", "Internal energy", "Heat energy", 'b');
                break;
            case 6:
                question("7. What happens to the viscosity of a liquid with an increase in temperature?", "It increases", "It decreases", "It may increase or decrease", "No change", 'b');
                break;
            case 7:
                question("8. What do we call the reaction when an acid and a base react together to form salt and water?", "Reduction Reaction", "Oxidation Reaction", "Neutralisation Reaction", "Combination Reaction", 'c');
                break;
            case 8:
                question("9. Which of the following non-metals is the most electronegative?", "Neon", "Fluorine", "Chlorine", "Oxygen", 'b');
                break;
            case 9:
                question("10. Which is the governing body of the Department of Atomic Energy in India?", "Atomic Energy Commission of India", "NITI Aayog", "Department of Space", "DRDO", 'a');
                break;

            default:
                break;
            }
            break;
        }
    }
}

void result()
{
    system("cls");
    cout << "Total question = " << Q_no - 1 << endl;
    cout << "Correct answers = " << correct << endl;
    cout << "Wrong answers = " << wrong << endl;
    if (correct > wrong)
        cout << "Result = Pass" << endl;
    else if (wrong > correct)
        cout << "Result = Fail" << endl;
    else
        cout << "Result = Tie" << endl;
}

void question(string question, string a, string b, string c, string d, char correct_answer)
{
    cout << question << endl;
    cout << "a.\t" << a << endl;
    cout << "b.\t" << b << endl;
    cout << "c.\t" << c << endl;
    cout << "d.\t" << d << endl;
    char answer;
    cin >> answer;
    if (tolower(answer) == correct_answer)
        correct++;
    else
        wrong++;
    Q_no++;
    display();
}
