// FUN_00709160 @ 00709160 body=[[00709160, 00709224] [00709228, 0070924e] [00709252, 007092b4]]


/* WARNING: Removing unreachable block (ram,0x007091d5) */

void FUN_00709160(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  ppvVar3 = &local_10;
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    ExceptionList = ppvVar3;
    local_8 = 0xffffffff;
    iVar7 = (param_2 + -1) / 2;
    piVar1 = *(int **)(param_1 + iVar7 * 4);
    iVar4 = (**(code **)(*(int *)*param_4 + 0x20))(local_50);
    local_8 = 0;
    iVar5 = (**(code **)(*piVar1 + 0x20))(local_34);
    local_18 = *(uint *)(iVar4 + 0x10);
    uVar2 = *(uint *)(iVar5 + 0x10);
    uVar6 = local_18;
    if (uVar2 < local_18) {
      uVar6 = uVar2;
    }
    uVar6 = FUN_00414bd0(uVar6);
    if (uVar6 == 0) {
      if (uVar2 < local_18) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar2 != local_18);
      }
    }
    local_11 = (int)uVar6 < 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (!(bool)local_11) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
    local_11 = 1;
    ppvVar3 = ExceptionList;
    param_2 = iVar7;
  } while (param_3 < iVar7);
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

