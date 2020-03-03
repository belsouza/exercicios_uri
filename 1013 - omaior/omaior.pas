program omaior(Input, Output);


function maiordedois( var a: integer; var b: integer) : integer;
begin    
    maiordedois := ((a + b + (abs(a - b))) div 2 );
end;

function maiordetres( var a : integer; var b : integer; var c : integer ) : integer;
var
    p1: integer;
begin
    p1 := maiordedois(a, b);
    maiordetres := maiordedois(p1, c);
end;

var
    a, b, c, maior : integer;

begin
    read(a, b, c);
    maior := maiordetres(a, b, c);
    Writeln( maior ,' eh o maior');
end.