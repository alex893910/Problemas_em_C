/* Q1
#include<stdio.h>
int main(){
    int x,y,p;
printf("Digite os valores de x e y:\n");
scanf("%i",&x); 
scanf("%i",&y); 
p=x*y;
//printf("O produto= %i",x*y);
printf("O produto= %i",p);



return 0;
}

Q-2
#include<stdio.h>
int main()
{
    int numero,numero1;
printf("Digite os numeros\n");
scanf("%d",&numero);
//numero1=numero-1;
//printf("O antecessor de  %d  eh %d ",numero  , numero1);
printf("O Sunessor e anttecessor  de  %d  eh %d  e %d repectivamente ",numero,numero+1  , numero-1);

return 0;
}

Q-3
#include<stdio.h>
int main()
{
    float cociente;
    int resto,x,y;
printf("Digite os numeros x e y \n");
scanf("%d",&x);
scanf("%d",&y);
resto=x%y;
cociente=x/y;


printf("O cociente eh %.0f e o resto eh %d",cociente,resto);


return 0;

} 

Q4
#include<stdio.h>
int main(){
    int x,y;
    //float cociente;
printf("Digite os numeros x e y \n");
scanf("%d",&x);
scanf("%d",&y);
//cociente=x/y;


printf("A soma eh %d, o produto eh %d e o cociente eh %d",x+y,x*y,x/y );


return 0;

 }

Q5
#include<stdio.h>
int main(){
float p,c;
printf("tranforme polegadas em cm \n");
scanf("%f",p);
c==p/2.54;

printf("%f",c);

return 0;

 }

Q-5
#include<stdio.h>
int main(){
float p,c;
printf("Digite um numero em polegadas:\n");
scanf("%f",&p);
c=p/2.54;
printf("%.0f polegadas= %.0f centimetros",p,c);

return 0;
 }

Q-6
#include<stdio.h>
int main(){
float A,pi,r;
printf("Digite o valor do raio da circunferencia:\n");
scanf("%f",&r);
pi=3.14;
A=pi*r*r;
printf("A area da circunferencia  de raio %.0fcm eh %.0fcm",r,A);

return 0;
 }

Q-7
#include<stdio.h>
int main(){
//float r,pi,h;
float r,pi,h,V,A;
pi=3.14;
printf("Digite o raio do cilindro:\n");
scanf("%f",&r);
printf("Digite  a altura do cilindro:\n");
scanf("%f",&h);
V=pi*r*r*h;
A=2*pi*r*(h + r);
//printf("Volume= %.2f , Area=%.2f ",pi*r*r*h,2*pi*r*(h + r));
printf("Volume= %.2f , Area=%.2f ",V,A); 

return 0;
 }
Q-8

#include<stdio.h>
int main(){
float S,ST,V;
//float S,V;
printf("Digite o salario fixo:\n");
scanf("%f",&S);
printf("Digite o total de vendas efetuadas:\n");
scanf("%f",&V);
ST=V*0.15+S;
//printf("salario fixo = R$ %.2f; salario total (Fixo + comissao)= R$ %.2f",S,V*0.15+S);
printf("salario fixo = R$ %.2f; salario total (Fixo + comissao)= R$ %.2f",S,ST);

return 0;
 }
 Q-9

#include<stdio.h>
int main(){
int A,B,temp;
printf("Digite o valor de A :\n");
scanf("%d",&A);
printf("Digite o valor de B:\n ");
scanf("%d",&B);
temp=A;
A=B;
B=temp;
printf("A=%d\n ",A);
printf("B=%d\n ",B);
return 0;
 }

Q-10
kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk


Q-11
#include<stdio.h>
int main(){
float m1,m2,md,mt;
m1=(4+5+6)/3;
m2=(7+8+9)/3;
mt=m1+m2;
md=(m1+m2)/2;
printf("Soma das medias=%.0f; Media das medias=%.0f",mt,md);
return 0;
 }

Q-13
#include<stdio.h>

int main(){
float PF,PT;
//float PF=0;
printf("Digite o valor de fabrica do automovel:");
scanf("%f",&PF);
PT=PF+(PF*0.45+0.28*PF);
//printf("O preco do automovel eh %.2f",PF+((PF*0.45)+(0.28*PF)));
printf("O preco do automovel eh %.2f",PT);
return 0;
 }
 Q13 kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

Q-14
    #include<stdio.h>
    int main(){
    int x;
    printf("Digite o numero:");
    scanf("%d",&x);
    if(x==0){printf(" Zero X=%d",x); }
    else
    {
        if(x>0)
        {
            printf("Positivo X=%d",x);
        }
        else
        {
            printf("Negativo X=%d",x);
        }   
    }
return 0;
 }

Q-15  kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

Q-16
  #include<stdio.h>
  int main(){
    int x;
    printf("Digite o valor:");
    scanf("%d",&x);
    if(x>0){
        printf("Numero=%d",x);
    }
    else{
        printf("Numero=%d",x*-1);
    }
    

  return 0;
 }

 Q-17

#include<stdio.h>
  int main(){
    int x,y;
  printf("Digite os dois numero:");
  scanf("%d",&x);
  scanf("%d",&y);
  
    if(x==y){ printf("Os dois numeros sao iguais");}
    else
    {
    if(x>y)
    {
        printf("Os dois numeros sao diferenetes.   %d eh maior que %d",x,y);
    }
    else
    {
        printf("Os dois numeros sao diferenetes.  %d eh maior que %d",y,x);
    }
    }

  return 0;
 }

Q-18
#include<stdio.h>
  int main(){
    float n;
  printf("Digite os dois numero:");
  scanf("%f",&n);
  if(n<12){ printf("As macas custam %.2f:",n*0.30);}
  else
  {
    printf("As macas custam %.2f:",n*0.25);
  }

  return 0;
 }

Q-19
#include<stdio.h>
int main(){
int n1,n2,n3;
printf("Digite tres numeros:\n");
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
if((n1>n2)&&(n1>n3)){printf("O maior numero eh %d",n1); }
else
{
    if((n2>n1)&&(n2>n3)){printf("O maior numero eh %d",n2);}
else
{
    printf("O maior numero eh %d",n3);
}

}

return 0;
 }

Q-20
#include<stdio.h>
int main(){
int a,b,c;
printf("Digite tres numeros:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((a<b)&&(b<c)){printf("A ordem crecente eh %d, %d, %d",a,b,c);}
else
{
if((a<b)&&(b>c)){ printf("A ordem crescente eh %d, %d, %d",a,c,b);}
else
{
   if((a>b)&&(b<c)){ printf("A ordem crescente eh %d, %d, %d",b,a,c); }

 else
 {
    if((a>b)&&(b>c)){ printf("A ordem crescente eh %d, %d, %d",c,b,a);}
 }  
   
}

}
return 0;
 }

Q-21
#include<stdio.h>
int main(){
int a,b,c;
printf("Digite  os lado do triangula:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);


  if((a==b)&&(b==c)){printf("Triangulo equilatero");}
  else
  {
    if((a==b)&&(a!=c)){printf("Triangulo isoceles");}
    else
    {
      if((a!=b)&&(b!=c)&&(a!=c)){printf("Triangulo escaleno");}
    }

  }


return 0;}

Q-22  kkkkkkkkkkkkkkkkkkkkkkkkk
 

 Q-23

#include<stdio.h>
#include<math.h>
int main()
{


double x=0,y=0,raiz=0,d=0,a=0,b=0,c=0,v=0;

printf("Digite o valor da variavel A da Equacao do 2° Grau:\n");
scanf("%lf",&a);
printf("Digite o valor da variavel B da Equacao do 2° Grau:\n");
scanf("%lf",&b);
printf("Digite o valor da variavel C da Equacao do 2° Grau:\n");
scanf("%lf",&c);

d=(b*b)-(4*a*c);
raiz=sqrt(d);
//printf("Raiz de   %.0f eh %.0lf",d,raiz);

x=(-1*(b)+raiz)/(2*a);
y=(-1*(b)-raiz)/(2*a);
v==x;

if(d<0){printf("A Equacao nao tem raizes reais V= ##");}
else{
 if(raiz>0){printf("A equacao tem duas raizes reais  diferentes e sao  %.2lf e %.2lf",x,y);}
 else{
  if(d==0){ 
    printf("A equacao tem raizes iguais V= %.2lf ",v);}
 }

}


return 0;
 }


#include<stdio.h>
int main(){

float KWh,VF,VP,cod;

printf("Digite  O consumo em KWh:\n");
scanf("%f",&KWh);
printf("Digite o codigo da classse A=0.5, B=0.8, C=1.oo:\n");
scanf("%f",&cod);
VF=KWh*cod;
VP=VF+0.3*VF;
printf("O valor do imposto sem icms eh R$ %.2f",VF);
printf("\nO valor do imposto COM icms eh R$ %.2f",VP);

return 0;
}

kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
Aula fred
#include<stdio.h>
int main(){

char nome[12];

printf("Digite seu nome\n");
fgets(nome,30,stdin);
fflush(stdin);
printf("Munito prazer %s\n",nome);

return 0;
}

#include<stdio.h>
int main(){

int x,y;

printf("Digite seu nome de x:%i\nvalor de y: %i",x,y);
getchar();
fflush(stdin);


return 0;
}


#include<stdio.h>
int f1()
{
  static int x=0;

x=x+1;
printf("Valor de x: %i\n",x);
return 0;

}
int main()
{

f1();
f1();
f1();


return 0;
}


#include<stdio.h>
#define comissao 0.3 // define o valor de uma contante sem gastar memoria
int main()
{
  double venda;
  printf("Digite o valor da vneda: ");
  scanf( "%lf",&venda);
  printf("Comissao=%.2lf\n",venda*comissao);


return 0;
}

#include<stdio.h>
#define SOMA(a,b)(a+b)// define o valor de uma contante sem gastar memoria
int main()
{
  int a,b;
  printf("Digite oo valor de A: ");
  canf("%d",&a);
  printf("Digite oo valor de B: ");
  canf("%d",&b);
  printf("%d+%d=%d\n",a,b,SOMA(a,b));



return 0;
}

#include<stdio.h>
#define  escreva printf// define as entradas em portugues 
#define  leia scanf
int main(){
  int x;
  escreva("Digite o valor de A:\n");
  leia("%d",&x);
  escreva("O valor eh %d",x);


return 0;
}

*/

#include<stdio.h>

int main(){
int a,b;
for{

  
 }



return 0;
}


