#include <stdio.h>

struct st
{
    int rate, qty, amt, dis, billAmt, gst, netAmt;
};

int main()
{
    struct st s;
    
    printf("enter rate: ");
    scanf("%d", &s.rate);
    printf("enter quantity: ");
    scanf("%d", &s.qty);

    s.amt = s.rate * s.qty;
    s.dis = (s.amt * 5) / 100;
    s.billAmt = s.amt - s.dis;
    s.gst = s.billAmt * 0.18;
    s.netAmt = s.billAmt + s.gst;

    printf("\nRate\tQty\tAmt\tDis\tBill\tGST\tNetBill\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d", s.rate, s.qty, s.amt, s.dis, s.billAmt, s.gst, s.netAmt);
    return 0;
}