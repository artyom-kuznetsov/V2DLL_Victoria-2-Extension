// FUN_004e4ad0 @ 004e4ad0 body=[[004e4ad0, 004e4b5c] [004e4b66, 004e4be6] [004e4bf0, 004e4c18] [004e4c22, 004e4ca8] [004e4cb4, 004e4cee] [004e4cf2, 004e4d1d] [004e4d21, 004e4d3f]]


void FUN_004e4ad0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined1 **local_2c;
  int *local_28;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00ba889a;
  ExceptionList = &local_10;
  *in_ECX = CRebelFaction::vftable;
  local_8 = 5;
  puVar4 = (undefined4 *)in_ECX[0x20];
  while (puVar4 != (undefined4 *)0x0) {
    local_2c = (undefined1 **)*puVar4;
    puVar1 = (undefined4 *)puVar4[3];
    local_14 = (undefined1 *)&local_2c;
    local_28 = (int *)puVar4[1];
    iVar6 = FUN_009c16d0();
    puVar4 = puVar1;
    if ((iVar6 != 0) && (local_28 = (int *)(iVar6 + -8), local_28 != (int *)0x0)) {
      local_2c = (undefined1 **)0x4e4b46;
      FUN_0068aa10();
    }
  }
  local_28 = (int *)in_ECX[0x20];
  if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    local_2c = (undefined1 **)&UNK_004e4b5d;
    FUN_00aae91b();
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  piVar2 = (int *)in_ECX[0x29];
  do {
    if (piVar2 == (int *)0x0) {
      local_28 = (int *)in_ECX[0x29];
      if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_2c = (undefined1 **)&UNK_004e4c19;
        FUN_00aae91b();
      }
      in_ECX[0x29] = 0;
      in_ECX[0x2a] = 0;
      in_ECX[0x2b] = 0;
      piVar2 = (int *)in_ECX[0x25];
      while (piVar2 != (int *)0x0) {
        local_14 = *(undefined1 **)(DAT_012588e8 + 0xb0c);
        iVar6 = *piVar2;
        piVar2 = (int *)piVar2[2];
        iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar6 * 4);
        local_28 = (int *)0x0;
        local_2c = &local_14;
        FUN_004b5730(iVar6,iVar6 + 0x128);
      }
      local_28 = in_ECX + 0x35;
      uVar5 = (uint)local_8 >> 8;
      local_8 = CONCAT31((int3)uVar5,4);
      in_ECX[0x33] = CUniqueUnitName::vftable;
      local_2c = (undefined1 **)0x4e4c8e;
      FUN_005c5190();
      local_28 = (int *)in_ECX[0x29];
      if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_2c = (undefined1 **)&UNK_004e4ca9;
        FUN_00aae91b();
      }
      in_ECX[0x29] = 0;
      in_ECX[0x2a] = 0;
      in_ECX[0x2b] = 0;
      local_28 = (int *)0x4e4cd1;
      FUN_00849e90();
      local_28 = (int *)0x4e4cdc;
      FUN_004e9430();
      if (0xf < (uint)in_ECX[0x1c]) {
        local_28 = (int *)in_ECX[0x17];
                    /* WARNING: Subroutine does not return */
        local_2c = (undefined1 **)&UNK_004e4cef;
        FUN_00aae91b();
      }
      in_ECX[0x1c] = 0xf;
      in_ECX[0x1b] = 0;
      *(undefined1 *)(in_ECX + 0x17) = 0;
      *in_ECX = &PTR_FUN_00e3a544;
      local_28 = (int *)0x4e4d10;
      FUN_009c1650();
      if ((uint)in_ECX[10] < 0x10) {
        in_ECX[10] = 0xf;
        in_ECX[9] = 0;
        *(undefined1 *)(in_ECX + 5) = 0;
        ExceptionList = local_10;
        return;
      }
      local_28 = (int *)in_ECX[5];
                    /* WARNING: Subroutine does not return */
      local_2c = (undefined1 **)&UNK_004e4d1e;
      FUN_00aae91b();
    }
    iVar6 = *piVar2;
    piVar2 = (int *)piVar2[2];
    for (local_28 = (int *)in_ECX[0x29]; local_28 != (int *)0x0; local_28 = (int *)local_28[2]) {
      if (*local_28 == iVar6) {
        if (local_28 != (int *)0x0) {
          if (*(char *)(in_ECX + 0x2c) == '\0') {
            iVar6 = local_28[1];
            iVar3 = local_28[2];
            if (iVar6 != 0) {
              *(int *)(iVar6 + 8) = iVar3;
            }
            if (iVar3 != 0) {
              *(int *)(iVar3 + 4) = iVar6;
            }
            if (local_28 == (int *)in_ECX[0x29]) {
              in_ECX[0x29] = iVar3;
            }
            if (local_28 == (int *)in_ECX[0x2a]) {
              in_ECX[0x2a] = iVar6;
            }
                    /* WARNING: Subroutine does not return */
            local_2c = (undefined1 **)&UNK_004e4be7;
            FUN_00aae91b();
          }
          *(undefined1 *)(local_28 + 3) = 1;
        }
        break;
      }
    }
    local_28 = (int *)0x0;
    local_2c = (undefined1 **)0x4e4bf9;
    FUN_00965bd0();
  } while( true );
}

