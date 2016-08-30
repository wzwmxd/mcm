function sorted=mysort(A)
len=size(A,1)
for i=1:floor(len/2)
    key=A(i)
    A(i)=A(len+1-i);
    A(len+1-i)=key;
end
sorted=A;
end