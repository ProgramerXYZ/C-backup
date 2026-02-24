#include<iostream> 
#include<string>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include<vector>
using namespace std;
int main(){
    cout<<"Hey there! Are you a devloper?y/n"<<endl<<":";
    const string devpass = "iamdevloper:-)";
    string areYouAdev ;
    int devpassTrueORfalse=0;/
    cin>>areYouAdev;
    bool developer = false;
    if (areYouAdev=="y")
    {
        int wanaTryAgain=0;
        while (wanaTryAgain == 0)
        {
           
            string passTorF;
            cout<<"Enter passowrd to enter devloper mode."<<endl<<":";
            cin>>passTorF;
            
            if (passTorF==devpass)
            {
                cout<<"YOU ARE WELCOME SIR. "<<endl;
                developer = true;
                Sleep(2000);
                
                
                
                break;
            } else
            {
                system("cls");
                break;
            }
        }    

        
    } else if (areYouAdev=="n")
    {
        cout<<"OK! it means you are not a devloper."<<endl<<"SORRY! FOR WASTING YOR TIME IN THAT:-("<<endl;
    }
    
    string howToPlayTorF;
    system("cls");
    Sleep(2000);
    cout<<"Do you wana know how to play?y/n"<<endl<<":";
    cin>>howToPlayTorF;
    if (howToPlayTorF=="y")
    {
        cout << "Hangman is a word-guessing game. Here's how to play:\n";
        cout << "    1. A secret word is chosen randomly from a list of words.\n";
        cout << "    2. The player's objective is to guess the letters in the word.\n";
        cout << "    3. The player inputs a letter as a guess.\n";
        cout << "    4. If the letter is in the word, it is revealed in its correct position(s).\n";
        cout << "    5. If the letter is not in the word, the player loses a life.\n";
        cout << "    6. The player has 6 lives to guess all the letters in the word.\n";
        cout << "    7. If the player guesshes all the letters before running out of lives, they win!\n";
        cout << "    8. If the player runs out of lives before guessing all the letters, they lose.\n\n";
        cout << "    Are you ready to play Hangman? Let's begin!" << endl;
        Sleep(70000);
    } else if (howToPlayTorF=="n")
    {
        cout<<"Ok! Good luck.";
    }
        string words[277] = {
        "abacus", "abdomen", "abide", "ablaze", "able", "aboard", "abroad", "abrupt", 
        "absence", "absent", "absorb", "abstract", "absurd", "abuse", "academy", 
        "accelerate", "accent", "accept", "access", "accident", "accommodate", 
        "accompany", "accomplish", "accord", "account", "accurate", "accuse", 
        "achieve", "acid", "acknowledge", "acoustic", "acquire", "acre", "acrobat", 
        "across", "act", "action", "activate", "active", "actor", "actress", "actual", 
        "adapt", "add", "addict", "address", "adequate", "adjust", "admire", "admit", 
        "adolescent", "adopt", "adult", "advance", "adventure", "advertise", "advice", 
        "advise", "aerial", "affair", "affect", "affection", "afford", "afraid", 
        "after", "afternoon", "afterward", "again", "against", "age", "agency", 
        "agenda", "agent", "agile", "agitate", "ago", "agree", "ahead", "aim", 
        "air", "airplane", "airport", "ajar", "alarm", "album", "alcohol", "alert", 
        "alien", "alive", "all", "alley", "allow", "almost", "alone", "along", 
        "aloud", "alphabet", "already", "also", "alter", ";", "although", 
        "altogether", "always", "amaze", "ambition", "ambulance", "among", "amount", 
        "amuse", "analyze", "anchor", "ancient", "angel", "anger", "angle", "angry", 
        "animal", "ankle", "announce", "annoy", "annual", "another", "answer", "ant", 
        "anticipate", "anxiety", "any", "apart", "apartment", "apologize", "apparent", 
        "appear", "applaud", "apple", "appliance", "apply", "appoint", "approach", 
        "approve", "april", "arch", "arctic", "area", "argue", "arise", "arm", 
        "armor", "army", "around", "arrange", "arrest", "arrive", "arrow", "art", 
        "artist", "as", "ash", "aside", "ask", "asleep", "aspect", "assault", 
        "asset", "assign", "assist", "associate", "assume", "assure", "asteroid", 
        "athlete", "atlas", "atom", "attack", "attempt", "attend", "attic", 
        "attract", "auction", "audit", "august", "aunt", "author", "auto", "autumn", 
        "average", "avocado", "avoid", "awake", "aware", "away", "awesome", 
        "awful", "awkward", "axis", "baby", "bachelor", "back", "background", 
        "backpack", "bacon", "badge", "bag", "bake", "balance", "ball", "balloon", 
        "bamboo", "banana", "band", "banjo", "bank", "bar", "bare", "bargain", 
        "bark", "barn", "barrel", "base", "baseball", "basement", "basic", "basket", 
        "bat", "bath", "battle", "bay", "be", "beach", "bean", "bear", "beard", 
        "beast", "beat", "beautiful", "beauty", "because", "become", "bed", "bee", 
        "beef", "beer", "before", "begin", "behave", "behind", "believe", "bell", 
        "belong", "below", "belt", "bench", "bend", "beneath", "benefit", "berry", 
        "beside", "best", "bet", "beyond", "bicycle", "bid", "big", "bike", 
        "bill", "bin", "biology", "bird", "birth", "birthday", "biscuit", "bit", 
        "bite", "bitter", "black", "blade", "blame"
    };
    srand(time(0)); 
    int randomNumberForlist = rand() % 277;
    string randomWord = words[randomNumberForlist];
    int lengthOfRandomWord = randomWord.length();
    if (developer)
    {
        cout<<"OK SIR ("<<randomWord<<") IS THE WORD. "<<endl;
        Sleep(4000);
        cout << " IIIIII  TTTTT    SSSSS  TTTTT  AAAAA  RRRRR  TTTTT  SSSSS     N   N  OOOOO  W   W" << endl;
        cout << "   II      T      SS       T    A   A  R   R    T    SS        NN  N  O   O  W   W" << endl;
        cout << "   II      T       SSS     T    AAAAA  RRRRR    T     SSS      N N N  O   O  W W W" << endl;
        cout << "   II      T         SS    T    A   A  R  R     T       SS     N  NN  O   O  W W W" << endl;
        cout << " IIIIII    T      SSSSS    T    A   A  R   R    T    SSSSS     N   N  OOOOO  WW WW" << endl;
        Sleep(2000);
        system("cls");
        cout << R"(
     _                                             
    | |                                            
    | |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  
    | '_ \ / _` | '_ \ / _` | '_ ` _ \ / _` | '_ \ 
    | | | | (_| | | | | (_| | | | | | | (_| | | | |
    |_| |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|
                        __/ |                      
                       |___/    
    )" << endl;
    Sleep(2000);
    } else
    {
        
        system("cls");
        Sleep(3000);
        cout << " IIIIII  TTTTT  SSSSS  TTTTT  AAAAA  RRRRR  TTTTT  SSSSS     N   N  OOOOO  W   W" << endl;
        cout << "   II      T    SS       T    A   A  R   R    T    SS        NN  N  O   O  W   W" << endl;
        cout << "   II      T     SSS     T    AAAAA  RRRRR    T     SSS      N N N  O   O  W W W" << endl;
        cout << "   II      T       SS    T    A   A  R  R     T       SS     N  NN  O   O  W W W" << endl;
        cout << " IIIIII    T    SSSSS    T    A   A  R   R    T    SSSSS     N   N  OOOOO  WW WW" << endl;
        Sleep(2000);
        system("cls");
        cout << R"(
     _                                             
    | |                                            
    | |__   __ _ _ __   __ _ _ __ ___   __ _ _ __  
    | '_ \ / _` | '_ \ / _` | '_ ` _ \ / _` | '_ \ 
    | | | | (_| | | | | (_| | | | | | | (_| | | | |
    |_| |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|
                        __/ |                      
                       |___/    kkkkk
    )" << endl;
    Sleep(2000);
    
    }
    
    
    string underscores = "";  //Do not use the arry make it a string

    for (int i= 0; i < lengthOfRandomWord; i++)
    {
        underscores += "_ ";
    }
    cout<<underscores<<endl;
    
    int lives = 6;
    bool GAME_OVER = false;
    
    while (!GAME_OVER)
    {
        string input; 
        cin>>input;
        vector<char> charVector(randomWord.begin(), randomWord.end());
    
        for (int i = 0; i < charVector.size(); ++i) 
        {
            string randomWordList[charVector.size()];
            randomWordList[i] = charVector[i];            
        }
        cout<<randomNumberForlist<<endl;
        
        
    }
    
    
    return 0;    

}
