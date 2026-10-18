// FUN_006f3ae0 @ 006f3ae0 body=[[006f3ae0, 006f3b25]]


void FUN_006f3ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = DAT_012587e4;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + iVar2 * 4);
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(iVar1 + 0x20);
  FUN_00702ed0(1);
  return;
}

