// FUN_00678860 @ 00678860 body=[[00678860, 00678899] [006788a0, 0067899e] [006789a2, 006789d8]]


/* WARNING: Removing unreachable block (ram,0x0067890b) */

void FUN_00678860(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int in_ECX;
  int iVar9;
  bool bVar10;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45648;
  local_14 = *(int *)(DAT_012588e8 + 0x18);
  ppvVar4 = &local_10;
  puVar3 = *(undefined4 **)(in_ECX + 0x1618);
  local_10 = ExceptionList;
  iVar7 = DAT_012588e8;
  do {
    ExceptionList = ppvVar4;
    if ((local_14 == 0) || (puVar3 == (undefined4 *)0x0)) {
      ExceptionList = local_10;
      DAT_012588e8 = iVar7;
      return;
    }
    local_18 = (undefined4 *)puVar3[2];
    local_20 = (int *)*puVar3;
    local_1c = iVar7;
    DAT_012588e8 = iVar7;
    for (iVar9 = *(int *)(iVar7 + 0x18); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x3c)) {
      iVar1 = *(int *)(iVar9 + 0x1c);
      iVar5 = (**(code **)(**(int **)(iVar7 + 0xb24) + 0x44))();
      if (iVar1 == *(int *)(iVar5 + 0x6c)) goto LAB_006788f5;
    }
    iVar9 = local_1c + 0x28;
LAB_006788f5:
    uVar8 = *(uint *)(local_14 + 0x10);
    uVar2 = *(uint *)(iVar9 + 0x10);
    uVar6 = uVar2;
    if (uVar8 <= uVar2) {
      uVar6 = uVar8;
    }
    iVar7 = FUN_00414bd0(uVar6);
    bVar10 = false;
    if (iVar7 == 0) {
      if (uVar2 < uVar8) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar2 != uVar8);
      }
      bVar10 = uVar8 == 0;
    }
    if (!bVar10) {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350("shield",6);
      local_8 = 0;
      (**(code **)(*local_20 + 0x48))(local_3c);
      FUN_009a8bc0();
      local_8 = 0xffffffff;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      *(undefined1 *)(local_14 + 0x29) = 0;
    }
    local_14 = *(int *)(local_14 + 0x3c);
    ppvVar4 = ExceptionList;
    puVar3 = local_18;
    iVar7 = DAT_012588e8;
  } while( true );
}

