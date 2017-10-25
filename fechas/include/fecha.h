#ifndef FECHA_H
#define FECHA_H


class fecha
{
    public:
        int mes,anho,dia;
        fecha();
        fecha(int m,int a,int d);
        void bisiesto();
        void fechatrue();
        void aumentar();


};

#endif // FECHA_H
