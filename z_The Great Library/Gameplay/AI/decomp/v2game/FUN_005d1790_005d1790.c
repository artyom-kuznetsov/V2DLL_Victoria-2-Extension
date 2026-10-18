// FUN_005d1790 @ 005d1790  (requested 005D1790, first bytes: 55 8B EC 51 53 8B 5D 0C)


undefined4 * FUN_005d1790(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(*(int *)(in_EAX + 0x5c) + 0x2a) != *(char *)(*(int *)(param_2 + 0x5c) + 0x2a)) {
    cVar2 = (**(code **)(*in_ECX + 0x38))();
    if (cVar2 != '\0') {
      *param_1 = 12000;
      return param_1;
    }
  }
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar6 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar4 = 0;
  if (0 < iVar6) {
    piVar5 = (int *)(*(int *)(iVar1 + 200) + 4);
    while (*(int *)(in_EAX + 0x58) != *piVar5) {
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 9;
      if (iVar6 <= iVar4) {
        *param_1 = 1000;
        return param_1;
      }
    }
    if (-1 < iVar4) {
      iVar1 = *(int *)(*(int *)(iVar1 + 200) + 0x10 + iVar4 * 0x24);
      iVar6 = *(int *)(*(int *)(param_2 + 0x9c) + 0x3c8) + 1000;
      FUN_00401000(0x424a0000);
      iVar4 = FUN_00b31c00();
      if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar3 = __alldiv((longlong)iVar6 * (longlong)iVar1,1000,0);
      *param_1 = uVar3;
      return param_1;
    }
  }
  *param_1 = 1000;
  return param_1;
}

