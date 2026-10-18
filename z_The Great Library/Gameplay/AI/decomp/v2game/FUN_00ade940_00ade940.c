// FUN_00ade940 @ 00ade940 body=[[00ade940, 00ade98a]]


void FUN_00ade940(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00ade020();
  if (param_2 != 0) {
    uVar1 = (*(code *)PTR_FUN_00f01b08)(param_2 * 0xc,0xca,0x20,100,0,0);
    *(undefined4 *)(in_ECX + 0x10) = uVar1;
  }
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  *(int *)(in_ECX + 0x1c) = param_2 * 3;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  return;
}

