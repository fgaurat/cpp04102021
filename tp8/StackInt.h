


class StackInt{

    private:
        int *stack;
        int capacity;// capacité totale
        int size; // nombre d'entier dans la stack
    public:
        StackInt();         //1 
        StackInt(int);      //2 
        StackInt(const StackInt&);      //2 
        ~StackInt();        //3
        int getSize();      //5
        int getCapacity();  //4
        void append(int);   //6
        void show();        //7
        int pop();          //8
};