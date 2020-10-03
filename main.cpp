#include<iostream>
#include<stdlib.h>

using namespace std;

int menuopt();      // menu of the program

void shutdown();

void restart();

void hibernate();

void sleep();

void ClearExplorerhistory();

void ClearLocation();

void ClearTempFile();

void ClearChromeHistory();

void DeleteDuplicateFile();

void DownloadFile();

void Exit();


int main()
{
    int choice;
    do
    {
        menuopt();

        cin>>choice;

        switch(choice)
        {
            case 1: shutdown();
                    break;

            case 2: restart();
                    break;

            case 3: hibernate();
                    break;

            case 4: sleep();
                    break;

            case 5: ClearLocation();
                    break;

            case 6: ClearTempFile();
                    break;

            case 7: ClearChromeHistory();
                    break;

            case 8: ClearExplorerhistory();
                    break;

            case 9: DeleteDuplicateFile();
                    break;

            case 10: DownloadFile();
                    break;

            case 11: Exit();
                    break;
            default :
                    cout<<"Bad input ! Please Try Again";

        }


    }while(choice!=12);

    return 0;

}


int menuopt()
{

    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"\t|********** RCCleaner **********|\n"<< endl;
    cout<<"\t|****** Windows System Until ******|\n"<<endl;
    cout<<"\t|**** Created By- Ravi Choudhary ****|\n\n"<< endl;
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

    cout<<"\n********** --Windows Utility-- ********** \n"<< endl;

    cout<<"1.ShutDown PC \t 2.Restart PC\n "<< endl;
    cout<<"3.Hibernate \t 4.Sleep \n \n"<<endl;
    cout<<"********** --User Functions-- **********\n\n"<<endl;
    cout<<"5.Clear Location \t 6.Clear Temp File\n"<< endl;
    cout<<"7.Clear Chrome History \t 8.Clear Explorer history\n"<< endl;
    cout<<"9.Delete Duplicate File \t 10.Download File\n"<< endl;
    cout<<"11.Exit \n"<< endl;

    cout<<"Enter Your Choice "<< endl;
}

void shutdown()
{
    cout<<"Your Computer Restart in 5 sec ...."<<endl;
    system("c:\\windows\\system32\\shutdown /s /t 5 \n\n");
}

void restart()
{
    cout<<"Your Computer Restart in 10 sec ...."<<endl;

    system("c:\\windows\\system32\\shutdown /r /t 10 \n\n");
}

void hibernate()
{
    cout<<"its run 3";
}

void sleep()
{
    cout<<"sleep running 4 ";
}

void ClearExplorerhistory()
{
    cout<<"its run 5";
}

void ClearLocation()
{
    cout<<"its run 6";
}

void ClearTempFile()
{
    cout<<"its run 7";
}

void ClearChromeHistory()
{
    cout<<"its run 8";
}

void DeleteDuplicateFile()
{
    cout<<"its run 9";
}

void DownloadFile()
{
    cout<<"its run 10";
}

void Exit()
{
    cout<<"its run 11";
}
