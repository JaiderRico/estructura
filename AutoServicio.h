#ifndef AUTOSERVICIO

#define AUTOSERVICIO


class AutoServicio{
    
    public:
        void ListarPrecios();
        
    private:
        float saldo;
        float precioCorriente = 15000;
        float precioDiesel = 11800;
        float precioExtra = 19700;
    
};


void AutoServicio::ListarPrecios(){
    
    cout << "------ Precio por Galon ------" << endl;
    cout << "Diesel: " << precioDiesel << endl;
    cout << "Corriente: " << precioCorriente << endl;
    cout << "Extra: " << precioExtra << endl;
    cout << "------------------------------" << endl;
}


#endif 

