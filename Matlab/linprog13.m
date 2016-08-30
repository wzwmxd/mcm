%population in China
a=1.029;
b=1.48654*10^(-11);
y_start=1979;
y_end=2017;
t=[y_start:y_end];
t1=t-y_start+1;
x(1)=9.7542*10^8;
for i=2:t1(end)
    x(i)=a*x(i-1)-b*x(i-1)*x(i-1);
    fprintf('%6d %7.5f\n',i+y_start-1,x(i)/10^8)
end