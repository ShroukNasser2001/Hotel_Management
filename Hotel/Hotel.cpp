#include <iostream>
#include<string>
#include"Guest.h"
#include"Login.h"
int main()
{
    Guest guest[1000];
    Login log[100];
    string admin = "Mohamed";
    string adpassword = "12345678";
    int choose=5,add=0, id = 1,logg=0;
    cout << "\t\t\t\t\tHotel"<<endl;
    cout << "\t\t\t\t  BY SHROUK NASSER" << endl;
    while (choose!=0)
    {
        choose:
        cout << "press 1. for Regist:" << endl << "press 2. for login:" << endl << "Press 0. for exit:" << endl;
        cin >> choose;
        if (choose==1)
        {

            string e, p;
            admin:
            cout << "enter admin username:"; cin >> e;
            cout << "enter password:"; cin >> p;
            if (e==admin&&p==adpassword)
            {
                system("Cls");
                string name, username, password;
                int age;
                guest[add].ID(id);
                cout << "Name:"; cin >> name;
                guest[add].Name(name);
                cout << "age:"; cin >> age;
                guest[add].Age(age);
                cout << "UserName:"; cin >> username;
                guest[add].Username(username);
                cout << "Password:"; cin >> password;
                guest[add].Password(password);
                cout << "Done\n";
                id++;
                add++;
            }
            else
            {
                cout << "wrong email and password"<<endl;
                goto admin;
            }
        }
        else if(choose==2)
        {
            int login;
            login:
            cout << "press 1. for login for admin" << endl << "press 2.for login for guest" << endl;
            cin >> login;
            if (login==1)
            {
                string e, p;
            adminlogin:
                cout << "enter admin username:"; cin >> e;
                cout << "enter password:"; cin >> p;
                if (e == admin && p == adpassword)
                {
                    cout << "All Data\n";
                    for (int i = 0; i < add; i++)
                    {
                        cout << "_________________________________________________________________________________________" << endl;
                        cout << "ID:" << guest[i].printid() << endl;
                        cout << "Name:" << guest[i].printName() << endl;
                        cout << "Age:" << guest[i].printage() << endl;
                        cout << "Username:" << guest[i].printusername() << endl;
                        if (log[i].printcheck() == "No")
                        {
                            cout << "CheckIN:" << log[i].printcheck()<<endl;
                        }
                        else
                        {
                            cout << "CheckIN:" << log[i].printcheck()<<endl;
                            cout << "Room:" << log[i].printroom() << endl;
                            cout << "Day:" << log[i].printday() << endl;
                            cout << "salary:" << log[i].printsalary() << endl;
                        }
                    }
                }
                else
                {
                    cout << "wrong email and password" << endl;
                    goto adminlogin;
                }

            }
            else if(login==2)
            {
                string user,pass;
                pass:
                cout << "username:"; cin >>user;
                cout << " password:"; cin >> pass;
                bool c = false;
                for (int i = 0; i < add; i++)
                {
                    if (user == guest[i].printusername() && pass == guest[i].printpassword())
                    {
                        system("Cls");
                        c = true;
                        logg = i;

                        break;
                    }
                }
                    if (c==true)
                    {
                        if (log[logg].printcheck() == "No")
                        {
                            int room, day;
                            cout << "Working On check in" << endl;
                        Room:
                            cout << "press 1. for snigle Room\n press 2. for double Room \n press 3. for trible Room\n";
                            cin >> room;
                            if (room == 1)
                            {
                                log[logg].Room("single");
                            }
                            else if (room == 2)
                            {
                                log[logg].Room("double");
                            }
                            else if (room == 3)
                            {
                                log[logg].Room("trible");
                            }
                            else
                            {
                                cout << "wrong chose" << endl;
                                goto Room;
                            }
                            cout << "Day:"; cin >> day;
                            log[logg].Day(day);
                            log[logg].Salary(day, log[logg].printroom());
                            cout << "Salary is" << log[logg].printsalary() << endl;
                            log[logg].Check("Yes");
                            cout << " Done" << endl;
                        }
                        else
                        {
                            cout << "Working On check Out" << endl;
                            log[logg].Check("NO");
                            log[logg].Day(0);
                            log[logg].Room("");
                            log[logg].Salary(0, "");
                            cout << " Done" << endl;
                        }

                    }
                    else
                    {
                        cout << "Wrong username or password" << endl;
                        goto pass;
                    }

                


            }
            else
            {
                cout << "wrong Chose\n";
                goto login;

            }
        }
        else if(choose==0)
        {

        }
        else
        {
            cout << "wrong Chose\n";
            goto choose;
        
        }
    }
    system("pause");


}

