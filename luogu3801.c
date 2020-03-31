#define begin {
#define end ;}
#define read scanf
#define write printf
#define Begin int main(){
#define End ;}
#define shortint char
#define smallint char
#define integer short
#define longint int
#define int64 long long
#define real double
#define single float
#define extended long double
#define dword unsigned int
#define qword unsigned long long
#define word unsigned short
#define byte unsigned char
#define then 
#define Do 
#define repeat do{
#define until(x) }while(!(x))
#define assign(fileobj,filename,rw) freopen(filename,rw,fileobj);
#define input stdin
#define output stdout
#define close(x) fclose(x)
#define function(type) type
#define procedure void
#define var 
#define fillchar(ptr,size,value) memset(ptr,value,size)
#define of {
#define on(value,code) case value: code; break;
#define onelse(code) default: code; break;
#define Case switch
#define exit return
#define Type typedef
#define or |
#define and &
#define xor ^
#define true 1
#define false 0
#define forto(i,_begin,_end) for(i=_begin;i<=_end;++i)
#define fordownto(i,_begin,_end) for(i=_end;i>=_begin;--i)
#define new(ptr,size) ptr=malloc(size)
#define dispose(ptr) free(ptr);
#define div /
#define mod %
#define record struct{
#define self this
#define shl <<
#define shr >>
#define not !
#define Readln scanf("%*[^\n]%*c");
#define Writeln putchar('\n');

#include<stdio.h>



Type longint treearr[100005];
var
    longint n,m,q,i,o,x,y,u,v,x0,x1,y0,y1;
    treearr ax,ay,kx,ky;

procedure ad(longint* a,longint n,longint x,longint d)
begin
    while(x<=n)Do begin
        a[x]+=d;
        x+=x and(-x)
    end
end;

function(longint) sm(longint* a,longint x)
begin
    longint s=0;
    while(x>0)Do begin
        s+=a[x];
        x-=x and(-x)
    end;
    exit(s)
end;

Begin
    read("%d%d%d",&n,&m,&q);
    forto(i,1,q)
    begin
        read("%d%d%d",&o,&x,&y);
        if(o==1)then begin
            ad(kx,n,x,2*(ax[x]=1 xor ax[x])-1);
            ad(ky,m,y,2*(ay[y]=1 xor ay[y])-1);
        end
        else begin
            read("%d%d",&u,&v);
            x1=sm(kx,u)-sm(kx,x-1);
            x0=(u-x+1)-x1;
            y1=sm(ky,v)-sm(ky,y-1);
            y0=(v-y+1)-y1;
            write("%lld\n",x1*(int64)y0+x0*(int64)y1)
        end
    end
End