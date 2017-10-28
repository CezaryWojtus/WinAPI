#include <windows.h>
#include <iostream>
using namespace std;
LPSTR NazwaKlasy= "Klasa123";
MSG Komunikat;

  LPCTSTR nazwaaaa = "botak";

LPSTR dane;

#define ID_ODLEGLOSC 500
#define ID_POWIERZCHNIA 501
#define ID_OBJETOSC 502
#define ID_MASA 503
#define ID_CZAS 504
#define ID_INFORMACJA 505
#define ID_PRZYCISK1 506
#define ID_PRZYCISK2 507
#define ID_PRZYCISK3 508
#define ID_PRZYCISK4 509
#define ID_PRZYCISK5 510
#define ID_PRZYCISK6 511
#define ID_PRZYCISK7 512
#define ID_PRZYCISK8 513
#define ID_PRZYCISK9 514
#define ID_PRZYCISK10 515
#define ID_PRZYCISK11 516
#define ID_PRZYCISK12 517
#define ID_PRZYCISK13 518
#define ID_PRZYCISK14 519
#define ID_PRZYCISK15 520
#define ID_PRZYCISK16 521
#define ID_PRZYCISK17 522
#define ID_PRZYCISK18 523
#define ID_PRZYCISK19 524
#define ID_PRZYCISK20 525

//przyciski
HWND hPrzycisk1;
HWND hPrzycisk2;
HWND hPrzycisk3;
HWND hPrzycisk4;
HWND hPrzycisk5;
HWND hPrzycisk6;
HWND hPrzycisk7;
HWND hCheckbox;
HWND hRadio1;
HWND hRadio2;
HWND hRadio3;
HWND hRadio4;
HWND hRadio5;
HWND hRadio6;
HWND hRadio7;
HWND hRadio8;
HWND hRadio9;
HWND hRadio10;
HWND hRadio11;
HWND hRadio12;
HWND hRadio13;
HWND hRadio14;
HWND hRadio15;
HWND hRadio16;
HWND hRadio17;
HWND hRadio18;
HWND hRadio19;
HWND hRadio20;

//pola tekstowe
HWND hText;
HWND hText2;

//listy
HWND hList;
HWND hCombo;

//prototyp funkcji (dziwne rzeczy które musza być XD)
LRESULT CALLBACK WndProc ( HWND hwnd, UINT msg,WPARAM wParam,LPARAM lParam);

void poletekstowe (HWND handle)
{
    //pobranie ilości znaków w polu tekstowym
    DWORD length = GetWindowTextLength(handle);
    //Alokacja pamięci dla znaków w polu tekstowym
    LPSTR buf = (LPSTR) GlobalAlloc(GPTR, length);
    //Pobranie tekstu z okna i zapisanie go w buforze
    GetWindowText(hText, dane, length + 1 );
}

