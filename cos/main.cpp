#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

LPSTR NazwaKlasy= "KonwerterJednostek";
MSG Komunikat;

char* dane="0";
int i=0;
float a=0;
float b=0;

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

int WINAPI WinMain (HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine,
                     int nCmdShow)
{
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
        650, 435, //rozmiar okna dLugoSC, szerokosc
        NULL, NULL,
        hInstance, NULL);

      hRadio1 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON | WS_GROUP,  5, 50, 300, 25, hWnd, (HMENU)ID_PRZYCISK1, hInstance, NULL);
      hRadio2 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 75, 300, 25, hWnd, (HMENU)ID_PRZYCISK2, hInstance, NULL);
      hRadio3 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 100,300, 25, hWnd, (HMENU)ID_PRZYCISK3, hInstance, NULL);
      hRadio4 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 125,300, 25, hWnd, (HMENU)ID_PRZYCISK4, hInstance, NULL);
      hRadio5 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 150,300, 25, hWnd, (HMENU)ID_PRZYCISK5, hInstance, NULL);
      hRadio6 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 175,300, 25, hWnd, (HMENU)ID_PRZYCISK6, hInstance, NULL);
      hRadio7 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 200,300, 25, hWnd, (HMENU)ID_PRZYCISK7, hInstance, NULL);
      hRadio8 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 225,300, 25, hWnd, (HMENU)ID_PRZYCISK8, hInstance, NULL);
      hRadio9 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON" , " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 250,300, 25, hWnd, (HMENU)ID_PRZYCISK9, hInstance, NULL);
      hRadio10 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,  5, 275,300, 25, hWnd, (HMENU)ID_PRZYCISK10, hInstance, NULL);
      hRadio11 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON| WS_GROUP ,315, 50 ,300, 25, hWnd, (HMENU)ID_PRZYCISK11, hInstance, NULL);
      hRadio12 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 75 ,300, 25, hWnd, (HMENU)ID_PRZYCISK12, hInstance, NULL);
      hRadio13 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 100,300, 25, hWnd, (HMENU)ID_PRZYCISK13, hInstance, NULL);
      hRadio14 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 125,300, 25, hWnd, (HMENU)ID_PRZYCISK14, hInstance, NULL);
      hRadio15 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 150,300, 25, hWnd, (HMENU)ID_PRZYCISK15, hInstance, NULL);
      hRadio16 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 175,300, 25, hWnd, (HMENU)ID_PRZYCISK16, hInstance, NULL);
      hRadio17 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 200,300, 25, hWnd, (HMENU)ID_PRZYCISK17, hInstance, NULL);
      hRadio18 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 225,300, 25, hWnd, (HMENU)ID_PRZYCISK18, hInstance, NULL);
      hRadio19 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 250,300, 25, hWnd, (HMENU)ID_PRZYCISK19, hInstance, NULL);
      hRadio20 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", " " , WS_CHILD | WS_VISIBLE |  BS_AUTORADIOBUTTON,315, 275,300, 25, hWnd, (HMENU)ID_PRZYCISK20, hInstance, NULL);

      hText  = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", NULL, WS_CHILD | WS_VISIBLE |WS_BORDER, 5, 310,500, 25, hWnd, NULL, hInstance, NULL);
      hText2 = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", NULL, WS_CHILD | WS_VISIBLE |WS_BORDER, 5, 360,500, 25, hWnd, NULL, hInstance, NULL);

      hPrzycisk1 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Odleglosci"   , WS_CHILD | WS_VISIBLE,   5, 10, 100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk2 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Powierzchni", WS_CHILD | WS_VISIBLE, 105, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk3 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Objetosci"    , WS_CHILD | WS_VISIBLE, 205, 10, 100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk4 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Masy"        , WS_CHILD | WS_VISIBLE, 305, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk5 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Czau"        , WS_CHILD | WS_VISIBLE, 405, 10, 100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk6 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Informacji"  , WS_CHILD | WS_VISIBLE, 505, 10 ,100, 30, hWnd, NULL, hInstance, NULL);
      hPrzycisk7 = CreateWindowEx(WS_EX_CLIENTEDGE, "BUTTON", "Zatwierdz"  , WS_CHILD | WS_VISIBLE, 515, 310 ,100, 75, hWnd, NULL, hInstance, NULL);

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
                SetWindowText(hRadio1, "Mikrometr [um]");
                SetWindowText(hRadio2, "Milimetr [mm]");
                SetWindowText(hRadio3, "Centymetr [cm]");
                SetWindowText(hRadio4, "Metr [m]");
                SetWindowText(hRadio5, "Kilometr [km] ");
                SetWindowText(hRadio6, "Cal [in]");
                SetWindowText(hRadio7, "Stopa [ft]");
                SetWindowText(hRadio8, "Jard [yd]");
                SetWindowText(hRadio9, "Mila [mi]");
                SetWindowText(hRadio10,"Mila Morska [Mm]");

                SetWindowText(hRadio11, "Mikrometr [um]");
                SetWindowText(hRadio12, "Milimetr [mm]");
                SetWindowText(hRadio13, "Centymetr [cm]");
                SetWindowText(hRadio14, "Metr [m]");
                SetWindowText(hRadio15, "Kilometr [km] ");
                SetWindowText(hRadio16, "Cal [in]");
                SetWindowText(hRadio17, "Stopa [ft]");
                SetWindowText(hRadio18, "Jard [yd]");
                SetWindowText(hRadio19, "Mila [mi]");
                SetWindowText(hRadio20,"Mila Morska [Mm]");
                i=1;
        }
            if((HWND) lParam == hPrzycisk2)
        {
                SetWindowText(hRadio1, "Milimetr kwadratowy [mm2]");
                SetWindowText(hRadio2, "Centymetr kwadratowy [cm2]");
                SetWindowText(hRadio3, "Decymetr kwadratowy [dm2]");
                SetWindowText(hRadio4, "Metr kwadratowy [m2]");
                SetWindowText(hRadio5, "Kilometr kwadratowy [km2]");
                SetWindowText(hRadio6, "Ar [a]");
                SetWindowText(hRadio7, "Hektar [ha]");
                SetWindowText(hRadio8, "Akr [akr]");
                SetWindowText(hRadio9, "Jard Kwadratowy [yr2]");
                SetWindowText(hRadio10, "Stopa Kwadratowa [ft2] ");

                SetWindowText(hRadio11, "Milimetr kwadratowy [mm2]");
                SetWindowText(hRadio12, "Centymetr kwadratowy [cm2]");
                SetWindowText(hRadio13, "Decymetr kwadratowy [dm2]");
                SetWindowText(hRadio14, "Metr kwadratowy [m2]");
                SetWindowText(hRadio15, "Kilometr kwadratowy [km2]");
                SetWindowText(hRadio16, "Ar [a]");
                SetWindowText(hRadio17, "Hektar [ha]");
                SetWindowText(hRadio18, "Akr [akr]");
                SetWindowText(hRadio19, "Jard Kwadratowy [yr2]");
                SetWindowText(hRadio20, "Stopa Kwadratowa [ft2] ");
                i=2;
        }
            if((HWND) lParam == hPrzycisk3)
        {
                SetWindowText(hRadio1, "Mililitr [ml]");
                SetWindowText(hRadio2, "Litr [l]");
                SetWindowText(hRadio3, "Metr szescienny [mm3]");
                SetWindowText(hRadio4, "Centylitr [cl]");
                SetWindowText(hRadio5, "Galon angielski [gal UK]");
                SetWindowText(hRadio6, "Pinta angielska [pt UK]");
                SetWindowText(hRadio7, "Uncja angielska [oz UK]");
                SetWindowText(hRadio8, "Galon amertkanski [gal US]");
                SetWindowText(hRadio9, "Pinta amerykanska [pt US]");
                SetWindowText(hRadio10, "Uncja amerykanska [oz US]");

                SetWindowText(hRadio11, "Mililitr [ml]");
                SetWindowText(hRadio12, "Litr [l]");
                SetWindowText(hRadio13, "Metr szescienny [mm3]");
                SetWindowText(hRadio14, "Centylitr [cl]");
                SetWindowText(hRadio15, "Galon angielski [gal UK]");
                SetWindowText(hRadio16, "Pinta angielska [pt UK]");
                SetWindowText(hRadio17, "Uncja angielska [oz UK]");
                SetWindowText(hRadio18, "Galon amertkanski [gal US]");
                SetWindowText(hRadio19, "Pinta amerykanska [pt US]");
                SetWindowText(hRadio20, "Uncja amerykanska [oz US]");
                i=3;
        }
            if((HWND) lParam == hPrzycisk4)
        {
                SetWindowText(hRadio1, "Gram [g]");
                SetWindowText(hRadio2, "Kilogram [kg]");
                SetWindowText(hRadio3, "Kwintal [q]");
                SetWindowText(hRadio4, "Tona [t]");
                SetWindowText(hRadio5, "Dram [dr]");
                SetWindowText(hRadio6, "Cetnar [cwt]");
                SetWindowText(hRadio7, "Kamien [st]");
                SetWindowText(hRadio8, "Funt [lb]");
                SetWindowText(hRadio9, "Uncja [oz]");
                SetWindowText(hRadio10, "Gran [gr]");

                SetWindowText(hRadio11, "Gram [g]");
                SetWindowText(hRadio12, "Kilogram [kg]");
                SetWindowText(hRadio13, "Kwintal [q]");
                SetWindowText(hRadio14, "Tona [t]");
                SetWindowText(hRadio15, "Dram [dr]");
                SetWindowText(hRadio16, "Cetnar [cwt]");
                SetWindowText(hRadio17, "Kamien [st]");
                SetWindowText(hRadio18, "Funt [lb]");
                SetWindowText(hRadio19, "Uncja [oz]");
                SetWindowText(hRadio20, "Gran [gr]");
                i=4;
        }
            if((HWND) lParam == hPrzycisk5)
        {
                SetWindowText(hRadio1, "Milisekunda [ms]");
                SetWindowText(hRadio2, "Sekunda [s]");
                SetWindowText(hRadio3, "Minuta [min]");
                SetWindowText(hRadio4, "Godzina [h]");
                SetWindowText(hRadio5, "Doba");
                SetWindowText(hRadio6, "Tydzien");
                SetWindowText(hRadio7, "Miesiac (30 dni)");
                SetWindowText(hRadio8, "Rok");
                SetWindowText(hRadio9, "Dekada");
                SetWindowText(hRadio10, "Tysiaclecie");

                SetWindowText(hRadio11, "Milisekunda [ms]");
                SetWindowText(hRadio12, "Sekunda [s]");
                SetWindowText(hRadio13, "Minuta [min]");
                SetWindowText(hRadio14, "Godzina [h]");
                SetWindowText(hRadio15, "Doba");
                SetWindowText(hRadio16, "Tydzien");
                SetWindowText(hRadio17, "Miesiac (30 dni)");
                SetWindowText(hRadio18, "Rok");
                SetWindowText(hRadio19, "Dekada");
                SetWindowText(hRadio20, "Tysiaclecie");
                i=5;

        }
            if((HWND) lParam == hPrzycisk6)
        {
                SetWindowText(hRadio1, "Bit [b]");
                SetWindowText(hRadio2, "Bajt [B]");
                SetWindowText(hRadio3, "Kilobajt [kB]");
                SetWindowText(hRadio4, "Megabajt [MB]");
                SetWindowText(hRadio5, "Gigabajt [GB]");
                SetWindowText(hRadio6, "Terabajt [TB]");
                SetWindowText(hRadio7, "Petabajt [PB]");
                SetWindowText(hRadio8,"Kilobit [kb]");
                SetWindowText(hRadio9, "Megabit [Mb]");
                SetWindowText(hRadio10, "Gigabit [Gb]");

                SetWindowText(hRadio11, "Bit [b]");
                SetWindowText(hRadio12, "Bajt [B]");
                SetWindowText(hRadio13, "Kilobajt [kB]");
                SetWindowText(hRadio14, "Megabajt [MB]");
                SetWindowText(hRadio15, "Gigabajt [GB]");
                SetWindowText(hRadio16, "Terabajt [TB]");
                SetWindowText(hRadio17, "Petabajt [PB]");
                SetWindowText(hRadio18,"Kilobit [kb]");
                SetWindowText(hRadio19, "Megabit [Mb]");
                SetWindowText(hRadio20, "Gigabit [Gb]");
                i=6;
        }
        if((HWND) lParam == hPrzycisk7)
        {
    //pobranie ilości znaków w polu tekstowym
    DWORD length = GetWindowTextLength(hText);
    //Alokacja pamięci dla znaków w polu tekstowym
    dane = (char*) GlobalAlloc(GPTR, length);
    //Pobranie tekstu z okna i zapisanie go w buforze
    GetWindowText(hText, dane, length + 1 );
    float idane=0;
    idane=atof(dane);
    a=2;
    b=2;
        //odległość i=1, i=2 powierzchnia, i=3 objętość, i-4 masa, i=5 czas, i=6 informacja
        if(i==1)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=1000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=0.0253995;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=0.3047940;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=0.9144;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=1609;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=1852;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=1000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=0.0253995;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=0.3047940;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=0.9144;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=1609;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=1852;}
        }
        if(i==2)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=0.0001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=1000000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=100;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=10000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=4046.8564224011;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=0.83612736;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=0.09290304;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=0.0001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=1000000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=100;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=10000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=4046.8564224011;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=0.83612736;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=0.09290304;}
        }
        if(i==3)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=0.00001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=0.00454609;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=0.00056826125 ;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=0.0000284130625;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=0.0037854118;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=0.0004731765;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=0.00002957353;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.000001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=0.00001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=0.00454609;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=0.00056826125 ;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=0.0000284130625;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=0.0037854118;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=0.0004731765;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=0.00002957353;}
        }
        if(i==4)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=1000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=0.0017718451953125;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=50.8025;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=6.3502990038;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=0.4535927037;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=0.0283495231;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=0.0000647989503;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=0.01;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=1000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=0.0017718451953125;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=50.8025;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=6.3502990038;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=0.4535927037;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=0.0283495231;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=0.0000647989503;}
        }
        if(i==5)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=60;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=3600;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=86400;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=604800;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=2592000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=31557600;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=315576000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=31557600000;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.001;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=60;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=3600;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=86400;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=604800;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=2592000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=31557600;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=315576000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=31557600000;}
        }
        if(i==6)
        {
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK1 ) == BST_CHECKED ))  {a=0.125;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK2 ) == BST_CHECKED ))  {a=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK3 ) == BST_CHECKED ))  {a=1024;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK4 ) == BST_CHECKED ))  {a=1048576;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK5 ) == BST_CHECKED ))  {a=1073741824;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK6 ) == BST_CHECKED ))  {a=1099511531400;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK7 ) == BST_CHECKED ))  {a=1125899755300000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK8 ) == BST_CHECKED ))  {a=128;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK9 ) == BST_CHECKED ))  {a=131072;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK10 ) == BST_CHECKED )) {a=134217728;}

         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK11 ) == BST_CHECKED )) {b=0.125;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK12 ) == BST_CHECKED )) {b=1;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK13 ) == BST_CHECKED )) {b=1024;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK14 ) == BST_CHECKED )) {b=1048576;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK15 ) == BST_CHECKED )) {b=1073741824;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK16 ) == BST_CHECKED )) {b=1099511531400;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK17 ) == BST_CHECKED )) {b=1125899755300000;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK18 ) == BST_CHECKED )) {b=128;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK19 ) == BST_CHECKED )) {b=131072;}
         if (BOOL bChecked =( IsDlgButtonChecked( hwnd, ID_PRZYCISK20 ) == BST_CHECKED )) {b=134217728;}
        }
    idane= (idane*a)/b;
    sprintf(dane, "%f", idane);
    if(i==0){dane="Nie wybrales kategorii";
        a=0;
        b=0;
    }
    if(a==2 or b==2) {dane="Nie zaznaczyles zadnego pola";}
    SetWindowText(hText2,dane);

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


