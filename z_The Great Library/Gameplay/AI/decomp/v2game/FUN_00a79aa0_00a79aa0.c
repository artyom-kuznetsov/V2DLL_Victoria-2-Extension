// FUN_00a79aa0 @ 00a79aa0 body=[[00a79aa0, 00a79ae4]]


undefined1 FUN_00a79aa0(int param_1,int param_2,uint param_3)

{
  int in_ECX;
  
  if (param_1 != 0x100) {
    if (param_1 != 0x104) {
      return 1;
    }
    if ((param_3 & 0x20000000) != 0) {
      *(undefined1 *)(in_ECX + 0x152) = 1;
      *(undefined1 *)(in_ECX + 0x52) = 1;
    }
  }
  *(undefined1 *)(param_2 + 0x140 + in_ECX) = 1;
  *(undefined1 *)(param_2 + 0x40 + in_ECX) = 1;
  *(undefined1 *)(in_ECX + 0x240) = 1;
  return 1;
}

