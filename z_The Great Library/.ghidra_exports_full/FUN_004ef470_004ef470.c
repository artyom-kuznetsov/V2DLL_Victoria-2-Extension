// FUN_004ef470 @ 004ef470 body=[[004ef470, 004ef50e] [004ef510, 004ef535]]


/* WARNING: Removing unreachable block (ram,0x004ef4d2) */
/* WARNING: Removing unreachable block (ram,0x004ef4e0) */
/* WARNING: Removing unreachable block (ram,0x004ef4ff) */

void FUN_004ef470(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0x8000;
  *(undefined4 *)(in_EAX + 0x28) = 0x8000;
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  iVar4 = *(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10) >> 4;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      piVar1 = (int *)(*(int *)(*(int *)(in_EAX + 0x10) + 8 + iVar6) + 0x60);
      *piVar1 = *piVar1 - *(int *)(*(int *)(in_EAX + 0x10) + 0xc + iVar6);
      iVar6 = iVar6 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar2 = *(undefined4 **)(in_EAX + 0x10);
  if (puVar2 != *(undefined4 **)(in_EAX + 0x14)) {
    puVar3 = *(undefined4 **)(in_EAX + 0x14);
    for (puVar5 = puVar2; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(0);
    }
    *(undefined4 **)(in_EAX + 0x14) = puVar2;
  }
  FUN_004ed710(in_EAX);
  return;
}

