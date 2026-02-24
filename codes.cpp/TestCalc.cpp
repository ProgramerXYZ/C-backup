#include<iostream>
#include<windows.h>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
        cout<<"Hello you are welcome to perimeter and clculator"<<endl;
    Sleep(4000);
    system("cls");
    cout<<"What do you want to get of an shape perimeter or area?"<<endl<<":";
    string PerimeterOrArea;
    cin>>PerimeterOrArea;
    
    if (PerimeterOrArea== "Perimeter" || PerimeterOrArea== "perimeter" )
    {
        string shapetype;
        cout<<"Which shape is it square, rectangle, triangle or if none of these then type n otherwise type y"<<endl<<":";
        cin>>shapetype;
        system("cls");
        Sleep(3867);
        if (shapetype== "y" || shapetype== "Y")
        {
            bool endORcontinue = false;
            string endORcontinueYorN;
            while (!endORcontinue)
            {
                
                string shape;
                cout<<"Which shape is it?"<<endl<<"square, rectangle, triangle"<<endl<<":";
                cin>>shape;

                Sleep(3589);
                system("cls");

                if (shape== "square" || shape== "Square")
                {
                    int lenthOfOneSideSquare;

                    cout<<"Enter length of one side of it"<<endl<<":";
                    cin>>lenthOfOneSideSquare;

                    Sleep(2000);
                    system("cls");

                    int answer= lenthOfOneSideSquare*4;
                    cout<<"Perimeter of square = (length of one side x 4)\n                                             = "<<answer<<endl;
                    cout<<"Do you want to calculate the perimeter of another shape.y/n\n"<<":"<<endl;

                    cin>>endORcontinueYorN;

                    if (endORcontinueYorN=="y" || endORcontinueYorN=="Y")
                    {
                        continue;

                    } else if (endORcontinueYorN=="n" || endORcontinueYorN=="N")
                    {
                        break;
                    }
                    
                    
                } else if (shape == "rectangle" || shape == "Rectangle" )
                {
                    int length, width;

                    cout<<"Enter length of the rectangle.\n:";
                    cin>>length;

                    cout<<"Enter width of the rectangle.\n:";
                    cin>>width;

                    Sleep(2000);
                    system("cls");

                    int ans = 2*(length+width) ;
                    cout<<"Perimeter of rectangale is = (2x(lxb))\n                                             = "<<ans<<endl;
                    
                    cout<<"Do you want to calculate the perimeter of another shape.y/n\n"<<":"<<endl;

                    cin>>endORcontinueYorN;

                    if (endORcontinueYorN=="y" || endORcontinueYorN=="Y")
                    {
                        continue;

                    } else if (endORcontinueYorN=="n" || endORcontinueYorN=="N")
                    {
                        break;
                    }
                    

                } else if (shape == "triangle" || shape == "Triangle")
                {
                    int side_1, side_2, side_3;

                    cout<<"Enter length of each side seprated by spaces\n:";
                    cin<<side_1<<side_2<<side_3;

                    Sleep(2000);
                    system("cls");

                    int answer_t = side_1+side_2+side_3;
                    cout<<"Perimeter of triangle is = (sum of all sides)\n                                             = "<<answer_t<<endl;

                    cout<<"Do you want to calculate the perimeter of another shape.y/n\n"<<":"<<endl;

                    cin>>endORcontinueYorN;

                    if (endORcontinueYorN=="y" || endORcontinueYorN=="Y")
                    {
                        continue;

                    } else if (endORcontinueYorN=="n" || endORcontinueYorN=="N")
                    {
                        break;
                    }
                }
            }

        } 
        else if (shapetype == "n" || shapetype == "N")
        {
            int Num_of_sides;
            cout<<"How many sides does it have?"<<endl<<":";
            cin>>Num_of_sides;

            int answer_multi_line = 0;
            int ii=1;
            int answer_calc;
            for (int i = 0; i < Num_of_sides; i++)
            {
                for (int j = 0; j < ii; j++)
                {
                    ii-=1;
                    cout<<"Enter the length of frist side."<<endl<<":";
                }
                if (ii==0)
                {
                    cout<<"Enter the lenth of other side."<<endl<<":";
                }         
                cin>>answer_calc;
                answer_multi_line+=answer_calc;

            }
            cout<<"Perimeter of the shape is = (sum of all sides) "<<endl;
            cout<<"                                             = "<<answer_multi_line<<endl
        }
}

