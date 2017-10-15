#include <windows.h>

LPSTR NazwaKlasy= "Klasa123";
MSG Komunikat;

HWND hPrzycisk;
HWND hCheckbox;
HWND hRadio;
HWND hRamka;

LRESULT CALLBACK WndProc ( HWND hwnd, UINT msg
                          ,WPARAM wParam
                          ,LPARAM lParam);

int WINAPI WinMain (HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nCmdShow)
{
    // int i= MessageBox(NULL, "Hello World", "Hello World", MB_OKCANCEL); Witaj œwiat zawsze spoko

    //tworzenie klasy ¿eby mo¿na by³o stworzyæ okno
    WNDCLASS wc;
    wc.style = 0;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor (NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = NazwaKlasy;
    //rejestrowanie klasy
    RegisterClass(&wc);
    //tworzenie okna
    HWND hWnd = CreateWindowEx (
        WS_EX_CLIENTEDGE,
        NazwaKlasy,
        "Konwerter",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        550, 550, //rozmiar okna d³ugoœæ, szerokoœæ
        NULL, NULL,
        hInstance, NULL);
    //nauka obs³ugi przycisków ;/
     hPrzycisk = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Przycisk", WS_CHILD | WS_VISIBLE,
      5, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Checkbox", WS_CHILD | WS_VISIBLE | BS_CHECKBOX,
      5, 50 ,100, 30, hWnd, NULL, hInstance, NULL);
     hRadio = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Radiobutton", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,
      5, 100 ,100, 30, hWnd, NULL, hInstance, NULL);
     hRadio = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Ramka", WS_CHILD | WS_VISIBLE |  BS_GROUPBOX,
      5, 150 ,100, 30, hWnd, NULL, hInstance, NULL);

    //komunikat
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    while(GetMessage(&Komunikat, NULL, 0, 0))
     {
         TranslateMessage(&Komunikat);
         DispatchMessage(&Komunikat);
     }
     return Komunikat.wParam;
}


   //zamkniêcie okna
LRESULT CALLBACK WndProc (HWND hwnd, UINT msg
                              ,WPARAM wParam
                              ,LPARAM lParam)
{
   switch(msg)
   {
       case WM_CLOSE:
        DestroyWindow(hwnd);
       break;
       case WM_DESTROY:
        PostQuitMessage(0);
       break;

       default:
         return DefWindowProc(hwnd, msg, wParam, lParam);
   }


    return 0;
}
