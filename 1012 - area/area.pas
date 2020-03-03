program area( Input, Output);

uses 
    Sysutils;

function areadotrianguloretangulo( baseA: Double; alturaC: Double) : Double;
begin
    areadotrianguloretangulo:= ((baseA * alturaC) / 2.0 );
end;

function areadocirculo( raioC : Double ) : Double;
begin
    areadocirculo := ( 3.14159 * raioC * raioC);
end;

function areadotrapezio( baseA : Double ; baseB : Double ; alturaC : Double ) : Double;
begin
    areadotrapezio := (((baseA + baseB) * alturaC ) / 2.0 );
end;

function areadoquadrado( ladoB : Double ) : Double;
begin
    areadoquadrado := (ladoB * ladoB);
end;

function areadoretangulo( ladoA : Double; ladoB : Double ) : Double;
begin
    areadoretangulo := (ladoA * ladoB);
end;

var 
    a, b, c : Double;
    atr, ac, at, aq, ar : Double;

begin
    readLn (a, b, c);
    atr := areadotrianguloretangulo( a, c );
    ac := areadocirculo( c );
    at := areadotrapezio( a, b, c);
    aq := areadoquadrado( b );
    ar := areadoretangulo(a, b);

    writeln('TRIANGULO: ', Format('%.3f',[atr]));
    writeln('CIRCULO: ', Format('%.3f',[ac]));
    writeln('TRAPEZIO: ', Format('%.3f',[at]));
    writeln('QUADRADO: ', Format('%.3f',[aq]));
    writeln('RETANGULO: ', Format('%.3f',[ar]));

end.
