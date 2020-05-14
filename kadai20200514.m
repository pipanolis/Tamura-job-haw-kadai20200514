f = zeros(8,1);
f(1) = 0;
f(2) = 1;

for i=1:8
    f(i+2) =  f(i) + f(i+1);
end
