program difpas(Input,Output);

function diferenca( a:Integer; b:Integer; c:Integer; d:Integer  ):Integer;
begin
    diferenca := (a * b)-(c * d)
end;

var 
    a, b, c, d, diff  : Integer;

begin

    readLn(a);
    readLn(b);
    readLn(c);
    readLn(d);
    diff := diferenca(a, b, c, d);
    writeln ('DIFERENCA = ', diff);
end.