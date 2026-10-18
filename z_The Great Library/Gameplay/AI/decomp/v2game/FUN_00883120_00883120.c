// FUN_00883120 @ 00883120 body=[[00883120, 008831aa]]


void FUN_00883120(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x344) {
    FUN_009a1ce0();
  }
  else if ((param_2 == 0x404) || (param_2 == 0x6a8)) {
    if (*(int *)(param_1 + 0x228) == 0x405) {
      *(undefined1 *)(in_ECX + 0x1c) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x228) == 0x3de) {
      *(undefined1 *)(in_ECX + 0x1d) = 1;
      return;
    }
    puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x20) = *puVar1;
    *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
    return;
  }
  return;
}

