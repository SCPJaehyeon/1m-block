#include "header/header.h"

using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 2){
        usage(argv[0]);
        return -1;
    }
    if(set_table()==true){
        netfilter_block(argv[1]);
    }
    return 0;
}