int WINAPI WinMain (HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nCmdShow)
{
    //okno do linijki 113 !
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
        1050, 550, //rozmiar okna dLugoSC, szerokosc
        NULL, NULL,
        hInstance, NULL);



      hRadio1 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 50, 300, 25, hWnd, (HMENU)ID_PRZYCISK1, hInstance, NULL);
      hRadio2 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 75, 300, 25, hWnd, NULL, hInstance, NULL);
      hRadio3 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 100,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio4 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 125,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio5 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 150,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio6 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 175,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio7 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 200,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio8 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 225,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio9 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 250,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio10 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,  5, 275,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio11 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 50 ,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio12 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 75 ,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio13 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 100,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio14 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 125,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio15 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 150,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio16 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 175,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio17 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 200,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio18 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 225,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio19 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 250,300, 25, hWnd, NULL, hInstance, NULL);
      hRadio20 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " ", WS_CHILD | WS_VISIBLE |  BS_RADIOBUTTON,315, 275,300, 25, hWnd, NULL, hInstance, NULL);
 /*    hRadio = CreateWindowEx
     (WS_EX_CLIENTEDGE, "BUTTON"
      , "Ramka", WS_CHILD | WS_VISIBLE |  BS_GROUPBOX,
      5, 150 ,100, 30, hWnd, NULL, hInstance, NULL); */
        //tekstowe
      hText  = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", NULL, WS_CHILD | WS_VISIBLE |WS_BORDER, 5, 310,500, 25, hWnd, NULL, hInstance, NULL);
      hText2 = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", NULL, WS_CHILD | WS_VISIBLE |WS_BORDER, 5, 360,500, 25, hWnd, NULL, hInstance, NULL);
 /*   hText = CreateWindowEx
    (WS_EX_CLIENTEDGE, "EDIT"
     , NULL, WS_CHILD | WS_VISIBLE |WS_BORDER |
        WS_VSCROLL | ES_MULTILINE | ES_AUTOVSCROLL,
      5, 250, 150, 150, hWnd, NULL, hInstance, NULL); */
        //Listy
 /*    hList = CreateWindowEx
        (WS_EX_CLIENTEDGE, "LISTBOX"
     , "NULL", WS_CHILD | WS_VISIBLE |WS_BORDER ,
      5, 5, 150, 150, hWnd, NULL, hInstance, NULL);

      SendMessage(hList, LB_ADDSTRING, 0,
                  (LPARAM)"Element 1");
*/

     hPrzycisk1 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Odleglosc"   , WS_CHILD | WS_VISIBLE,   5, 10, 100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk2 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Powierzchnia", WS_CHILD | WS_VISIBLE, 105, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk3 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Objetosc"    , WS_CHILD | WS_VISIBLE, 205, 10, 100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk4 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Masa"        , WS_CHILD | WS_VISIBLE, 305, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk5 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Czas"        , WS_CHILD | WS_VISIBLE, 405, 10, 100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk6 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Informacja"  , WS_CHILD | WS_VISIBLE, 505, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
     hPrzycisk7 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Zatwierdz"  , WS_CHILD | WS_VISIBLE, 515, 310 ,100, 25, hWnd, NULL, hInstance, NULL);
  /*   hCombo = CreateWindowEx
        (WS_EX_CLIENTEDGE, "COMBOBOX"
     , "NULL", WS_CHILD | WS_VISIBLE |WS_BORDER |CBS_DROPDOWN,
      5, 10, 150, 150, hWnd, NULL, hInstance, NULL);
      SendMessage(hCombo, CB_ADDSTRING, 0,
                  (LPARAM)"Odleglosci");
      SendMessage(hCombo, CB_ADDSTRING, 1,
                  (LPARAM)"Powierzchni");
      SendMessage(hCombo, CB_ADDSTRING, 2,
                  (LPARAM)"Objetosci");
      SendMessage(hCombo, CB_ADDSTRING, 3,
                  (LPARAM)"Masy");
      SendMessage(hCombo, CB_ADDSTRING, 4,
                  (LPARAM)"Czasu");
      SendMessage(hCombo, CB_ADDSTRING, 5,
                  (LPARAM)"Informacji");
*/

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    while(GetMessage(&Komunikat, NULL, 0, 0))
     {
         TranslateMessage(&Komunikat);
         DispatchMessage(&Komunikat);
     }
     return Komunikat.wParam;
}



