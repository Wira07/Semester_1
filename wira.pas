unit wira;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ExtCtrls, Buttons;

type
  TForm1 = class(TForm)
    BitBtn1: TBitBtn;
    Batal: TBitBtn;
    Label1: TLabel;
    Edit1: TEdit;
    Label2: TLabel;
    Edit2: TEdit;
    procedure BitBtn1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses Unit2;

{$R *.dfm}
procedure TForm1.BitBtn1Click(Sender: TObject);
begin
if (Edit1.Text = 'Admin') and (Edit2.Text = '4321') then
begin
Showmessage ('Login Berhasil, Selamat Datang '+ Edit1.Text);
exit;
Form2.Show;
end
else
Application.MessageBox('Maaf, Login Gagal','Warning',mb_OK or mb_iconwarning);
end;


end.
