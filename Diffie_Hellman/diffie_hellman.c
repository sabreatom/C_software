/**********************************
 * --------------------------------
 * Diffie-Hellman algorithm
 * Author: Aleksandrs Maklakovs
 * --------------------------------
**********************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "diffie_hellman.h"

/**********************************
 * Calculate public key:
 *********************************/

int calc_pub_key(double priv_key, int mod_num, double base_num)
{
  int pow_tmp = (int) pow(base_num, priv_key);
  return pow_tmp % mod_num;
}

/**********************************
 * Calculate key:
 *********************************/

int calc_key(double pub_key, double priv_key, int mod_num)
{
  int pow_tmp = (int) pow(pub_key, priv_key);
  return pow_tmp % mod_num;
}

//*********************************
