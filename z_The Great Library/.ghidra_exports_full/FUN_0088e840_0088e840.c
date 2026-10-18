// FUN_0088e840 @ 0088e840 body=[[0088e840, 0088e8f4]]


void FUN_0088e840(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = in_ECX + 0x20;
    iVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0x1dc) + 4))(iVar1);
    if (iVar2 == 0) {
      FUN_0047d7b0(iVar1,0);
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    iVar2 = *(int *)(in_ECX + 0x3c) + iVar2;
    iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0x1dc) + 4))(iVar1);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x1c) = iVar2;
      return;
    }
    FUN_0047d7b0(iVar1,iVar2);
  }
  return;
}

