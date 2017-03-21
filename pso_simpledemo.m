function [best]=pso_simpledemo(n,Num_iterations)
if nargin<2, Num_iterations=10; end
if nargin<1, n=20;  end
str1='-sin(x)*(sin(x^2/3.14159))^20';
str2='-sin(y)*(sin(2*y^2/3.14159))^20';
funstr=strcat(str1,str2);
f=vectorize(inline(funstr));
range=[0 4 0 4];
beta=0.5;
Ngrid=100;
dx=(range(2)-range(1))/Ngrid;
dy=(range(4)-range(3))/Ngrid;
xgrid=range(1):dx:range(2); ygrid=range(3):dy:range(4);
[x,y]=meshgrid(xgrid,ygrid);
z=f(x,y);
figure(1);
surfc(x,y,z);
best=zeros(Num_iterations,3);
[xn,yn]=init_pso(n,range);
figure(2);
for i=1:Num_iterations,
    counter(x,y,z,15);hold on;
    zn=f(xn,yn);
    zn_min=min(zn);
    xo=min(xn(zn==zn_min));
    yo=min(yn(zn==zn_min));
    zo=min(zn(zn==zn_min));
    plot(xn,yn,'.',xo,yo,'*');axis(range);
    gamma=0.7;alpha=gamma.^i;
    [xn,yn]=pso_move(xn,yn,xo,yo,alpha,beta,range);
    drawnow;
    hold off;
    best(i,1)=xo;best(i,2)=yo;best(i,3)=zo;
end
function [xn,yn]=pso_move(xn,yn,xo,yo,a,b,range)
nn=size(yn,2);
xn=xn.*(1-b)+xo.*b+a.*(rand(1,nn)-0.5);
yn=yn.*(1-b)+yo.*b+a.*(rand(1,nn)-0.5);
[xn,yn]=findrange(xn,yn,range);
nn=length(yn);
for i=1:nn,
    if xn(i)<=range(1), xn(i)=range(1); end
    if xn(i)>=range(2), xn(i)=range(2); end
    if yn(i)<=range(3), yn(i)=range(3); end
    if yn(i)>=range(4), yn(i)=range(4); end
end

