// FUN_00904930 @ 00904930 body=[[00904930, 009049c4]]


uint FUN_00904930(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_EAX;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x2c) != '\0') {
    in_EAX = *(uint *)(param_1 + 0x24);
    if (in_EAX != 0) {
      iVar1 = *(int *)(in_EAX + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      if ((iVar1 != 0) && (iVar2 != 0)) {
        iVar3 = *(int *)(in_ECX + 0x20);
        iVar4 = *(int *)(in_ECX + 0x1c);
        in_EAX = FUN_00464cf0(iVar3);
        if ((char)in_EAX != '\0') {
          iVar5 = *(int *)(in_ECX + 0x28);
          iVar6 = *(int *)(in_ECX + 0x24);
          in_EAX = FUN_00464cf0(iVar5);
          if ((char)in_EAX != '\0') {
            return (uint)(*(int *)(*(int *)(*(int *)(iVar1 + 0x24) + iVar4 * 0x10) + 4 + iVar3 * 8)
                         == *(int *)(*(int *)(*(int *)(iVar2 + 0x24) + iVar6 * 0x10) + 4 + iVar5 * 8
                                    ));
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

