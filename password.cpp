#include<iostream>
#include"password.h"

namespace 
{
                string password;

                 bool isValid()
                {
                                if (password.length() < 8)
                                                return 0;
                                for (int i = 0; i < password.length(); i++)
                                {
                                                if (!isalpha(password[i]))
                                                                return 1;
                                }
                                return 0;
                }                
}
namespace Authenticate
{
                void inputPassword()
                {
                                do
                                {
                                                cout << "Enter your password (at least 8 characters " <<
                                                                "and at least one non-letter)" << endl;
                                                cin >> password;
                                } while (!isValid());
                }

                string getPassword()
                {
                                return password;
                }
}
