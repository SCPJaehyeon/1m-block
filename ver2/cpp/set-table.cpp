#include <header/header.h>

bool set_table(){
    system("iptables -F"); //iptables Reset
    system("iptables -A OUTPUT -j NFQUEUE --queue-num 0"); //iptables Set
    system("iptables -A INPUT -j NFQUEUE --queue-num 0");
    return true;
}
