#include <iostream>
#include <sstream>
#include<conio.h>

using namespace std;


class Student{
    private:
    int age;
    int standard;
    string first_name;
    string last_name;

    public:
    int set_age(int a)

    {
        age = a;
        return 0;
    }

    int get_age()
    {

        return age;

    }

    int set_standard(int b)
    {
        standard=b;
        return 0; //ulta
    }

    int get_standard()
    {
        return standard;
    }
    string set_first_name(string c)
    {
        first_name=c;
        return 0;
    }
    
    string get_first_name()
    {
        return first_name;
    }
    string set_last_name(string d)
    {
        last_name=d;
        return 0;
    } 

    string get_last_name()
    {
        return last_name;
    }

    string to_string()
    {
        string str;
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
        str=ss.str();
        return str;
       
    }
};

//main fucntion
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    


  
    
    return 0;
    getch();
}

