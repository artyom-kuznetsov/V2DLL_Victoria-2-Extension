// FUN_007079d0 @ 007079d0 body=[[007079d0, 00707a48] [00707a50, 00707ada] [00707ade, 00707b05] [00707b09, 00707b5d]]


/* WARNING: Removing unreachable block (ram,0x00707a90) */

void FUN_007079d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f940;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar3, puVar6 = puVar6 + 1, puVar6 != param_2) {
      piVar9 = (int *)*puVar6;
      local_20 = puVar6;
      local_1c = piVar9;
      local_14 = puVar6;
      cVar4 = FUN_006f3780();
      if (cVar4 == '\0') {
        while( true ) {
          local_18 = puVar6 + -1;
          iVar5 = (**(code **)(*(int *)puVar6[-1] + 0x20))(local_58);
          local_8 = 0;
          iVar7 = (**(code **)(*piVar9 + 0x20))(local_3c);
          uVar1 = *(uint *)(iVar5 + 0x10);
          uVar2 = *(uint *)(iVar7 + 0x10);
          uVar8 = uVar2;
          if (uVar1 <= uVar2) {
            uVar8 = uVar1;
          }
          uVar8 = FUN_00414bd0(uVar8);
          if (uVar8 == 0) {
            if (uVar2 < uVar1) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar2 != uVar1);
            }
          }
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          local_8 = 0xffffffff;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_58[0]);
          }
          local_44 = 0xf;
          local_48 = 0;
          local_58[0] = local_58[0] & 0xffffff00;
          if (-1 < (int)uVar8) break;
          *local_14 = *local_18;
          puVar6 = local_18;
          piVar9 = local_1c;
          local_14 = local_18;
        }
        *local_14 = local_1c;
        ppvVar3 = ExceptionList;
        puVar6 = local_20;
      }
      else {
        iVar5 = (int)puVar6 - (int)param_1 >> 2;
        FID_conflict__memcpy(puVar6 + (1 - iVar5),param_1,iVar5 * 4);
        *param_1 = piVar9;
        ppvVar3 = ExceptionList;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

