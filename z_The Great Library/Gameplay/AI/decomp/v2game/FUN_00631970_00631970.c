// FUN_00631970 @ 00631970 body=[[00631970, 00631a74] [00631a78, 00631a9f] [00631aa3, 00631b00]]


/* WARNING: Removing unreachable block (ram,0x00631a2a) */

void FUN_00631970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_60;
  uint local_4c;
  uint local_44;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f960;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  puVar7 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar5, puVar7 = puVar7 + 2, puVar7 != param_2) {
      uVar1 = *puVar7;
      local_24 = puVar7[1];
      local_28 = uVar1;
      local_20 = puVar7;
      local_18 = puVar7;
      cVar6 = FUN_0061af50(&local_28,param_1);
      puVar4 = puVar7;
      if (cVar6 == '\0') {
        while( true ) {
          local_1c = puVar7 + -2;
          iVar8 = FUN_0055dd40();
          local_8 = 0;
          iVar9 = FUN_0055dd40();
          uVar2 = *(uint *)(iVar8 + 0x10);
          uVar3 = *(uint *)(iVar9 + 0x10);
          uVar10 = uVar3;
          if (uVar2 <= uVar3) {
            uVar10 = uVar2;
          }
          uVar10 = FUN_00414bd0(uVar10);
          if (uVar10 == 0) {
            if (uVar3 < uVar2) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = (uint)(uVar3 != uVar2);
            }
          }
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_44);
          }
          local_8 = 0xffffffff;
          local_30 = 0xf;
          local_44 = local_44 & 0xffffff00;
          if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60);
          }
          local_4c = 0xf;
          local_60 = local_60 & 0xffffff00;
          if (-1 < (int)uVar10) break;
          *local_18 = *local_1c;
          local_18[1] = local_1c[1];
          puVar7 = local_1c;
          local_18 = local_1c;
        }
        *local_18 = local_28;
        local_18[1] = local_24;
        ppvVar5 = ExceptionList;
        puVar7 = local_20;
      }
      else {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar1;
        param_1[1] = local_24;
        ppvVar5 = ExceptionList;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

