// FUN_007496f0 @ 007496f0 body=[[007496f0, 00749742]]


void FUN_007496f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x58);
  if (*(int *)(iVar1 + 4) != 0) {
    *(int *)(iVar1 + 8) = in_ECX;
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = *in_EAX;
    *(undefined4 *)(iVar1 + 0x10) = in_EAX[1];
    FUN_00456110(iVar1);
    FUN_004562e0();
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(iVar1 + 4) + 0x2c))();
  }
  return;
}

