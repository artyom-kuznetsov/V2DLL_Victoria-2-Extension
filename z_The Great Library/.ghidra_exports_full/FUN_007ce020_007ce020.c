// FUN_007ce020 @ 007ce020 body=[[007ce020, 007ce12f] [007ce133, 007ce15a] [007ce15e, 007ce1b6]]


/* WARNING: Removing unreachable block (ram,0x007ce0e5) */

void FUN_007ce020(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c8b0;
  local_10 = ExceptionList;
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    local_18 = (int)piVar5 - (int)param_1;
    ExceptionList = &local_10;
    do {
      iVar6 = *piVar5;
      local_24 = piVar5;
      local_20 = iVar6;
      local_14 = piVar5;
      cVar4 = FUN_007c6a20(*param_1);
      if (cVar4 == '\0') {
        while( true ) {
          piVar1 = *(int **)(iVar6 + 100);
          local_1c = piVar5 + -1;
          iVar6 = (**(code **)(**(int **)(*local_1c + 100) + 0x1c))(local_5c);
          local_8 = 0;
          iVar7 = (**(code **)(*piVar1 + 0x1c))(local_40);
          uVar2 = *(uint *)(iVar6 + 0x10);
          uVar3 = *(uint *)(iVar7 + 0x10);
          uVar8 = uVar3;
          if (uVar2 <= uVar3) {
            uVar8 = uVar2;
          }
          uVar8 = FUN_00414bd0(uVar8);
          if (uVar8 == 0) {
            if (uVar3 < uVar2) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar3 != uVar2);
            }
          }
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40[0]);
          }
          local_8 = 0xffffffff;
          local_2c = 0xf;
          local_30 = 0;
          local_40[0] = local_40[0] & 0xffffff00;
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_5c[0]);
          }
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (-1 < (int)uVar8) break;
          *local_14 = *local_1c;
          piVar5 = local_1c;
          iVar6 = local_20;
          local_14 = local_1c;
        }
        *local_14 = local_20;
      }
      else {
        FID_conflict__memcpy(piVar5 + (1 - (local_18 >> 2)),param_1,(local_18 >> 2) * 4);
        *param_1 = iVar6;
        local_24 = piVar5;
      }
      local_18 = local_18 + 4;
      piVar5 = local_24 + 1;
    } while (piVar5 != param_2);
  }
  ExceptionList = local_10;
  return;
}

