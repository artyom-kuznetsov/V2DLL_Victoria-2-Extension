// FUN_0088e7d0 @ 0088e7d0 body=[[0088e7d0, 0088e834]]


void FUN_0088e7d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x3c);
    iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0x1dc) + 4))(in_ECX + 0x20);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = uVar1;
      return;
    }
    FUN_0047d7b0(in_ECX + 0x20,uVar1);
  }
  return;
}

