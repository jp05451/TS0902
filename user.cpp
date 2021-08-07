#include"user.h"


namespace  
{
				string username;
				bool isValid()
				{
								if (username.length() != 8)
												return 0;
								for (int i = 0; i < 8; i++)
								{
												if (!isalpha(username[i]))
																return 0;
								}
								return 1;
				}
}

namespace Authenticate
{
				void inputUserName()
				{

								do
								{
												cout << "Enter your username (8 letters only)" << endl;
												cin >> username;
								} while (!isValid());
				}

				string getUserName()
				{
								return username;
				}
}
