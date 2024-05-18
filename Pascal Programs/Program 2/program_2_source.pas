program arrayPlayground;
    const {Declaring constants}
        n = 20;
        m = 40;
            
    var {Declaring variables}
        arrA, arrB : array[1..n] of integer; 
        arrC : array[1..m] of integer; 
        countA, countB, countC, i : integer;
        
    // Routine to print arrays
    procedure print(arr : array of integer; len : integer);
    var
        i : integer;
    begin
        for i := 0 to len-1 do
        begin
            write(arr[i], ' ')
        end;
        writeln;
    end;
    
    // Routine to merge the arrays and sort them
    procedure merge(var arrA, arrB, arrC : array of integer; countA, countB : integer);
    var
        i, j, k : integer;
    begin
        i := 0;
        j := 0;
        k := 0;
        while (i < countA) and (j < countB) do
        begin
            if arrA[i] < arrB[j] then
            begin
                arrC[k] := arrA[i];
                i := i + 1;
            end
            else
            begin
                arrC[k] := arrB[j];
                j := j + 1;
            end;
            k := k + 1;
        end;
        
        while i < countA do
        begin
            arrC[k] := arrA[i];
            i := i + 1;
            k := k + 1;
        end;
        
        while j < countB do
        begin
            arrC[k] := arrB[j];
            j := j + 1;
            k := k + 1;
        end;
        countC := countA + countB;
    end;
        
    begin
        // Get size of arrA
        write('How many values for Array A?: ');
        readln(countA);
        // Get values for arrA
        for i := 1 to countA do
        begin
            write('Enter value ', i,' for Array A: '); 
            readln(arrA[i]);
        end;
            
        // Get size of arrB
        writeln;
        write('How many values for Array B?: ');
        readln(countB);
        // Get values for arrB
        for i := 1 to countB do
        begin
            write('Enter value ', i, ' for Array B: '); 
            readln(arrB[i]);
        end;
        writeln;
        
        // Merge Routine
        Merge(arrA, arrB, arrC, countA, countB);
        
        // Print Routine
        print(arrA, countA);
        print(arrB, countB);
        print(arrC, countC);
    end.
end.
