#include<iostream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
using namespace std;

int main(){
    char input[128];
    cout<<"Welcome to E-Banking Service\n";
    while (1)
    {
        gets(input);

        if (strcmp(input, "hi")==0)
        {
            cout<<"Hello! What can I do for you?\n";
        }
        else if (strcmp(input, "what types of accounts you are providing?")==0)
        {
            cout<<"Current Account, Savings Account, FD Account etc\n";
        }
        else if (strcmp(input, "how can I activate my savings account?")==0)
        {
            cout<<"To activate your existing savings account visit your account holding branch\n";
        }
        else if (strcmp(input, "do I get a ATM card with my savings account?")==0)
        {
            cout<<"Yes\n";
        }
        else if (strcmp(input, "how can I update my details?")==0)
        {
            cout<<"Hand over the details to be updated to your account holding branch\n";
        }
        else if (strcmp(input, "what are the documents need to open a fixed deposit?")==0)
        {
            cout<<"National Identity card or in the absence of it a valid driving license or valid passport containing the national identity card number. If the address differs from the given document a billing proof not less than 3 months should be submitted\n";
        }
        else if (strcmp(input, "what if I lose my Credit Card?")==0)
        {
            cout<<"Loss of card should be immidiatly reported to our 24/7 Our Customer Care Centre via hoteline +94112005555 and should be follow up with a letter handed over to the nearest branch or via Internet Banking - User Message. Once reported, the customer will not be liable for any transactions performed subsequent to informing the loss of the card to the bank\n";
        }
        else if (strcmp(input, "what is the validity period of the debit card?")==0)
        {
            cout<<"Debit Card gets renewed automatically after 4/5 years\n";
        }
        else if (strcmp(input, "bye")==0)
        {
            exit(0);
        }

        else{
            cout<<"Sorry I can't understand\n";
        }
    }
}