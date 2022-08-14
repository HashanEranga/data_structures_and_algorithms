template<typename T>
class Vector{
    // array
    private : T * arr;
    private : int cs;
    private : int ms;

    // constructor
    public : Vector(){
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }

    // add elements to the end of the array
    void push_back(const int d){
        if(cs == ms){
            // save the prev array in another array
            T * oldArr = arr;

            // double the maximum size 
            ms = 2*ms;

            // create a new array
            arr = new T[ms];

            // populate the array with prev data
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }

            // delete the old array
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    // override [] operator
    T operator[](int i){
        return arr[i];
    }

    // size of the array
    int size() const{
        return cs;
    }

    // push back 
    void pop_back(){
        if(cs>0){
            cs--;
        }
    }

    // front 
    T front() const{
        return arr[0];
    }

    // back 
    T back() const{
        return arr[cs-1];
    }

    // at 
    T at(int i) const{
        if(cs!=0){
            return arr[i];
        }
        else return -1;
    }

    // capacity of an vector structure
    const int capacity() const{
        return ms;
    }

};