[a,b]=fmincon(@fun3,rand(4,1),-[1 0 0 0;1 1 0 0;1 1 1 0],-[2;5;7],[1 1 1 1],11,zeros(4,1));
a,b