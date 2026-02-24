#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
char superScriptTwo = 253;

int main()
{
    system("cls");
    cout << "Hello you are welcome to perimeter and area clculator" << endl;

    Sleep(4000);
    system("cls");
    cout << "What do you want to get of an shape perimeter or area?" << endl
         << ":";
    string PerimeterOrArea;
    cin >> PerimeterOrArea;
    system("cls");
    Sleep(2758);

    if (PerimeterOrArea == "Perimeter" || PerimeterOrArea == "perimeter")
    {
        string shapetype;
        cout << "Which shape is it square, rectangle, triangle or if none of these then type n otherwise type y" << endl
             << ":";
        cin >> shapetype;
        Sleep(3867);
        system("cls");
        if (shapetype == "y" || shapetype == "Y")
        {
            bool endORcontinue = false;
            string endORcontinueYorN;
            while (!endORcontinue)
            {

                string shape;
                cout << "Which shape is it?" << endl
                     << "square, rectangle, triangle" << endl
                     << ":";
                cin >> shape;

                Sleep(3589);
                system("cls");

                if (shape == "square" || shape == "Square")
                {
                    int lenthOfOneSideSquare;

                    cout << "Enter length of one side of it" << endl
                         << ":";
                    cin >> lenthOfOneSideSquare;

                    Sleep(2000);
                    system("cls");

                    int answer = lenthOfOneSideSquare * 4;
                    cout << "Perimeter of square = (length of one side x 4)\n                                             = " << answer << endl;
                    cout << "Do you want to calculate the perimeter of another shape.y/n\n"
                         << ":" << endl;

                    cin >> endORcontinueYorN;

                    if (endORcontinueYorN == "y" || endORcontinueYorN == "Y")
                    {
                        continue;
                    }
                    else if (endORcontinueYorN == "n" || endORcontinueYorN == "N")
                    {
                        break;
                    }
                }
                else if (shape == "rectangle" || shape == "Rectangle")
                {
                    int length, width;

                    cout << "Enter length of the rectangle.\n:";
                    cin >> length;

                    cout << "Enter width of the rectangle.\n:";
                    cin >> width;

                    Sleep(2000);
                    system("cls");

                    int ans = 2 * (length + width);
                    cout << "Perimeter of rectangale is = (2x(lxb))\n                                             = " << ans << endl;

                    cout << "Do you want to calculate the perimeter of another shape.y/n\n"
                         << ":";

                    cin >> endORcontinueYorN;

                    if (endORcontinueYorN == "y" || endORcontinueYorN == "Y")
                    {
                        continue;
                    }
                    else if (endORcontinueYorN == "n" || endORcontinueYorN == "N")
                    {
                        break;
                    }
                }
                else if (shape == "triangle" || shape == "Triangle")
                {
                    int side_1 = 0, side_2 = 0, side_3 = 0;

                    cout << "Enter length of each side seprated by spaces\n:";
                    cin >> side_1 >> side_2 >> side_3;

                    Sleep(2000);
                    system("cls");

                    int answer_t = side_1 + side_2 + side_3;
                    cout << "Perimeter of triangle is = (sum of all sides)\n                                             = " << answer_t << endl;

                    cout << "Do you want to calculate the perimeter of another shape.y/n\n"
                         << ":" << endl;

                    cin >> endORcontinueYorN;

                    if (endORcontinueYorN == "y" || endORcontinueYorN == "Y")
                    {
                        continue;
                    }
                    else if (endORcontinueYorN == "n" || endORcontinueYorN == "N")
                    {
                        break;
                    }
                }
            }
        }
        else if (shapetype == "n" || shapetype == "N") // Make it perfect. done✔
        {
            bool endORcontinue = false;
            string endORcontinueYorN;
            while (!endORcontinue)
            {
                int Num_of_sides;
                cout << "How many sides does it have?" << endl
                     << ":";
                cin >> Num_of_sides;

                int answer_multi_line = 0;
                int ii = 0;
                int answer_calc;
                for (int i = 0; i < Num_of_sides; ++i)
                {
                    if (i == 0)
                    {
                        cout << "Enter the length of frist side." << endl
                             << ":";
                        ++ii;
                    }
                    else if (i == 1 || i >= 1)
                    {
                        cout << "Enter the lenth of other side." << endl
                             << ":";
                    }

                    cin >> answer_calc;
                    answer_multi_line += answer_calc;
                }

                cout << "Perimeter of the shape is = (sum of all sides) " << endl;
                cout << "                                             = " << answer_multi_line << endl;
                Sleep(10567);
                system("cls");
                cout << "Do you want to calculate the perimeter of another shape.y/n" << ":" << endl;
                cin >> endORcontinueYorN;

                if (endORcontinueYorN == "y" || endORcontinueYorN == "Y")
                {
                    continue;
                }
                else if (endORcontinueYorN == "n" || endORcontinueYorN == "N")
                {
                    break;
                }
            }
        }
    }
    else if (PerimeterOrArea == "Arera" || PerimeterOrArea == "area") // start making area calc  date 13/12/2024
    {
        string shapeType = ""; // STARTED AT 8:10 AM
        cout << "Which shape is it square, rectangle, triangle if it is one of these type 'y' if none of these type 'n'?" << endl
             << ":";
        cin >> shapeType;

        Sleep(3867);
        system("cls");

        if (shapeType == "y" || shapeType == "Y")
        {
            // while loop vars
            bool END_OR_CONTINUE = false;
            string END_OR_CONTINUE_YorN = ""; // progress of 13/12/2024 in (10 mins)

            // super script two

            while (!END_OR_CONTINUE)
            { // STARTED AT 3:56 PM
                string whichShapeIsIt = "";

                cout << "Which shape is it?" << endl
                     << "square, rectangle, triangle, circle" << endl
                     << ":";
                cin >> whichShapeIsIt;

                system("cls");
                Sleep(3250);

                if (whichShapeIsIt == "square" || whichShapeIsIt == "square")
                {
                    int lengthOfOneside = 0;

                    cout << "Enter length of one side of it." << endl
                         << ":";
                    cin >> lengthOfOneside;

                    Sleep(2576);
                    system("cls");

                    int Answersquare = lengthOfOneside * lengthOfOneside;

                    cout << "Area of square = (length of one side" << superScriptTwo << ")" << endl;
                    cout << "                                       =" << Answersquare << "(unit)" << superScriptTwo << endl;

                    cout << "Do you want to get area of another shape y/n?" << endl
                         << ":";
                    cin >> END_OR_CONTINUE_YorN;

                    if (END_OR_CONTINUE_YorN == "y" || END_OR_CONTINUE_YorN == "Y")
                    {
                        continue;
                    }
                    else if (END_OR_CONTINUE_YorN == "n" || END_OR_CONTINUE_YorN == "N")
                    {
                        break;
                    }
                }
                else if (whichShapeIsIt == "rectangle" || whichShapeIsIt == "Rectangle" || whichShapeIsIt == "RECTANGLE")
                {
                    int A, l, w;
                    cout << "Enter the length then width of the rectangle.\n:";
                    cin >> l >> w;

                    system("cls");
                    Sleep(2000);

                    A = l * w;
                    cout << "Area of rectangle = (l x w)";
                    cout << "                           =" << A << "(unit)" << superScriptTwo << endl;

                    Sleep(2000);
                    system("cls");

                    cout << "Do you want to get area of another shape y/n?" << endl
                         << ":";
                    cin >> END_OR_CONTINUE_YorN;

                    if (END_OR_CONTINUE_YorN == "y" || END_OR_CONTINUE_YorN == "Y")
                    {
                        continue;
                    }
                    else if (END_OR_CONTINUE_YorN == "n" || END_OR_CONTINUE_YorN == "N")
                    {
                        break;
                    }
                }
                else if (whichShapeIsIt == "triangle" || whichShapeIsIt == "Triangle" || whichShapeIsIt == "TRIANGLE")
                {
                    int A, Base, hieght;

                    cout << "Enter the base then hieght of the triangle.\n:";
                    cin >> Base >> hieght;

                    system("cls");
                    Sleep(2000);

                    A = (Base * hieght) / 2;
                    cout << "Area of triangle = " << A << "(unit)" << superScriptTwo; // improve this

                    Sleep(2000);
                    system("cls");

                    cout << "Do you want to get area of another shape y/n?" << endl
                         << ":";
                    cin >> END_OR_CONTINUE_YorN;

                    if (END_OR_CONTINUE_YorN == "y" || END_OR_CONTINUE_YorN == "Y")
                    {
                        continue;
                    }
                    else if (END_OR_CONTINUE_YorN == "n" || END_OR_CONTINUE_YorN == "N")
                    {
                        break;
                    }
                }
                else if (whichShapeIsIt == "circle" || whichShapeIsIt == "Circle" || whichShapeIsIt == "CIRCLE")
                {
                    double A = 0.0, r = 0.0, pi = 3.14159;

                    cout << "Enter the radius of the circle. \n";
                    cin >> r;

                    system("cls");
                    Sleep(2000);

                    A = pi * r * r;
                    cout << "Area of circle = (A = PIr" << superScriptTwo << ")";
                    cout << "                                             =" << A << "(unit)" << superScriptTwo << endl;

                    Sleep(20000);
                    system("cls");

                    cout << "Do you want to get area of another shape y/n?" << endl
                         << ":";
                    cin >> END_OR_CONTINUE_YorN;

                    if (END_OR_CONTINUE_YorN == "y" || END_OR_CONTINUE_YorN == "Y")
                    {
                        continue;
                    }
                    else if (END_OR_CONTINUE_YorN == "n" || END_OR_CONTINUE_YorN == "N")
                    {
                        break;
                    }
                }
            }
        }
        else if (shapeType == "n" || shapeType == "N")
        {
            cout<<"feature not available yet\nIt will come sooner int he future!"<<endl;

            // string nothin = "";
            // cout << "The clculator has been updated.\nPress enter to install the update.\nType coutinue to downlaoad or if no type no!:";
            // cin >> nothin;
            // if(nothin == "no" || nothin == "NO"){
            //     return 0;
            // }
            // vector<string> downloading = {"downloading.", "downloading..", "downloading..."};

            // vector<string> installing = {"installing.", "installing..", "installing..."};
            // for (int i = 0; i < 5; i++)
            // {
            //     for (int j = 0; j < 3; j++)
            //     {
            //         Sleep(500);
            //         cout << downloading[j] << endl;
            //         Sleep(500);
            //         system("cls");
            //     }
            // }

            // Sleep(500);
            // cout << "DOWNLOADING COMPLETED"<< "Type continue to install the update.\n";
            // cin >> nothin;
            // Sleep(2000);
            // system("cls");
            // for (int i = 0; i < 4; i++)

            // {
            //     for (int j = 0; j < 3; j++)
            //     {
            //         Sleep(500);
            //         cout << installing[j] << endl;
            //         Sleep(500);
            //         system("cls");
            //     }
            // }
            // cout << "Installation completed" << endl;
            // Sleep(1000);
            // system("cls");
        }
    }

    return 0;
}