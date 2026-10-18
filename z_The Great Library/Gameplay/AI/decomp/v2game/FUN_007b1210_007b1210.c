// FUN_007b1210 @ 007b1210 body=[[007b1210, 007b12dd]]


void FUN_007b1210(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = DAT_01258a98;
  iVar1 = DAT_01258a94;
  iVar2 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0xcc)) {
    iVar2 = DAT_01258a94;
  }
  if ((iVar2 == 0) || (iVar2 = FUN_009c1d40(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  *(int *)(in_ECX + 200) = iVar2;
  if (iVar2 != 0) {
    if (0x1268 < *(uint *)(in_ECX + 0xcc)) {
      iVar3 = iVar1;
    }
    if ((iVar3 == 0) || (iVar3 = FUN_009c1d40(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -8;
    }
    *(int *)(in_ECX + 200) = iVar3;
    iVar2 = *(int *)(in_ECX + 0xf8);
    (**(code **)(**(int **)(iVar2 + 0x20) + 0xa4))(0);
    (**(code **)(**(int **)(iVar2 + 0x20) + 0x88))(iVar3);
    return;
  }
  return;
}

