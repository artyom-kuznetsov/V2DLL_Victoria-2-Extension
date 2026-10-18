// FUN_004b7820 @ 004b7820 body=[[004b7820, 004b7901]]


void FUN_004b7820(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_EAX;
  undefined4 *puVar6;
  undefined4 in_EDX;
  char cStack_16;
  char cStack_e;
  
  if ((*(int *)(in_EAX + 0x110) == 0) ||
     (iVar1 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
     (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
    puVar6 = (undefined4 *)(in_EAX + 0x130);
  }
  else {
    puVar6 = *(undefined4 **)(iVar1 + 0x34);
  }
  uVar2 = *puVar6;
  iVar1 = puVar6[1];
  *(undefined4 *)(in_EAX + 0x110) = in_EDX;
  FUN_004b2610();
  *(undefined1 *)(*(int *)(in_EAX + 0x5c) + 0x28) = 1;
  if ((*(int *)(in_EAX + 0x110) == 0) ||
     (iVar3 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
     (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
    puVar6 = (undefined4 *)(in_EAX + 0x130);
  }
  else {
    puVar6 = *(undefined4 **)(iVar3 + 0x34);
  }
  iVar3 = puVar6[1];
  uVar4 = *puVar6;
  if (iVar1 != iVar3) {
    FUN_0048ea60();
    iVar5 = DAT_012587e4;
    if (((((char)uVar2 == 'R') && ((char)((uint)uVar2 >> 8) == 'E')) &&
        (cStack_e = (char)((uint)uVar2 >> 0x10), cStack_e == 'B')) ||
       ((((char)uVar4 == 'R' && ((char)((uint)uVar4 >> 8) == 'E')) &&
        (cStack_16 = (char)((uint)uVar4 >> 0x10), cStack_16 == 'B')))) {
      *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x94) = 1;
      *(undefined1 *)(*(int *)(*(int *)(iVar5 + 4) + iVar3 * 4) + 0x94) = 1;
    }
  }
  return;
}

