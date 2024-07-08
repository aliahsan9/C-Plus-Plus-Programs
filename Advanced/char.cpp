
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character:";
    cin>>c;
    switch(c){
        case'a':
        case'A':
         case'e':
          case'E':
           case'i':
            case'I':
             case'o':
              case'O':
               case'u':
                case'U':
                 cout<<"you have enyered a vowel";
                 break;
                 default:
                 cout<<"you have entered a consonant";

    }
    return 0;
}
