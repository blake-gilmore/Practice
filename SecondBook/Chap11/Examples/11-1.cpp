class circle: public shape
{
    //circle is derived from shape and is a public inheritance
};

class circle: private shape
{
    //private inheritance
    //the public members of shape become private members of the class circle
};