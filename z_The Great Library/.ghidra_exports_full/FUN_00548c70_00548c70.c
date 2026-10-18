// FUN_00548c70 @ 00548c70 body=[[00548c70, 00548cbf]]


void FUN_00548c70(int param_1,int param_2)

{
  int in_ECX;
  
  *(bool *)(in_ECX + 0x50) = param_2 == 1;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  FUN_00549030();
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x10) = param_1 + 8;
    *(int *)(in_ECX + 0x14) = param_1 + 8;
    *(int *)(in_ECX + 0x20) = param_1;
    *(int *)(in_ECX + 0x24) = param_1;
    *(int *)(in_ECX + 0x30) = param_1 + 4;
    *(int *)(in_ECX + 0x34) = param_1 + 4;
  }
  *(int *)(in_ECX + 0x54) = param_1;
  *(undefined4 *)(in_ECX + 0x4c) = DAT_013f0824;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}

