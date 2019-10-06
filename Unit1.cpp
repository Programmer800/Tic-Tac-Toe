//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
char p1, p2, p3, p4, p5, p6, p7, p8, p9;
char kto;
void sprawdz()
{
if ((p1 == p2 && p2 == p3 && p3 != 'n') || (p4 == p5 && p5 == p6 && p4 != 'n') || (p7 == p8 && p8 == p9 && p7 != 'n') ||
   (p1 == p4 && p4 == p7 && p1 != 'n') || (p2 == p5 && p5 == p8 && p2 != 'n') || (p3 == p6 && p6 == p9 && p3 != 'n') ||
  (p1 == p5 && p5 == p9 && p1 != 'n') || (p3 == p5 && p5 == p7 && p3 != 'n'))
  {
  char * w;
  if (kto == 'x') w = "Wygrywa kó³ko!";
   else w = "Wygrywa krzy¿yk!";
   {
  Application->MessageBox(w, "Koniec gry", MB_OK);
  Form1->pole1->Enabled=false;  Form1->pole4->Enabled=false;  Form1->pole7->Enabled=false;
  Form1->pole2->Enabled=false;  Form1->pole5->Enabled=false;  Form1->pole8->Enabled=false;
  Form1->pole3->Enabled=false;  Form1->pole6->Enabled=false;  Form1->pole9->Enabled=false;//MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES
}
}
}
void Remis()
{
if (p1 != 'n' && p2 != 'n' && p3 != 'n' && p4 != 'n' && p5 != 'n' && p6 != 'n' && p7 != 'n' && p8 != 'n' && p9 != 'n')
if ((p1 == p2 && p2 == p3 && p3 != 'n') || (p4 == p5 && p5 == p6 && p4 != 'n') || (p7 == p8 && p8 == p9 && p7 != 'n') ||
   (p1 == p4 && p4 == p7 && p1 != 'n') || (p2 == p5 && p5 == p8 && p2 != 'n') || (p3 == p6 && p6 == p9 && p3 != 'n') ||
  (p1 == p5 && p5 == p9 && p1 != 'n') || (p3 == p5 && p5 == p7 && p3 != 'n'))
  {}
  else
 Application->MessageBox("Nikt nie wygra", "Koniec gry", MB_OK);
}
void rysuj()
{
if (p1 == p2 && p2 == p3 && p3 != 'n')
    if (kto == 'x')
    {
        Form1->pole1->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole2->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole3->Picture->LoadFromFile("img/oh.bmp");
        }
        else
        {
        Form1->pole1->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole2->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole3->Picture->LoadFromFile("img/xh.bmp");
        }
      if (p4 == p5 && p5 == p6 && p4 != 'n')
         if (kto == 'x')
    {
        Form1->pole4->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole5->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole6->Picture->LoadFromFile("img/oh.bmp");
        }
        else
        {
        Form1->pole1->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole2->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole3->Picture->LoadFromFile("img/xh.bmp");
        }
     if (p7 == p8 && p8 == p9 && p7 != 'n')
        if (kto == 'x')
    {
        Form1->pole7->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole8->Picture->LoadFromFile("img/oh.bmp");
        Form1->pole9->Picture->LoadFromFile("img/oh.bmp");
        }
        else
        {
        Form1->pole7->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole8->Picture->LoadFromFile("img/xh.bmp");
        Form1->pole9->Picture->LoadFromFile("img/xh.bmp");
        }
    if (p1 == p4 && p4 == p7 && p1 != 'n')
        if (kto == 'x')
        {
        Form1->pole1->Picture->LoadFromFile("img/od.bmp");
        Form1->pole4->Picture->LoadFromFile("img/od.bmp");
        Form1->pole7->Picture->LoadFromFile("img/od.bmp");
        }
        else
        {
        Form1->pole1->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole4->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole7->Picture->LoadFromFile("img/xd.bmp");
        }
    if (p2 == p5 && p5 == p8 && p2 != 'n')
        if (kto == 'x')
        {
        Form1->pole2->Picture->LoadFromFile("img/od.bmp");
        Form1->pole5->Picture->LoadFromFile("img/od.bmp");
        Form1->pole8->Picture->LoadFromFile("img/od.bmp");
        }
        else
        {
        Form1->pole2->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole5->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole8->Picture->LoadFromFile("img/xd.bmp");
        }
     if (p3 == p6 && p6 == p9 && p3 != 'n')
        if (kto == 'x')
        {
        Form1->pole3->Picture->LoadFromFile("img/od.bmp");
        Form1->pole6->Picture->LoadFromFile("img/od.bmp");
        Form1->pole9->Picture->LoadFromFile("img/od.bmp");
        }
        else
        {
        Form1->pole3->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole6->Picture->LoadFromFile("img/xd.bmp");
        Form1->pole9->Picture->LoadFromFile("img/xd.bmp");
        }
     if (p3 == p5 && p5 == p7 && p3 != 'n')
        if (kto == 'x')
    {
        Form1->pole3->Picture->LoadFromFile("img/ol.bmp");
        Form1->pole5->Picture->LoadFromFile("img/ol.bmp");
        Form1->pole7->Picture->LoadFromFile("img/ol.bmp");
        }
        else
        {
        Form1->pole3->Picture->LoadFromFile("img/xl.bmp");
        Form1->pole5->Picture->LoadFromFile("img/xl.bmp");
        Form1->pole7->Picture->LoadFromFile("img/xl.bmp");
        }
     if (p1 == p5 && p5 == p9 && p1 != 'n')
        if (kto == 'x')
        {
        Form1->pole1->Picture->LoadFromFile("img/op.bmp");
        Form1->pole5->Picture->LoadFromFile("img/op.bmp");
        Form1->pole9->Picture->LoadFromFile("img/op.bmp");
        }
        else
        {
        Form1->pole1->Picture->LoadFromFile("img/xp.bmp");
        Form1->pole5->Picture->LoadFromFile("img/xp.bmp");
        Form1->pole9->Picture->LoadFromFile("img/xp.bmp");
        }
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   pole1->Picture->LoadFromFile("img/nic.bmp");
    pole2->Picture->LoadFromFile("img/nic.bmp");
     pole3->Picture->LoadFromFile("img/nic.bmp");
      pole4->Picture->LoadFromFile("img/nic.bmp");
       pole5->Picture->LoadFromFile("img/nic.bmp");
        pole6->Picture->LoadFromFile("img/nic.bmp");
         pole7->Picture->LoadFromFile("img/nic.bmp");
          pole8->Picture->LoadFromFile("img/nic.bmp");
           pole9->Picture->LoadFromFile("img/nic.bmp");
            tura->Picture->LoadFromFile("img/osmall.bmp");
   p1 = 'n';  p4 = 'n';  p7 = 'n';                     pole1->Enabled=true;  pole4->Enabled=true;  pole7->Enabled=true;
    p2 = 'n';  p5 = 'n';  p8 = 'n';                      pole2->Enabled=true;  pole5->Enabled=true;  pole8->Enabled=true;
     p3 = 'n';  p6 = 'n';  p9 = 'n';                       pole3->Enabled=true;  pole6->Enabled=true;  pole9->Enabled=true;
     kto = 'o';

}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole1Click(TObject *Sender)
{
if (p1 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole1->Picture->LoadFromFile("img/o.bmp");
p1 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole1->Picture->LoadFromFile("img/x.bmp");
p1 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole1->Enabled=false;
rysuj();
Remis();
sprawdz();
}        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole2Click(TObject *Sender)
{
if (p2 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole2->Picture->LoadFromFile("img/o.bmp");
p2 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole2->Picture->LoadFromFile("img/x.bmp");
p2 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole2->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole3Click(TObject *Sender)
{
if (p3 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole3->Picture->LoadFromFile("img/o.bmp");
p3 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole3->Picture->LoadFromFile("img/x.bmp");
p3 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole3->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole4Click(TObject *Sender)
{
if (p4 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole4->Picture->LoadFromFile("img/o.bmp");
p4 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole4->Picture->LoadFromFile("img/x.bmp");
p4 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole4->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole5Click(TObject *Sender)
{
if (p5 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole5->Picture->LoadFromFile("img/o.bmp");
p5 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole5->Picture->LoadFromFile("img/x.bmp");
p5 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole5->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole6Click(TObject *Sender)
{
if (p6 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole6->Picture->LoadFromFile("img/o.bmp");
p6 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole6->Picture->LoadFromFile("img/x.bmp");
p6 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole6->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole7Click(TObject *Sender)
{
if (p7 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole7->Picture->LoadFromFile("img/o.bmp");
p7 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole7->Picture->LoadFromFile("img/x.bmp");
p7 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole7->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole8Click(TObject *Sender)
{
if (p8 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole8->Picture->LoadFromFile("img/o.bmp");
p8 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole8->Picture->LoadFromFile("img/x.bmp");
p8 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole8->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole9Click(TObject *Sender)
{
if (p9 == 'n')
{
if (kto == 'o')
{
kto = 'x';
pole9->Picture->LoadFromFile("img/o.bmp");
p9 = 'o';
tura->Picture->LoadFromFile("img/xsmall.bmp");
}
else
{
kto = 'o';
pole9->Picture->LoadFromFile("img/x.bmp");
p9 = 'x';
tura->Picture->LoadFromFile("img/osmall.bmp");
}
pole9->Enabled=false;
rysuj();
Remis();
sprawdz();
}
}
//---------------------------------------------------------------------------





