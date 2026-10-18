// FUN_00904020 @ 00904020 body=[[00904020, 009040a6]]


uint FUN_00904020(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint in_EAX;
  int *piVar5;
  int iVar6;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x2d) != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    in_EAX = param_1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(in_ECX + 0x1c);
      in_EAX = *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24) >> 4;
      if (iVar2 < (int)in_EAX) {
        piVar5 = (int *)(iVar2 * 0x10 + *(int *)(iVar1 + 0x24));
        iVar3 = *(int *)(in_ECX + 0x20);
        bVar4 = iVar3 < piVar5[1] - *piVar5 >> 3;
        in_EAX = CONCAT31((int3)((uint)piVar5 >> 8),bVar4);
        if (bVar4) {
          if (*(char *)(in_ECX + 0x2c) == '\0') {
            iVar6 = in_ECX + 0x24;
          }
          else {
            iVar6 = DAT_012588e8 + 0xb5c;
          }
          return CONCAT31((int3)((uint)*(int *)(iVar6 + 4) >> 8),
                          *(int *)(*(int *)(*(int *)(iVar1 + 0x24) + iVar2 * 0x10) + 4 + iVar3 * 8)
                          == *(int *)(iVar6 + 4));
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

