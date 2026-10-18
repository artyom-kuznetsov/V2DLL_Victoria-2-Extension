// FUN_00739fd0 @ 00739fd0 body=[[00739fd0, 0073a089] [0073a090, 0073a129] [0073a12d, 0073a154] [0073a158, 0073a1db]]


/* WARNING: Removing unreachable block (ram,0x0073a0df) */

void FUN_00739fd0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_1c;
  undefined8 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ca70;
  local_10 = ExceptionList;
  ppvVar5 = &local_10;
  puVar7 = param_1;
  if (param_1 != param_2) {
    while (ExceptionList = ppvVar5, puVar7 = puVar7 + 3, puVar7 != param_2) {
      local_38 = *puVar7;
      local_30 = puVar7[1];
      local_28 = puVar7[2];
      local_20 = puVar7;
      local_18 = puVar7;
      cVar6 = FUN_0072fcd0(param_1);
      puVar4 = puVar7;
      if (cVar6 == '\0') {
        while( true ) {
          piVar1 = *(int **)(local_30._4_4_ + 0x16c);
          local_1c = puVar7 + -3;
          iVar8 = (**(code **)(**(int **)(*(int *)((int)puVar7 + -0xc) + 0x16c) + 0x18))(local_70);
          local_8 = 0;
          iVar9 = (**(code **)(*piVar1 + 0x18))(local_54);
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
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_54[0]);
          }
          local_8 = 0xffffffff;
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_70[0]);
          }
          local_5c = 0xf;
          local_60 = 0;
          local_70[0] = local_70[0] & 0xffffff00;
          if (-1 < (int)uVar10) break;
          *local_18 = *local_1c;
          local_18[1] = local_1c[1];
          local_18[2] = local_1c[2];
          puVar7 = local_1c;
          local_18 = local_1c;
        }
        *local_18 = local_38;
        local_18[1] = local_30;
        local_18[2] = local_28;
        ppvVar5 = ExceptionList;
        puVar7 = local_20;
      }
      else {
        for (; param_1 != puVar4; puVar4 = puVar4 + -3) {
          *puVar4 = puVar4[-3];
          puVar4[1] = puVar4[-2];
          puVar4[2] = puVar4[-1];
        }
        *param_1 = local_38;
        param_1[1] = local_30;
        param_1[2] = local_28;
        ppvVar5 = ExceptionList;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

