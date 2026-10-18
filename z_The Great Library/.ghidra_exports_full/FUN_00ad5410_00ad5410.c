// FUN_00ad5410 @ 00ad5410 body=[[00ad5410, 00ad5522]]


void FUN_00ad5410(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [64];
  
  if (*(int *)(in_ECX + 0x110) == 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + param_1 * 4) + 4);
    if (iVar1 == -1) {
      param_2 = param_2 + param_1 * 0x38;
      FUN_00ad2460(param_2 + 0x20);
      FUN_00ad24b0(param_2);
      FUN_00ad27d0(local_40);
    }
    else {
      local_4c = 1.0 / *(float *)(param_2 + 0x20 + iVar1 * 0x38);
      iVar1 = param_2 + 0x20 + iVar1 * 0x38;
      local_48 = 1.0 / *(float *)(iVar1 + 4);
      local_44 = 1.0 / *(float *)(iVar1 + 8);
      param_2 = param_2 + param_1 * 0x38;
      FUN_00ad2460(param_2 + 0x20);
      FUN_00ad24b0(param_2);
      FUN_00ad27d0(local_40);
      FUN_00ad2900(&local_4c);
    }
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x34);
  }
  else if (*(int *)(in_ECX + 0x110) == 1) {
    param_2 = param_2 + param_1 * 0x38;
    FUN_00ad1fe0(param_2 + 0x10,param_2,param_2 + 0x20,param_2 + 0x2c);
    return;
  }
  return;
}

