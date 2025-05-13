//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <MPlayer.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TMediaPlayer *MediaPlayer1;
    TListBox *ListBox1;
    TSpeedButton *BPlayM;
    TSpeedButton *BPauseM;
    TSpeedButton *BStopM;
    TSpeedButton *BNextM;
    TSpeedButton *BPrevM;
    TSpeedButton *BOpenM;
    TOpenDialog *OpenDialog1;
    void __fastcall BPlayMClick(TObject *Sender);
    void __fastcall BOpenMClick(TObject *Sender);
    void __fastcall BPauseMClick(TObject *Sender);
    void __fastcall BStopMClick(TObject *Sender);
    void __fastcall BNextMClick(TObject *Sender);
    void __fastcall BPrevMClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
