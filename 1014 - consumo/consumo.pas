program consumo;

uses Sysutils;

function consumo( x : integer; y : real) : real;
begin
    consumo := x / y;
end;

var 
    x : integer;
    y, res : real;

begin
    readLn(x);
    readLn(y);
    res := consumo(x , y);
    WriteLn (Format('%.3f',[res]), ' km/l');
end.