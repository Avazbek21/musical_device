//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int media=0;
int i=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BPlayMClick(TObject *Sender)     //play music
{
 if(ListBox1->ItemIndex>=0) {
     MediaPlayer1->FileName=ListBox1->Items->Strings[ListBox1->ItemIndex];
     MediaPlayer1->Open();
     MediaPlayer1->Play();
 }else if(OpenDialog1->Execute()) {
     ListBox1->Items->Add(OpenDialog1->FileName);
     if(ListBox1->ItemIndex<0)
         ListBox1->ItemIndex=0;
     MediaPlayer1->FileName=ListBox1->Items->Strings[ListBox1->ItemIndex];
     MediaPlayer1->Open();
     MediaPlayer1->Play();
 }
 media=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BOpenMClick(TObject *Sender)    //load music
{
 if(OpenDialog1->Execute()) {
     ListBox1->Items->Add(OpenDialog1->FileName);
     if(ListBox1->ItemIndex<0)
         ListBox1->ItemIndex=0;
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BPauseMClick(TObject *Sender)   //pause music
{
 if(media==1)
     MediaPlayer1->Pause();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::BStopMClick(TObject *Sender)    //stop music
{
 if(media==1)
    MediaPlayer1->Stop();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BNextMClick(TObject *Sender)    //next music
{if(media==1) {
     i=ListBox1->ItemIndex+1;
     if(i==ListBox1->Count)
         i=0;
     ListBox1->ItemIndex=i;    
     MediaPlayer1->FileName=ListBox1->Items->Strings[i];
     MediaPlayer1->Open();
     MediaPlayer1->Play();
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BPrevMClick(TObject *Sender)    //previous music
{
 if(media==1) {
     i=ListBox1->ItemIndex-1;
     if(i<0)
         i=ListBox1->Count-1;
     ListBox1->ItemIndex=i;
     MediaPlayer1->FileName=ListBox1->Items->Strings[i];
     MediaPlayer1->Open();
     MediaPlayer1->Play();
 }
}
//---------------------------------------------------------------------------

