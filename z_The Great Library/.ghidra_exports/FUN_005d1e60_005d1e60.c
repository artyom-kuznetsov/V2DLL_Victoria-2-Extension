// FUN_005d1e60 @ 005d1e60  (requested 005D1E60, first bytes: 55 8B EC 64 A1 00 00 00)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d1e60(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_EDI;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb7c48;
  local_10 = ExceptionList;
  if ((0 < *(int *)(unaff_EDI + 0xec)) && (0 < *(int *)(unaff_EDI + 0x54))) {
    ExceptionList = &local_10;
    FUN_005d24a0(&local_14);
    piVar3 = *(int **)(unaff_EDI + 0x4c);
    while (piVar3 != (int *)0x0) {
      local_18 = (int *)piVar3[2];
      iVar1 = *piVar3;
      piVar3 = local_18;
      if (*(int *)(iVar1 + 0xdc) == *(int *)(unaff_EDI + 0xdc)) {
        if (*(int *)(iVar1 + 0xec) < 1) {
          local_30 = (undefined4 *)0x0;
          local_2c = (undefined4 *)0x0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_8 = 0;
          puVar2 = *(undefined4 **)(unaff_EDI + 0xe4);
          local_2c = (undefined4 *)FUN_00aae9af(0x10);
          if (local_2c == (undefined4 *)0x0) {
            local_2c = (undefined4 *)0x0;
          }
          else {
            *local_2c = *puVar2;
            local_2c[1] = 0;
            local_2c[2] = 0;
            *(undefined1 *)(local_2c + 3) = 0;
          }
          puVar2 = local_2c;
          if (local_28 != 0) {
            _DAT_00000008 = local_2c;
            puVar2 = local_30;
          }
          local_30 = puVar2;
          local_28 = local_28 + 1;
          FUN_005d1bb0(&local_30,1);
          local_8 = 0xffffffff;
          FUN_00849e90();
        }
        FUN_005d24a0(&local_1c);
        piVar3 = local_18;
        if (local_14 < local_1c) {
          local_14 = local_1c;
        }
      }
    }
    piVar3 = *(int **)(unaff_EDI + 0x4c);
    *(undefined4 *)(unaff_EDI + 0xa8) = DAT_01259abc;
    *(int *)(unaff_EDI + 0xac) = local_14;
    while (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if (*(int *)(iVar1 + 0xdc) == *(int *)(unaff_EDI + 0xdc)) {
        *(undefined4 *)(iVar1 + 0xa8) = DAT_01259abc;
        *(int *)(iVar1 + 0xac) = local_14;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

