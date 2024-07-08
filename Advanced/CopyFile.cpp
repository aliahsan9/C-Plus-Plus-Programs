    #include<iostream>
    #include<fstream>
    using namespace std;
    int main(){
        ifstream infile;
        ofstream onfile;
        char str;
        infile.open("C:\\Users\\Fast Computers\\Desktop\\File.txt");
           onfile.open("C:\\Users\\Fast Computers\\Desktop\\File.txt");
           while (infile.get(str))
           {
            onfile.put(str);
           }
           cout<<"Copied!";
           infile.close();
           onfile.close();
           return 0;
}
    