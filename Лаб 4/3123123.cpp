#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
    int i, j, n;
    char text[1024] = {0};
    char find[1024] = {0};
    char *sub       = NULL;
    cout<<"¬вед≥ть текст меньше н≥ж на 1024 символи\n";
    cin.getline(text,1023);
    int len = strlen(text);
    for(j = i = 0; text[i] != '\0'; i++)
    {
        if(!strchr(find,text[i]))
        {
            find[j] = text[i];
            j = j + 1;
        }
    }
    cout<<"„астота по€ви символ≥в у текст≥: \n";
    for(n = j = 0; find[j] != '\0'; j++)
    {
        if(sub = strchr(text,find[j]))
        {
            cout<<"char : "<<find[j]<<" ";
            for(n = 1; sub != NULL; n++)
            {
                if(sub + 1)
                    sub = strchr(sub + 1,find[j]);
            }
            cout<<"count : "<<n<<" "
                <<"freq  : "<<(1.0*n)/len<<endl;
        }
    }
    system("pause");
    return 0;
}
