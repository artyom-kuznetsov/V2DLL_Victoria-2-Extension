// FUN_004cbe20 @ 004cbe20 body=[[004cbe20, 004cbfa7]]


uint FUN_004cbe20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  if (*(int *)(in_EAX + 0x80) == 2) {
    iVar4 = -1;
    iVar2 = 0;
    local_8 = -1;
    uVar1 = 0;
    iVar3 = 0;
    if (*(int *)(in_EAX + 0x98) != 0) {
      uVar1 = 1;
      if (0 < *(int *)(in_EAX + 0x9c)) {
        iVar4 = 0;
        uVar1 = 1;
        iVar3 = *(int *)(in_EAX + 0x9c);
      }
    }
    if (*(int *)(in_EAX + 0xb4) != 0) {
      uVar1 = uVar1 + 1;
      if (iVar3 < *(int *)(in_EAX + 0xb8)) {
        iVar4 = 1;
        iVar3 = *(int *)(in_EAX + 0xb8);
      }
    }
    if (*(int *)(in_EAX + 0xd0) != 0) {
      uVar1 = uVar1 + 1;
      if (iVar3 < *(int *)(in_EAX + 0xd4)) {
        iVar4 = 2;
        iVar3 = *(int *)(in_EAX + 0xd4);
      }
    }
    if (*(int *)(in_EAX + 0xec) != 0) {
      uVar1 = uVar1 + 1;
      if (iVar3 < *(int *)(in_EAX + 0xf0)) {
        iVar4 = 3;
        iVar3 = *(int *)(in_EAX + 0xf0);
      }
    }
    if (1 < uVar1) {
      if (((iVar4 != 0) && (*(int *)(in_EAX + 0x98) != 0)) && (0 < *(int *)(in_EAX + 0x9c))) {
        local_8 = 0;
        iVar2 = *(int *)(in_EAX + 0x9c);
      }
      if (((iVar4 != 1) && (*(int *)(in_EAX + 0xb4) != 0)) && (iVar2 < *(int *)(in_EAX + 0xb8))) {
        local_8 = 1;
        iVar2 = *(int *)(in_EAX + 0xb8);
      }
      if (((iVar4 != 2) && (*(int *)(in_EAX + 0xd0) != 0)) && (iVar2 < *(int *)(in_EAX + 0xd4))) {
        local_8 = 2;
        iVar2 = *(int *)(in_EAX + 0xd4);
      }
      if (((iVar4 != 3) && (*(int *)(in_EAX + 0xec) != 0)) && (iVar2 < *(int *)(in_EAX + 0xf0))) {
        local_8 = 3;
        iVar2 = *(int *)(in_EAX + 0xf0);
      }
    }
    if ((-1 < iVar4) && (-1 < local_8)) {
      iVar4 = in_EAX + local_8 * 0x1c;
      in_EAX = *(uint *)(iVar4 + 0x98);
      if ((in_EAX == *(uint *)(param_1 + 4)) && (iVar2 < iVar3)) {
        in_EAX = DAT_012588e8;
        if (*(int *)(iVar4 + 0xa4) + (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x108) / 1000) * 0x18
            <= *(int *)(DAT_012588e8 + 0xb0c)) {
          return CONCAT31((int3)(DAT_012588e8 >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

