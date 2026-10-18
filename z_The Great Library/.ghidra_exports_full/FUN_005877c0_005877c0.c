// FUN_005877c0 @ 005877c0 body=[[005877c0, 00587822]]


void FUN_005877c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(in_ECX + 0x3c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  puVar2 = *(undefined4 **)(iVar1 + 0x156c);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  iVar3 = DAT_012588e8;
  *(undefined4 *)(iVar1 + 0x156c) = 0;
  if (*(int *)(in_ECX + 0x40) == *(int *)(iVar3 + 0xb60)) {
    (**(code **)(**(int **)(iVar3 + 0xb24) + 0xe0))(6,uVar4);
  }
  return;
}

