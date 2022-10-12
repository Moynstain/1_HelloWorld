//
// Created by Moynstain_MBA on 2022/2/15.
//

#include "iostream"
#include "cstdio"
#include "cstring"
#include "vector"
#include "array"
using namespace std;

// Chap 4.2 char类
int CHAR(int test_char){
    char dog[4] = {'a','b','c','d'};
    char cat[4] = {'a','b','\0','d'};
    char bird[18] = "Mr. Cheeps";
    char fish[] = "Bubbles";
    cout << "dog: " << dog << endl;
    cout << "cat: " << cat << endl;
    cout << "bird: " << bird << endl;
    cout << "fish: " << fish << endl;
    cout << "字符串拼接：" "123" "456\n";
    int name_size = 20;
    char name[name_size];
    // 面向行的输入 cin.getline()
    cin.getline(name,name_size);
    cout << name << endl;
    // 面向行的输入 cin.get()
    // get()第一次调用后会将换行符留在队列中，因此需跨过队列中的换行符才能继续获取数据
    // 案例如下所示：
    cin.get(name, name_size) .get(); // 借助第二个.get()跨过换行符
    cout << "=== Chap 4.2 CHAR passed. ===\n" "=== 2022/2/15 ===";
    return 0;
}

// Chap 4.3 string类
int String(int test_string){
    string a = "the first string";
    cout << a[4] << endl;
    string b = " is good.";
    auto c = a + b;
    cout << "string a + string b = " << c << endl;
    cout << c.size() << endl;

    string str;
    cout << R"(随便输入个啥：)";
    getline(cin, str);
    cout << str << endl;
    cout << R"(原始字符串：不需要使用 \" 表示 引号" )" << endl;
    cout << R"=(在 R" 与 (间添加其他符号，可以实现原始字符串中显示 )" 部分。)=" << endl;

    cout << "=== Chap 4.3 STRING passed === \n" << "=== 2022/2/16 ===";
    return 0;
}

// Chap 4.4 STRUCTURE 2022/2/16
int Structure(int test_structure){
    struct inflatable{
        // inflatable: function name of this structure method
        string name;
        float volume;
        double price;
    };
    inflatable hat, mainframe;
    hat.volume = 1;
    mainframe.price = 29.99;
    inflatable cushion = {
            "Glory",
            2.2,
            2.22
    };
    inflatable wowkie = {};
    cout << cushion.name << endl;
    cout << wowkie.name << endl;

    struct struct_example {string name; double price = 2.99; int number = 5;};
    struct_example struct_1, struct_2;
    struct_1 = {"example1", 29.99, 10};
    struct_example matrix_test[4];
    matrix_test[0].name = "name";
    matrix_test[1].price = 1.99;
    matrix_test[2].number = 20;

    struct_example matrix_test2[2] {
            {"test1", 1.99, 10},
            {"name2", 2.00, 10},
    };

    cout << "=== Chap 4.4 STRUCTURE passed ===\n";
    cout << "=== 2022/2/17 ===";
    return 0;
}

// Chap 4.5 Union 2022/2/17
int Union(int test_val){
    // 共用体可存储不同类型的数据
    // 但只能同时存储其中一种

    union test_func1 {
        int int_val;
        long long_wal;
        double double_val;
    };
    test_func1 pail;
    pail.int_val = 15;
    cout << pail.int_val << endl;
    cout << pail.double_val << endl; // Default value as 2.122e-314
    pail.double_val = 2.2;
    cout << pail.double_val << endl;
    cout << pail.int_val << endl; // erase int_val as default minimum value as -2e16

    cout << "=== Chap 4.5 UNION passed ===\n";
    cout << "=== 2022/2/17 ===";
    return 0;
}

// Chap 4.6 Enum 2022/2/17
int Enum(int test_val){
    enum bits{one1 = 1, two = 2, eight = 8};
    enum bigstep{first, second = 100, third};
    auto hugestep = bigstep(third);
    cout << hugestep << endl;

    enum giantstep{zero, null = 0, one ,numero = 1};
    cout << giantstep(one) << ", " << giantstep(numero) << endl;

    cout << "=== Chap 4.6 ENUM passed ===\n";
    cout << "=== 2022/2/17 ===";
    return 0;
}

// Chap 4.7 Address 2022/2/17
int Address(int test_val){
    int donuts = 4;
    double cups = 4.5;
    cout << "donuts value = " << donuts << ", it's address is: " << &donuts << endl;
    cout << "cups value = " << cups << ", it's address is: " << &cups << endl;
    cout << "=== following content: Pointer ===\n";

    int updates = 6; // 声明一个变量
    int *p_updates; // 声明指针指向 int
    p_updates = &updates; // 将地址转换为int类型，并赋值给指针
    // Express values
    cout << "Values: updates = " << updates;
    cout << "; *p_updates = " << *p_updates << endl;
    // express address
    cout << "Addresses: &updates = " << &updates;
    cout << "; *p_updates = " << p_updates << endl;

    int* pointer_exm = &test_val;
    cout << "test_val address: " << pointer_exm;

    // new key word example
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;
    delete pt;

    cout << "nights value = " << nights << ", location = " << &nights << endl;
    cout << "int value  = " << *pt << ", location = " << pt << endl;
    double * pd = new double;
    *pd = 1000001.0;
    cout << "== following output ==\n";
    cout << "int nights value = " << nights << ", location = " << &nights << endl;
    cout << "int pt value = " << *pt << ", location = " << pt << endl;
    cout << "double pd value = " << *pd << ", location = " << pd << endl;
    delete pd;
    // Array new example
    cout << "== following array new example ==\n";
    double *p3 = new double[3]; // 为3个double变量分配空间
    p3[0] = 1.1;
    p3[1] = 2.2;
    p3[2] = 3.3;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; // 对array执行+1操作 = 将array的标号+1，即p3[1]变为p3[2]
    cout << "now p3[1] is " << p3[1] << "，it's the value of original p3[2]!\n";

    cout << "=== Chap 4.7 ADDRESS passed ===\n";
    cout << "=== 2022/2/18 ===";
    return 0;
}

