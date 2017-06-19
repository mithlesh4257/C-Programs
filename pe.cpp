const string opening = "<*>";
const string closing = "</*>";
string input;



int main()
{
    char element;
    stack<char> stk;
    ifstream file;

    cout << "Please Enter File name: ";
         cin >> input;

    //std::file.open(input);

    file.open(input.c_str());

    if(file.fail())
        cout<<"File is corrupt or does not exists!"<<endl;

    while(!file.eof())
    {
        file>>element;

        //push left group symbols onto stack
        if(element==opening[0])
            stk.push(element);
        else if(element==opening[1])
            stk.push(element);
        else if(element==opening[2])
            stk.push(element);

    }
    file.close();
    file.open(input.c_str());
    while(!file.eof())
    {
        file>>element;

        if(stk.top()==opening[0])
        {
            if(element==closing[0])
                stk.pop();
        }
        else if(stk.top()==opening[1])
        {
            if(element==closing[1])
                stk.pop();
        }
        else if(stk.top()==opening[2])
        {
            if(element==closing[2])
                stk.pop();
        }
    }
    file.close();

    if(!stk.empty())
        cout<<"\nILLEGAL"<<endl;
    else if(stk.empty())
        cout<<"\nLEGAL"<<endl;

    cout << "\n\nProgram complete." <<  endl;
    return 0;
}
