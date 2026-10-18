// FUN_005839c0 @ 005839c0 body=[[005839c0, 00583a17]]


void FUN_005839c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x60);
  iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) +
                               0x1dc) + 4))(in_ECX + 0x44);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
    return;
  }
  FUN_0047d7b0(in_ECX + 0x44,uVar1);
  return;
}