// Chap 4.8 Pointer 2022/2/18
int ptr_math(int test_val){
    double wages[3] {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    struct test_struct{
        int test_val;
    };
    test_struct s1, s2;
    s1.test_val = 23;
    test_struct *p1 = &s1;
    cout << "---interrupt test---\ns1.test_val = " << s1.test_val << endl;
    cout << "p1 = " << p1 << "\n*p1 = " << "占位符" << "\n&s1 = " << &s1 << endl;

    // following 2 methods to get the address
    double *p_wages = wages; // ******* 重要：name of an array = address
                             // ******* 但 sizeof(array) 取该数组的长度，单位为字节
    short *p_stacks0 = &stacks[0];
    auto *p_stacks = &stacks; // 疑问？short array必须用var[0]才能取到数组的值？

    cout << "p_stacks[0]: " << p_stacks0 << ", p_stacks: " << p_stacks[0] << ", " << p_stacks[1] << endl;
    cout << "-- following book code --\n";
    cout << "p_wages = " << p_wages << ", *p_wages = " << *p_wages << endl;
    p_wages = p_wages + 1;
    cout << "Already add 1 to p_wages pointer: \n";
    cout << "p_wages = " << p_wages << ", *p_wages = " << *p_wages << endl << endl;

    cout << "p_stacks = " << p_stacks << ", *p_stacks = " << *p_stacks << endl;
    p_stacks = p_stacks + 1;
    cout << "Already add 1 to p_stacks pointer: \n";
    cout << "p_stacks = " << p_stacks << ", *p_stacks = " << *p_stacks << endl << endl;

    cout << "p_stacks0 = " << p_stacks0 << ", *p_stacks0 = " << *p_stacks0 << endl;
    p_stacks0 = p_stacks0 + 1;
    cout << "Already add 1 to p_stacks0 pointer: \n";
    cout << "p_stacks0 = " << p_stacks0 << ", *p_stacks0 = " << *p_stacks0 << endl << endl;

    int a = 1;
    cout << "a = 1, &a = " << &a << endl;
    cout << "wages = " << wages << endl
         << "p_wages = " << p_wages << endl
         << "wages[1] = " << wages[1] << endl
         << "stacks = " << stacks << endl
         << "&stacks = " << &stacks << endl
         << "stacks[0] = " << stacks[0] << endl;
    cout << &p_wages[0];

    // following method "new" with "pointer"
    struct toy{
        string name;
        float volume;
        double price;
    };
    toy *pt = new toy; // allot memory for a structure
    cout << "Enter the name of a new toy:\n";
    cin >> pt -> name;
    cout << "Enter the volume of the toy:\n";
    cin >> (*pt).volume; // *pt 为指向地址的structure变量，即toy
    cout << "Enter the price of the toy:\n";
    cin >> pt -> price;

    cout << "--- output ---\nName: " << (*pt).name << endl;
    cout << "Volume: " << pt -> volume << endl;
    cout << "Price: " << pt -> price << endl;
    delete pt; // 删除pt所指向的toy结构地址，并释放其内存空间

    cout << "=== Chap 4.8 POINTER passed ===\n";
    cout << "=== 2022/2/18 ===";
    return 0;
}

// Chap 4.9 MixType 2022/2/18
int mix_type(int test_val){
    struct years{
        int year;
    };
    years s1, s2, s3;
    s1.year = 1998;

    s2.year = 1999;
    years *p2 = &s2;
    cout << "p2 is: " << p2 << endl;
    cout << "*p2 is: " << &s2 << endl;
    cout << "&s2 is: " << &s2 << endl;
    cout << p2->year << endl;

    cout << "---following book code---\n";
    years trio[3]; // array of 3 structures
    trio[0].year = 2003;
    trio[1].year = 2004;
    cout << trio->year << endl;
    const years *arp[3] = {&s1, &s2, &s3};
    cout << arp[1]->year << endl; // arp[1] = &s2, so output 1999
    const years **ppa = arp;
    auto ppb = ppa;
    cout << (*ppa)->year << endl; // *ppa = arp[0], so output 1998
    cout << (*(ppb+1))->year << endl; // *(ppb + 1) = *(ppa + 1) = arp[1], so output 1999

    cout << "=== Chap 4.9 MIXTYPE passed ===\n";
    cout << "=== 2022/2/18 ===";
    return 0;
}

// Chap 4.10 Vector 2022/2/18
int Vector(int test_val) {
    vector<int> vi;
    int n;
    // cin >> n;
    array<int, 5> a{};
    array<double, 5> d{1, 2, 3, 4, 5};
    cout << d[2] << endl;
    cout << d[-2] << endl;
    cout << d.at(-2) << endl;

    cout << "=== Chap 4.10 VECTOR passed ===\n";
    cout << "=== 2022/2/18 ===";
    return 0;
}

int main(){
    short months[12] = {2,3,4,5,6,7,8,9,10,11,12};
    months[0] = 11;
    months[1] = 21;
    cout << months[2] << endl << "=== Watch Below ===\n";

    // CHAR(1); // Chap 4.2 passed
    // STRING(1);
    // STRUCTURE(1);
    // Union(1);
    // Enum(1);
    // Address(1);
    // ptr_math(1);
    // mix_type(1);
    Vector(1);
}