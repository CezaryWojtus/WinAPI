#include <windows.h>

LPSTR NazwaKlasy= "Klasa123";
MSG Komunikat;

//przyciski
HWND hPrzycisk;
//HWND hCheckbox;
//HWND hRadio;
//HWND hRamka;
//HWND hPobierz;

//pola tekstowe
HWND hText;
HWND hText2;

//listy
HWND hList;
HWND hCombo;

//prototyp funkcji (dziwne rzeczy które musza być XD)
LRESULT CALLBACK WndProc ( HWND hwnd, UINT msg
                          ,WPARAM wParam
                          ,LPARAM lParam);

void funkcja(HWND handle);

int WINAPI WinMain (HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nCmdShow)
{
    //okno do linijki 60 !
    // int i= MessageBox(NULL, "Hello World", "Hello World", MB_OKCANCEL);

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

    RegisterClass(&wc);

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

        //Pzyciski
  /*   hPrzycisk = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Przycisk", WS_CHILD | WS_VISIBLE,
      5, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
     hCheckbox = CreateWindowEx
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
      5, 150 ,100, 30, hWnd, NULL, hInstance, NULL); */
        //tekstowe
    hText = CreateWindowEx
   (WS_EX_CLIENTEDGE, "EDIT"
     , NULL, WS_CHILD | WS_VISIBLE |WS_BORDER,
      5, 200, 150, 20, hWnd, NULL, hInstance, NULL);
    hText = CreateWindowEx
    (WS_EX_CLIENTEDGE, "EDIT"
     , NULL, WS_CHILD | WS_VISIBLE |WS_BORDER |
        WS_VSCROLL | ES_MULTILINE | ES_AUTOVSCROLL,
      5, 250, 150, 150, hWnd, NULL, hInstance, NULL);
        //Listy
 /*    hList = CreateWindowEx
        (WS_EX_CLIENTEDGE, "LISTBOX"
     , "NULL", WS_CHILD | WS_VISIBLE |WS_BORDER ,
      5, 5, 150, 150, hWnd, NULL, hInstance, NULL);

      SendMessage(hList, LB_ADDSTRING, 0,
                  (LPARAM)"Element 1");
*/

     hCombo = CreateWindowEx
        (WS_EX_CLIENTEDGE, "COMBOBOX"
     , "NULL", WS_CHILD | WS_VISIBLE |WS_BORDER |CBS_DROPDOWN,
      5, 30, 150, 150, hWnd, NULL, hInstance, NULL);
      SendMessage(hCombo, CB_ADDSTRING, 0,
                  (LPARAM)"Element 1");
      SendMessage(hCombo, CB_ADDSTRING, 0,
                  (LPARAM)"Element 2");

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    while(GetMessage(&Komunikat, NULL, 0, 0))
     {
         TranslateMessage(&Komunikat);
         DispatchMessage(&Komunikat);
     }
     return Komunikat.wParam;
}



LRESULT CALLBACK WndProc (HWND hwnd, UINT msg
                              ,WPARAM wParam
                              ,LPARAM lParam)
{
   switch(msg)
   {
       case WM_COMMAND:
           //dodatkowe wyskakujące okienko
        if((HWND) lParam == hPrzycisk)
            MessageBox(hwnd, "tekst wyskakujacego okna" , "NazwaOkna", MB_OK);
        break;
        //zamykanie okna
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

void funkcja (HWND handle)
{
    //pobranie ilości znaków w polu tekstowym
    DWORD length = GetWindowTextLength(handle);
    //Alokacja pamięci dla znaków w polu tekstowym
    LPSTR buf = (LPSTR) GlobalAlloc(GPTR, length);
    //Pobranie tekstu z okna i zapisanie go w buforze
    GetWindowText(handle, buf, length + 1 );
}
