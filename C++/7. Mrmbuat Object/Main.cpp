#include <iostream>
using namespace std;

class DenganConstructor
{
public:
    string data;

    DenganConstructor(const char *data)
    {
        DenganConstructor::data = data;
    }

    void show()
    {
        cout << "ini" << DenganConstructor::data << endl;
    }
};

class TanpaConstructor
{
public:
    string data;

    void show()
    {
        cout << "ini" << TanpaConstructor::data << endl;
    }
};

int main(int argc, char const *argv[])
{
    // INI SEMUA ALOKASI MEMORYNYA ADA DI STACK
    // 1. Cara membuat object tanptaconstructor
    TanpaConstructor object1; /* Karena tanpa constructor kita tidak perlu menginisialisasi nilai awalnya. Caranya */
    object1.data = " object 1";
    object1.show();

    // 2. Cara membuat object Denganconstructor
    DenganConstructor object2 = DenganConstructor(" Object 2");
    object2.show();
    /* Cara lainnya */
    DenganConstructor object3(" Object 3");
    object3.show();

    // MEMBUAT OBJECT PADA HEAP MEMORY
    DenganConstructor *object4 = new DenganConstructor(" Object 4");
    (*object4).show(); // dereference
    object4->show();   // arrow function, mapping function atau attribute dari pointer
    string data = object4->data;
    cout << data << endl;

    // Kenapa?
    // DenganConstructor object5;
    // object5 = new DenganConstructor(" Object 5");    // ini akan error

    DenganConstructor *object5;
    object5 = new DenganConstructor(" Object 5");
    object5->show();
    // ini bisa karena di c++ sangat strict dengan yang namanya memory dan address

    return 0;
}
