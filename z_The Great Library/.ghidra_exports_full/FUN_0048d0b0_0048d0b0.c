// FUN_0048d0b0 @ 0048d0b0 body=[[0048d0b0, 0048d182] [0048d186, 0048d22f] [0048d233, 0048d249] [0048d250, 0048d34e]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0048d0b0(undefined4 param_1)

{
  char cVar1;
  undefined4 ***pppuVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****local_150 [5];
  int *local_13c;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b604f6;
  ppppuVar9 = (undefined4 ****)0x0;
  ppppuVar10 = (undefined4 ****)0x0;
  local_150[1] = (undefined4 ****)0x0;
  local_150[2] = (undefined4 ****)0x0;
  local_150[3] = (undefined4 ****)0x0;
  local_c = 0;
  piVar3 = *(int **)(in_ECX + 8);
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  do {
    if (piVar3 == (int *)0x0) {
      FUN_0043cd10(local_150 + 1,0);
      if (*(int *)(in_ECX + 0x20) != 0) {
        local_124 = 0xf;
        local_128 = 0;
        local_138 = local_138 & 0xffffff00;
        pcVar4 = (char *)(in_ECX + 0x1c);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00409350((char *)(in_ECX + 0x1c),(int)pcVar4 - (in_ECX + 0x1d));
        local_c._0_1_ = 1;
        FUN_009a0940(param_1);
        FUN_0099f770(param_1,0);
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138);
        }
      }
      cVar1 = *(char *)(in_ECX + 0x28);
      FUN_009a0940(param_1);
      local_11c = 0xe;
      puVar5 = &DAT_00dfbbd0;
      if (cVar1 == '\0') {
        puVar5 = &DAT_00dfbbd4;
      }
      _sprintf(local_118,"%s",puVar5);
      FUN_0099ff90(param_1);
      FUN_004013e0(param_1);
      cVar1 = *(char *)(in_ECX + 0x18);
      FUN_009a0940(param_1);
      local_11c = 0xe;
      puVar5 = &DAT_00dfbbd0;
      if (cVar1 == '\0') {
        puVar5 = &DAT_00dfbbd4;
      }
      _sprintf(local_118,"%s",puVar5);
      FUN_0099ff90(param_1);
      FUN_004013e0(param_1);
      if (ppppuVar10 != (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppuVar10);
      }
      ExceptionList = local_14;
      return;
    }
    local_13c = (int *)piVar3[2];
    pppuVar2 = *(undefined4 ****)(*piVar3 + 0x58);
    local_150[0] = (undefined4 ****)pppuVar2;
    if ((local_150 < local_150[2]) && (ppppuVar10 <= local_150)) {
      iVar8 = (int)local_150 - (int)ppppuVar10;
      if (local_150[2] == ppppuVar9) {
        uVar6 = (int)local_150[2] - (int)ppppuVar10 >> 2;
        if (0x3ffffffe < uVar6) {
LAB_0048d345:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar6 = uVar6 + 1;
        uVar7 = (int)ppppuVar9 - (int)ppppuVar10 >> 2;
        if (uVar7 < uVar6) {
          if (0x3fffffff - (uVar7 >> 1) < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < uVar6) {
            uVar7 = uVar6;
          }
          FUN_004bf300(uVar7);
          ppppuVar9 = local_150[3];
          ppppuVar10 = local_150[1];
        }
      }
      if (local_150[2] != (undefined4 ****)0x0) {
        *local_150[2] = ppppuVar10[iVar8 >> 2];
      }
    }
    else {
      if (local_150[2] == ppppuVar9) {
        uVar6 = (int)local_150[2] - (int)ppppuVar10 >> 2;
        if (0x3ffffffe < uVar6) goto LAB_0048d345;
        uVar6 = uVar6 + 1;
        uVar7 = (int)ppppuVar9 - (int)ppppuVar10 >> 2;
        if (uVar7 < uVar6) {
          if (0x3fffffff - (uVar7 >> 1) < uVar7) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar7 + (uVar7 >> 1);
          }
          if (uVar7 < uVar6) {
            uVar7 = uVar6;
          }
          FUN_004bf300(uVar7);
          ppppuVar9 = local_150[3];
          ppppuVar10 = local_150[1];
        }
      }
      if (local_150[2] != (undefined4 ****)0x0) {
        *local_150[2] = pppuVar2;
      }
    }
    local_150[2] = local_150[2] + 1;
    piVar3 = local_13c;
  } while( true );
}

