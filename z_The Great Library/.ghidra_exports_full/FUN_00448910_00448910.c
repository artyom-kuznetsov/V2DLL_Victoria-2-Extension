// FUN_00448910 @ 00448910 body=[[00448910, 0044894d]]


void FUN_00448910(int param_1,size_t param_2,char param_3)

{
  undefined4 *in_ECX;
  
  if (param_2 == 1) {
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(char *)((int)in_ECX + param_1) = param_3;
    return;
  }
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  _memset((void *)((int)in_ECX + param_1),(int)param_3,param_2);
  return;
}

