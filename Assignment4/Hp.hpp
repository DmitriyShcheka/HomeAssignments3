// header of the class with composition

#ifndef HP
#define HP

class Hp {
    public:
    	Hp();
        Hp(int hp);
        int getHp();
        void setHp(int hp);

        ~Hp();
    private:
        int hps_;
};

#endif
