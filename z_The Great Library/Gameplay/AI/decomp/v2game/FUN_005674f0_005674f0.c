// FUN_005674f0 @ 005674f0 body=[[005674f0, 00567553]]


void FUN_005674f0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x55) {
    (**(code **)(*(int *)(in_ECX + 0x50) + 0xc))(param_1);
    return;
  }
  if (param_2 == 0xb2) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x70);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
  }
  else if (param_2 == 0x200) {
    FUN_009a1bb0(in_ECX + 0x6c);
    return;
  }
  return;
}

