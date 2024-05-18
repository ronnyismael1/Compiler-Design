program presidents;
const
    max = 20;
type
    president = record {Declare as record for mixed data items}
        startYear, endYear : integer;
        firstName, lastName, middleName : string;
    end;
var
    arrPres : array [1..max] of president; {president array}
    arrSearch : array [1..max] of integer; {array to store search}
    found : boolean;
    numPresidents, searchYear, i : integer;

// Read from president.txt file
procedure readTxt;
var
    textFile : string;
    F : text;
    i : integer;
begin
    write('Input file name: '); readln(textFile); {Choose file to open}
    assign(F,textFile); {Associate file}
    reset(F); {Open file}
    i := 0; {Init variable}
    while not eof(F) do {Read until file ends}
    begin
        i := i + 1; {Inc in each loop}
        with arrPres[i] do {Read strings}
            readln(F,startYear,endYear,firstName,middleName,lastName);
        if arrPres[i].startYear = -1 then break; {exit}
    end;
    numPresidents := i-1;
    close(F); {close file}
end;

// Routine to swap in sort routine
procedure Swap(var pres1, pres2 : president);
var
    tempPres : president;
begin
    tempPres := pres1;
    pres1 := pres2;
    pres2 := tempPres;
end;

// Sort the Presidents
procedure sort; {We will use a simple sort by start year to organize}
var
    i,j : integer;
begin
    for i := 1 to max-1 do
    for j := i+1 to max do
        if arrPres[i].startYear < arrPres[j].startYear then
            Swap(arrPres[i],arrPres[j]);
end; 

// Search Results
procedure search;
var
    i : integer;
begin
    writeln('Search Results... ');
    repeat
        found := false;
        readln(searchYear);
        if searchYear = -1 then break; {Reaches end of search results}
        for i := 1 to numPresidents do
        begin
            if (arrPres[i].startYear <= searchYear) and (searchYear <= arrPres[i].endYear) then;
            begin
                found := true;
                writeln(searchYear, ' ', arrPres[i].firstName, ' ', arrPres[i].middleName, ' ', arrPres[i].lastName);
            end;
        end;
        if not found then writeln(searchYear, 'No President Found.')
    until false;
end;

begin
    readtxt;
    sort;
    writeln('Presidents by Term Served: ');
    for i := 1 to numPresidents do
    with arrPres[i] do
        writeln(firstName, ' ', middleName, ' ', lastName);
    search;
end.

