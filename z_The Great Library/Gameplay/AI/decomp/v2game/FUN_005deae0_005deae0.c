// FUN_005deae0 @ 005deae0  (requested 005DEAE0, first bytes: 55 8B EC 83 E4 F8 51 53)


void FUN_005deae0(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  
  iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -8;
  }
  if (*(int *)(iVar4 + 0x74) != 0) {
    iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    if (iVar4 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(iVar4 + -8);
    }
    cVar3 = (**(code **)(*piVar6 + 0x3c))();
    if (cVar3 != '\0') {
      iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -8;
      }
      if (*(char *)(iVar4 + 0x104) == '\0') {
        iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar4 + -8;
        }
        iVar4 = FUN_005cf450(iVar4);
        if (iVar4 != 0) {
          FUN_005ded20(in_ECX,*(undefined4 *)(iVar4 + 0x58),1);
          return;
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0x7c) < 1) {
    uVar1 = *(undefined1 *)(in_ECX + 0x88);
    iVar4 = *(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2;
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        FUN_005ded20(in_ECX,*(undefined4 *)(*(int *)(in_ECX + 100) + iVar7 * 4),uVar1);
        iVar7 = iVar7 + 1;
        uVar1 = 0;
      } while (iVar7 < iVar4);
    }
    if (*(char *)(in_ECX + 0x8b) != '\0') {
      iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -8;
      }
      if (*(char *)(iVar4 + 0x78) != '\0') {
        iVar4 = *(int *)(in_ECX + 100);
        iVar7 = *(int *)(in_ECX + 0x68) - iVar4 >> 2;
        if (0 < iVar7) {
          iVar5 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar4 + -4 + iVar7 * 4);
            return;
          }
          uRam0000007c = *(undefined4 *)(iVar4 + -4 + iVar7 * 4);
        }
      }
    }
  }
  else {
    FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    FUN_005d1bb0(in_ECX + 0x74,*(undefined1 *)(in_ECX + 0x88));
    if (*(char *)(in_ECX + 0x8b) != '\0') {
      iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + -8;
      }
      if (*(char *)(iVar4 + 0x78) != '\0') {
        puVar2 = *(undefined4 **)(in_ECX + 0x78);
        iVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x74) = *puVar2;
          return;
        }
        uRam0000007c = *puVar2;
        return;
      }
    }
  }
  return;
}

