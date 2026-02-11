#include<iostream>
using namespace std;

class patient {
    private:
    float Billingamount;
    string appointDate;
    public:
    void setDetail(float amount, string Date)
    {
        Billingamount = amount;
        appointDate = Date;

    }
    void dispalydetail()
    {
        cout<<"billamount:Rs."<< Billingamount<<endl;
        cout<<"appointdate:"<< appointDate<<endl;

    }
};
int main()
{
    patient p1;
    p1.setDetail (3000.50,"5-2-2006");
    p1.dispalydetail();
    return 0;
}