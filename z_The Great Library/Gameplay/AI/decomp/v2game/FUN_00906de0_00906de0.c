// FUN_00906de0 @ 00906de0 body=[[00906de0, 00906e3e]]


void FUN_00906de0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x1aa) {
    (**(code **)(*(int *)(in_ECX + 0x40) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x297) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

