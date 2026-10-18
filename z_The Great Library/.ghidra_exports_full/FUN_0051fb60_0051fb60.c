// FUN_0051fb60 @ 0051fb60 body=[[0051fb60, 0051fc79] [0051fc80, 0051fcbc] [0051fcc0, 0051fd0d]]


void FUN_0051fb60(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  iVar4 = 0;
  do {
    iVar5 = *(int *)(in_EAX + (DAT_01258738 + 0xb) * 0x10);
    *(undefined4 *)(iVar4 + iVar5) = 0;
    *(undefined4 *)(iVar4 + 4 + iVar5) = 0;
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x58);
  puVar2 = *(undefined4 **)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  iVar4 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  local_10 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0xa4) - *(int *)(in_EAX + 0xa0) & 0xfffffffcU)) {
    do {
      iVar4 = *(int *)(*(int *)(in_EAX + 0xa0) + local_10 * 4);
      *(undefined4 *)(iVar4 + 0x48 + DAT_012586e4 * 8) = 0;
      *(undefined4 *)(iVar4 + 0x4c + DAT_012586e4 * 8) = 0;
      piVar1 = (int *)(iVar4 + 0x28 + DAT_012586e4 * 0x10);
      iVar5 = 0;
      iVar6 = piVar1[1] - *piVar1 >> 3;
      if (0 < iVar6) {
        do {
          iVar3 = *(int *)(iVar4 + 0x28 + DAT_012586e4 * 0x10);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(in_EAX + 0xa4) - *(int *)(in_EAX + 0xa0) >> 2);
  }
  for (iVar4 = *(int *)(in_EAX + 0xe44); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
  }
  return;
}

