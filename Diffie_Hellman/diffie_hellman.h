#ifndef DIFFIE_HELLMAN_H_
#define DIFFIE_HELLMAN_H_

//Calculate public key:
int calc_pub_key(double priv_key, int mod_num, double base_num);

//Calculate key:
int calc_key(double pub_key, double priv_key, int mod_num);

#endif
