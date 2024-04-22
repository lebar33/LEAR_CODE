class Base {

       public: void F();

       virtual void G() = 0;

       virtual void H();

       virtual void I();

 };

class D : public Base {

 public: virtual void F();

             void G();

             void H();

             virtual void J();

};

class E : public D {

     public: void F();

        void G();

};

int main() {

     D* pD = new D;

     Base* pB = pD;

     E* pE = new E;

     pB->F(); // line 1

     pB->G(); // line 2

     pB->H(); // line 3

     pB->I(); // line 4

     pD->F(); // line 5

     pD->G(); // line 6

     pD->I(); // line 7

     pD->J(); // line 8

    pB = pE; pD = pE;

    pB->F(); // line 9

     pB->G(); // line 10

    pB->H(); // line 11

    pB->I(); // line 12

    pD->F(); // line 13

    pD->J(); // line 14

    pE->F(); // line 15

    pE->H(); // line 16

}