LRESULT CALLBACK WndProc (HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{

   switch(msg)
   {
       case WM_COMMAND:
           //dodatkowe wyskakujące okienko
            if((HWND) lParam == hPrzycisk1)
        {
                nazwaaaa = "Mikrometr ";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Milimetr [mm]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Centymetr [cm]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Metr [m]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Kilometr [km] ";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Cal [in]";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Stopa [ft]";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Jard [yd]";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Mila [mi]";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = "Mila Morska [Mm]";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Mikrometr ";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Milimetr [mm]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Centymetr [cm]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Metr [m]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Kilometr [km] ";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Cal [in]";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Stopa [ft]";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Jard [yd]";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Mila [mi]";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = "Mila Morska [Mm]";
                SetWindowText(hRadio20, nazwaaaa);
                //MessageBox(hwnd, "tekst wyskakujacego okna" , "NazwaOkna", MB_OK);
        }
            if((HWND) lParam == hPrzycisk2)
        {
                nazwaaaa = "Milimetr kwadratowy [mm2]";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Centymetr kwadratowy [cm2]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Metr kwadratowy [m2]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Kilometr kwadratowy [km2]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Ar [a]";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Hektar [ha]";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Akr [akr]";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Jard Kwadratowy[yr2]";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Stopa Kwadratowa[ft2]";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = " ";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Milimetr kwadratowy [mm2]";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Centymetr kwadratowy [cm2]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Metr kwadratowy [m2]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Kilometr kwadratowy [km2]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Ar [a]";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Hektar [ha]";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Akr [akr]";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Jard Kwadratowy [yr2]";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Stopa Kwadratowa [ft2]";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = " ";
                SetWindowText(hRadio20, nazwaaaa);
                //MessageBox(hwnd, "tekst wyskakujacego okna" , "NazwaOkna", MB_OK);
        }
            if((HWND) lParam == hPrzycisk3)
        {
                nazwaaaa = "Mililitr [ml]";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Litr [l]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Metr szescienny [mm3]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Centylitr [cl]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Galon angielski [gal UK]";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Pinta angielska [pt UK]";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Uncja angielska [oz UK]";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Galon amertkanski [gal US]";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Pinta amerykanska [pt US]";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = "Uncja amerykanska [oz US]";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Mililitr [ml]";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Litr [l]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Metr szescienny [mm3]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Centylitr [cl]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Galon angielski [gal UK]";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Pinta angielska [pt UK]";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Uncja angielska [oz UK]";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Galon amertkanski [gal US]";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Pinta amerykanska [pt US]";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = "Uncja amerykanska [oz US]";
                SetWindowText(hRadio20, nazwaaaa);
                //MessageBox(hwnd, "tekst wyskakujacego okna" , "NazwaOkna", MB_OK);
        }
            if((HWND) lParam == hPrzycisk4)
        {
                nazwaaaa = "Gram [g]";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Kilogram [kg]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Kwintal [q]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Tona [t]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Dram [dr]";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Cetnar [cwt]";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Kamien [st]";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Funt [lb]";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Uncja [oz]";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = "Gran [gr]";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Gram [g]";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Kilogram [kg]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Kwintal [q]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Tona [t]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Dram [dr]";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Cetnar [cwt]";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Kamien [st]";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Funt [lb]";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Uncja [oz]";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = "Gran [gr]";
                SetWindowText(hRadio20, nazwaaaa);
        }
            if((HWND) lParam == hPrzycisk5)
        {
                nazwaaaa = "Milisekunda [ms]";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Sekunda [s]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Minuta [min]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Godzina [h]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Doba";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Tydzien";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Miesiac (30 dni)";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Rok";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Dekada";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = "Tysiaclecie";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Milisekunda [ms]";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Sekunda [s]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Minuta [min]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Godzina [h]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Doba";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Tydzien";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Miesiac (30 dni)";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Rok";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Dekada";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = "Tysiaclecie";
                SetWindowText(hRadio20, nazwaaaa);

        }
            if((HWND) lParam == hPrzycisk6)
        {
                nazwaaaa = "Bit [b]";
                SetWindowText(hRadio1, nazwaaaa);
                nazwaaaa = "Bajt [B]";
                SetWindowText(hRadio2, nazwaaaa);
                nazwaaaa = "Kilobajt [kB]";
                SetWindowText(hRadio3, nazwaaaa);
                nazwaaaa = "Megabajt [MB]";
                SetWindowText(hRadio4, nazwaaaa);
                nazwaaaa = "Gigabajt [GB]";
                SetWindowText(hRadio5, nazwaaaa);
                nazwaaaa = "Terabajt [TB]";
                SetWindowText(hRadio6, nazwaaaa);
                nazwaaaa = "Petabajt [PB]";
                SetWindowText(hRadio7, nazwaaaa);
                nazwaaaa = "Kilobit [kb]";
                SetWindowText(hRadio8, nazwaaaa);
                nazwaaaa = "Megabit [Mb]";
                SetWindowText(hRadio9, nazwaaaa);
                nazwaaaa = "Gigabit [Gb]";
                SetWindowText(hRadio10, nazwaaaa);

                nazwaaaa = "Bit [b]";
                SetWindowText(hRadio11, nazwaaaa);
                nazwaaaa = "Bajt [B]";
                SetWindowText(hRadio12, nazwaaaa);
                nazwaaaa = "Kilobajt [kB]";
                SetWindowText(hRadio13, nazwaaaa);
                nazwaaaa = "Megabajt [MB]";
                SetWindowText(hRadio14, nazwaaaa);
                nazwaaaa = "Gigabajt [GB]";
                SetWindowText(hRadio15, nazwaaaa);
                nazwaaaa = "Terabajt [TB]";
                SetWindowText(hRadio16, nazwaaaa);
                nazwaaaa = "Petabajt [PB]";
                SetWindowText(hRadio17, nazwaaaa);
                nazwaaaa = "Kilobit [kb]";
                SetWindowText(hRadio18, nazwaaaa);
                nazwaaaa = "Megabit [Mb]";
                SetWindowText(hRadio19, nazwaaaa);
                nazwaaaa = "Gigabit [Gb]";
                SetWindowText(hRadio20, nazwaaaa);
        }
        if((HWND) lParam == hPrzycisk7)
        {
                poletekstowe;
                SetWindowText(hText2, dane);

        }

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


