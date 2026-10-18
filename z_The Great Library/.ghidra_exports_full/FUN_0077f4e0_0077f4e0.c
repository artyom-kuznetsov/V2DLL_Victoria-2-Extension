// FUN_0077f4e0 @ 0077f4e0 body=[[0077f4e0, 0077f5c6]]


bool FUN_0077f4e0(char *param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar2 = FUN_00967f50();
  if (iVar2 == 0) goto LAB_0077f5a3;
  iVar3 = FUN_00967f50();
  iVar1 = DAT_01258a98;
  iVar2 = DAT_01258a94;
  if (iVar3 == 0) goto LAB_0077f5a3;
  if (*(uint *)(in_EAX + 0xc) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_0077f556;
    iVar3 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_0077f556:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x38) + 0x24);
  if (*(uint *)(param_2 + 0xc) < 0x1269) {
    if (iVar1 == 0) goto LAB_0077f598;
    iVar2 = FUN_009c1d40();
  }
  else if (iVar2 == 0) {
LAB_0077f598:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009c1d40();
  }
  bVar4 = *(int *)(*(int *)(iVar2 + 0x38) + 0x24) < iVar3;
LAB_0077f5a3:
  if (*param_1 != '\0') {
    return bVar4 == false;
  }
  return bVar4;
}

