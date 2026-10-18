// FUN_005d7420 @ 005d7420 body=[[005d7420, 005d75ad]]


undefined4 * FUN_005d7420(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(in_EAX + 0x164) != '\0') {
    *param_1 = 0;
    return param_1;
  }
  iVar3 = *(int *)(in_EAX + 0xdc);
  if (*(int *)(iVar3 + 300) == *(int *)(in_EAX + 0xc4)) {
    *param_1 = 2000;
    return param_1;
  }
  if (((*(char *)(in_EAX + 0xc0) == 'R') && (*(char *)(in_EAX + 0xc1) == 'E')) &&
     (*(char *)(in_EAX + 0xc2) == 'B')) {
    iVar3 = FUN_0068bae0();
    if ((iVar3 == 0) || (*(char *)(*(int *)(iVar3 + 0x30) + 0x123) == '\0')) {
LAB_005d74eb:
      *param_1 = 0;
      return param_1;
    }
    if (*(int *)(*(int *)(in_EAX + 0xdc) + 0x134) != *(int *)(in_EAX + 0xc4)) {
LAB_005d756a:
      *param_1 = DAT_0125ff20;
      return param_1;
    }
LAB_005d74bb:
    *param_1 = 1000;
    return param_1;
  }
  if (*(int *)(iVar3 + 300) == 0) {
    if ((*(int *)(*(int *)(iVar3 + 0x5c) + 0xdc) == 0) || (*(char *)(iVar3 + 0x170) != '\0'))
    goto LAB_005d74eb;
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0x134) * 4);
    if ((*(int *)(in_EAX + 0xc4) == *(int *)(iVar1 + 0x20)) ||
       (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(in_EAX + 0xc4) * 4) + 0x34) == 0 &&
         (((*(char *)(in_EAX + 0xc0) != 'R' || (*(char *)(in_EAX + 0xc1) != 'E')) ||
          (*(char *)(in_EAX + 0xc2) != 'B')))) &&
        (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
         (*(char *)(iVar1 + 0x1e) != 'B')))))) goto LAB_005d74bb;
    cVar2 = FUN_004b7e30(in_EAX + 0xc0);
    if (cVar2 != '\0') goto LAB_005d756a;
    if ((*(int *)(*(int *)(iVar3 + 0x5c) + 0xdc) != 0) &&
       (uVar4 = DAT_0125fedc, *(char *)(iVar3 + 0x170) == '\0')) goto LAB_005d759e;
  }
  uVar4 = DAT_0125feec;
LAB_005d759e:
  *param_1 = uVar4;
  return param_1;
}

