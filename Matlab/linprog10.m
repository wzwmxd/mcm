fun=@(x)([-x(1)^2+x(2)-x(3)^2,-x(1)-x(2)^2+2;...
    x(1)+x(2)^2+x(3)^3-20,x(2)+2*x(3)^2-3]);
[x,y]=fmincon(@(x)(sum(x.^2)+8),rand(3,1),[],[],[],[],zeros(3,1),[],...
fun,optimset('largescale','off'));