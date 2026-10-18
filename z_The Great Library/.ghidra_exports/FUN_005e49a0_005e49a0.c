// FUN_005e49a0 @ 005e49a0  (requested 005E49A0, first bytes: 55 8B EC 83 E4 F8 83 EC)


/* WARNING: Type propagation algorithm not settling */

bool FUN_005e49a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar3 = DAT_01258a98;
  iVar2 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0x40)) {
    iVar2 = DAT_01258a94;
  }
  if ((iVar2 == 0) || (iVar2 = FUN_009c1d40(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar2;
  if (iVar2 == 0) {
    return false;
  }
  if (0x1268 < *(uint *)(in_ECX + 0x68)) {
    iVar3 = DAT_01258a94;
  }
  if ((iVar3 == 0) || (iVar3 = FUN_009c1d40(), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + -8;
  }
  *(int *)(in_ECX + 100) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x68),*(undefined4 *)(in_ECX + 0x6c));
    if (iVar3 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(iVar3 + -8);
    }
    FUN_005ab7f0();
    (**(code **)(*piVar4 + 0x30))();
    cVar1 = FUN_005d77a0();
    return cVar1 != '\0';
  }
  return false;
}

