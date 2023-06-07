#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int Q_no = 1;
int correct = 0;
int wrong = 0;
bool ask[10] = (true, true, true, true, true, true, true, true, true, true);

void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();

int main()
{

    return 0;
}
void display()
{
    system("cls");
    cout << "Question No:"
         << "\t\tcorrect Answers:" << correct << "\t\twrong asnswer:" << wrong << endl
         << endl;
    display_random_quation();
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
    while (is_question_remaining)
    {
        int no = rand() % 10;
        if (ask[no])
        {
            ask[no] = false;
            switch (no)
            {
            case 0:
                question("1. Who are the principal of government engineering college ajmer? ", "anurag garg", "rekha mehara", "modani", "vishnu priya", 'b');
                break;
            case 1:
                question("2. whinch language support the object oriented programing technique?", "c language", "c++ language", "java language", "fortran language", 'b');
                break;
            case 2:
                question("3. who is the prime minister of india", "rahul gandi", "ashok gahlot", "Modi", "naidu", 'c');
                break;
            case 3:
                question("4. The mass of a star is two times the mass of the Sun. How will it come to an end?", "Neutron Star ", "Blackhole", "White Dwarf ", "Red Giant", 'a');
                break;
            case 4:
                question("5. When the speed of a car is doubled then what should be the braking force of the car to stop it at the same distance?", "two times ", "four times", "half", "one fourth", 'b');
                break;
            case 5:
                question("6. The energy by virtue of its position is known as:", "Kinetic energy", "Potential energy", "Internal energy", "Heat energy", 'b');
                break;
            case 6:
                question("7. What happens to the viscosity of a liquid with increase in temperature?", "it increases", "it decreases", "it may increase or decrease", "No change", 'b');
                break;
            case 7:
                question("8. What do we call the reaction when an acid and a base react together to form salt and water?", "Reduction Reaction", "Oxidation Reaction", "Neutralisation Reaction ", "Combination Reaction", 'c');
                break;
            case 8:
                question("9. Which of the following non-metals is most electronegative?", "Neon", "Fluorine", "Chlorine", "Oxygen", 'b');
                break;
            case 9:
                question("10. Which is the governing body of the Department of Atomic Energy in India?", "Atomic Energy Commission of India", "NITI Aayog", "Department of Space", "DRDO", 'a');
                break;

            default:
                break;
            }
        }
    }
    result();
}

void result()
{
    system("cls");
    cout << "Total question = " << Q_no - 1 << endl;
    cout << "correct answers = " << correct << endl;
    cout << "wring answers = " << wrong << end;
    if (correct > wrong)
        cout << "Result = pass" << endl;
    else if (wrong > correct)
        cout << "result = fail" << endl;
    else
        cout << "Result = Tie" << end;
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
    if (answer == correct_answer)
        correct++;
    else
        wrong++;
    Q_no++;
    display();
}
