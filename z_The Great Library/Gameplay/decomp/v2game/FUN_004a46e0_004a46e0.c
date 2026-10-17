// FUN_004a46e0 @ 004a46e0  (requested 004A46E0, first bytes: 55 8B EC 6A FF 68 7C B2)


void FUN_004a46e0(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b27c;
  local_10 = ExceptionList;
  iVar5 = *(int *)(in_ECX + 0x6c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x5c) * 4);
  switch(*(undefined4 *)(in_ECX + 0x7c)) {
  case 0:
    ExceptionList = &local_10;
    cVar2 = FUN_0052ca30(iVar5,1);
    if ((cVar2 == '\0') || (*(char *)(iVar1 + 0xb00) == '\0')) {
      *(undefined4 *)(in_ECX + 0x7c) = 4;
      *(undefined4 *)(in_ECX + 0x70) = 0;
      *(undefined4 *)(in_ECX + 0x74) = 0;
      *(undefined4 *)(in_ECX + 0x78) = 0;
      ExceptionList = local_10;
      return;
    }
    cVar2 = FUN_004a4b10(in_ECX);
    if ((cVar2 != '\0') &&
       (iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))(),
       *(char *)(iVar5 + 0x34) == '\x01')) {
      iVar5 = FUN_00aae9af(0x58);
      uVar3 = 0;
      local_8 = 0;
      if (iVar5 != 0) {
        uVar3 = FUN_0057c1e0(iVar5,*(undefined4 *)(in_ECX + 0x70));
      }
LAB_004a479f:
      local_8 = 0xffffffff;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar3);
      ExceptionList = local_10;
      return;
    }
    break;
  case 1:
    uVar3 = 0;
    ExceptionList = &local_10;
    cVar2 = FUN_00511ef0(iVar1,*(undefined4 *)(in_ECX + 0x74),1,0,0,0,0);
    if ((cVar2 == '\0') || (*(char *)(iVar1 + 0xb00) == '\0')) goto LAB_004a4ac4;
    cVar2 = FUN_004a4b10(in_ECX);
    if ((cVar2 != '\0') &&
       (iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))(),
       *(char *)(iVar5 + 0x34) == '\x01')) {
      iVar5 = FUN_00aae9af(0x58);
      local_8 = 1;
      if (iVar5 != 0) {
        uVar3 = FUN_0057b640(iVar5,in_ECX,*(undefined4 *)(in_ECX + 0x70),
                             *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x58));
      }
      local_8 = 0xffffffff;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar3);
      ExceptionList = local_10;
      return;
    }
    break;
  case 2:
    iVar7 = *(int *)(iVar5 + 0x60);
    iVar4 = *(int *)(in_ECX + 0x78);
    for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar7 = *(int *)(iVar7 + 0x224);
    }
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar5 + 0x60);
      iVar5 = iVar7;
      for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar5 = *(int *)(iVar5 + 0x224);
      }
      if (*(int *)(iVar5 + 0x184) < 0xb) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar7 = *(int *)(iVar7 + 0x224);
        }
        if (*(char *)(iVar7 + 0x188) == '\0') goto LAB_004a49dc;
      }
      if (*(char *)(iVar1 + 0xb10) != '\0') {
        ExceptionList = &local_10;
        cVar2 = FUN_004a4b10(in_ECX);
        if (cVar2 == '\0') {
          ExceptionList = local_10;
          return;
        }
        iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        if (*(char *)(iVar5 + 0x34) != '\x01') {
          ExceptionList = local_10;
          return;
        }
        iVar4 = *(int *)(*(int *)(in_ECX + 0x6c) + 0x60);
        for (iVar5 = *(int *)(in_ECX + 0x78); iVar5 != 0; iVar5 = iVar5 + -1) {
          iVar4 = *(int *)(iVar4 + 0x224);
        }
        iVar5 = FUN_00aae9af(100);
        local_8 = 2;
        if (iVar5 == 0) {
          uVar3 = 0;
        }
        else {
          local_14 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar4 + 0x180));
          uVar3 = FUN_005828c0(iVar5,*(undefined4 *)(in_ECX + 0x78),local_14,
                               *(undefined4 *)(iVar4 + 0x24));
        }
        local_8 = 0xffffffff;
        iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar3);
        ExceptionList = local_10;
        return;
      }
    }
LAB_004a49dc:
    *(undefined4 *)(in_ECX + 0x7c) = 4;
    *(undefined4 *)(in_ECX + 0x70) = 0;
    *(undefined4 *)(in_ECX + 0x74) = 0;
    *(undefined4 *)(in_ECX + 0x78) = 0;
    return;
  case 3:
    iVar4 = *(int *)(iVar5 + 0x60);
    iVar5 = *(int *)(in_ECX + 0x78);
    for (iVar7 = iVar5; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar4 = *(int *)(iVar4 + 0x224);
    }
    iVar7 = iVar5;
    if (iVar4 != 0) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      }
      ExceptionList = &local_10;
      cVar2 = FUN_004f3510();
      if (cVar2 != '\0') {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        }
        cVar2 = FUN_0047e560();
        if ((cVar2 != '\0') && (*(char *)(iVar1 + 0xb08) != '\0')) {
          cVar2 = FUN_004a4b10(in_ECX);
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return;
          }
          iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          if (*(char *)(iVar5 + 0x34) != '\x01') {
            ExceptionList = local_10;
            return;
          }
          iVar5 = FUN_00aae9af(0x58);
          local_8 = 3;
          if (iVar5 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0057c290(iVar5,*(undefined4 *)(in_ECX + 0x78));
          }
          goto LAB_004a479f;
        }
      }
    }
LAB_004a4ac4:
    *(undefined4 *)(in_ECX + 0x7c) = 4;
    *(undefined4 *)(in_ECX + 0x70) = 0;
    *(undefined4 *)(in_ECX + 0x74) = 0;
    *(undefined4 *)(in_ECX + 0x78) = 0;
    ExceptionList = local_10;
    return;
  case 4:
    ExceptionList = &local_10;
    FUN_004a5170(in_ECX);
  }
  ExceptionList = local_10;
  return;
}

