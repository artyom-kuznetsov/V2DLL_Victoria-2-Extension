// FUN_005e1be0 @ 005e1be0  (requested 005E1BE0, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x005e1d01) */
/* WARNING: Removing unreachable block (ram,0x005e1d54) */

undefined4 FUN_005e1be0(void)

{
  int iVar1;
  uint uVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int *local_4c;
  int local_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00b3f970;
  local_14 = ExceptionList;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_c = 0;
  uStack_b = 0;
  iVar7 = *(int *)(in_ECX + 0x3c);
  ExceptionList = &local_14;
  ppvVar3 = &local_14;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    do {
      ExceptionList = ppvVar3;
      local_c = 0;
      iVar1 = *(int *)(iVar7 + 0x2c);
      uVar2 = *(uint *)(iVar7 + 4);
      FUN_00408ed0(iVar7 + 0xc,0,0xffffffff);
      local_c = 1;
      iVar7 = DAT_01258a94;
      if (uVar2 < 0x1269) {
        iVar7 = DAT_01258a98;
      }
      if ((iVar7 == 0) || (iVar5 = FUN_009c1d40(), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -8;
      }
      if (iVar5 == 0) goto LAB_005e1d71;
      piVar6 = (int *)FUN_00aae9af(0x10);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = iVar5;
        piVar6[1] = (int)local_4c;
        piVar6[2] = 0;
        *(undefined1 *)(piVar6 + 3) = 0;
      }
      iVar8 = local_48 + 1;
      if (local_48 != 0) {
        local_4c[2] = (int)piVar6;
      }
      local_c = 0;
      iVar7 = iVar1;
      ppvVar3 = ExceptionList;
      local_4c = piVar6;
      local_48 = iVar8;
    } while (iVar1 != 0);
    if (((iVar5 != 0) && (1 < iVar8)) && (cVar4 = FUN_00513d50(), cVar4 != '\0')) {
      FUN_009a63f0();
      ExceptionList = local_14;
      return 1;
    }
  }
LAB_005e1d71:
  FUN_009a63f0();
  ExceptionList = local_14;
  return 0;
}

