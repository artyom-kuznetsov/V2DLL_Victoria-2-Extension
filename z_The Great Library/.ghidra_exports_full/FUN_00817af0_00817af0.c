// FUN_00817af0 @ 00817af0 body=[[00817af0, 00817b27]]


void FUN_00817af0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar1 = DAT_012587e4;
  *(int *)(in_ECX + 0x1a8) = param_1;
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + param_1 * 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  uVar3 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(in_ECX + 0x1a4) = 0;
  *(undefined4 *)(in_ECX + 0x18c) = uVar2;
  *(undefined4 *)(in_ECX + 400) = uVar3;
  return;
}

