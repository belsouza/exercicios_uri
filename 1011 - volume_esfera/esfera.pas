program esfera(input,output);

uses 
    SysUtils;

function vesfera( var raio:Double ) : Double;
begin
    vesfera:= (4.0 / 3.0) * 3.14159 * raio * raio * raio;
end;

var
    raio, vol: Double;

begin
    readLn(raio);
    vol := vesfera(raio);
    writeln('VOLUME = ', Format('%.3f', [vol]));
end.