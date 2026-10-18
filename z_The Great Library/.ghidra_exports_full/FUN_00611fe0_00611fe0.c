// FUN_00611fe0 @ 00611fe0 body=[[00611fe0, 00612058] [00612060, 006120e4] [006120e8, 0061210f] [00612113, 00612167]]


/* WARNING: Removing unreachable block (ram,0x00612099) */

void FUN_00611fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_58;
  uint local_44;
  uint local_3c;
  uint local_28;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f940;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar5, puVar4 = puVar4 + 1, puVar4 != param_2) {
      uVar1 = *puVar4;
      cVar6 = FUN_0060c990(uVar1,*param_1);
      local_14 = puVar4;
      if (cVar6 == '\0') {
        while( true ) {
          iVar7 = FUN_005fce10();
          local_8 = 0;
          iVar8 = FUN_005fce10();
          uVar2 = *(uint *)(iVar8 + 0x10);
          uVar3 = *(uint *)(iVar7 + 0x10);
          uVar9 = uVar3;
          if (uVar2 <= uVar3) {
            uVar9 = uVar2;
          }
          uVar9 = FUN_00414bd0(uVar9);
          if (uVar9 == 0) {
            if (uVar3 < uVar2) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (uint)(uVar3 != uVar2);
            }
          }
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c);
          }
          local_8 = 0xffffffff;
          local_28 = 0xf;
          local_3c = local_3c & 0xffffff00;
          if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_58);
          }
          local_44 = 0xf;
          local_58 = local_58 & 0xffffff00;
          if (-1 < (int)uVar9) break;
          *local_14 = local_14[-1];
          local_14 = local_14 + -1;
        }
        *local_14 = uVar1;
        ppvVar5 = ExceptionList;
      }
      else {
        iVar7 = (int)puVar4 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar4 + (1 - iVar7),param_1,iVar7 * 4);
        *param_1 = uVar1;
        ppvVar5 = ExceptionList;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

