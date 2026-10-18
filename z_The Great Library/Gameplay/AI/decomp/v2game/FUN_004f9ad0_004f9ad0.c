// FUN_004f9ad0 @ 004f9ad0 body=[[004f9ad0, 004f9ba1] [004f9ba5, 004f9bd0]]


/* WARNING: Removing unreachable block (ram,0x004f9b55) */

undefined4 FUN_004f9ad0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3def8;
  ppvVar4 = &local_10;
  piVar2 = *(int **)(param_1 + 0x7b4);
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar4;
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    if (*piVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*piVar2 + 0x38);
    }
    puVar5 = (undefined4 *)*puVar5;
    while (ppvVar4 = ExceptionList, piVar2 = piVar1, puVar5 != (undefined4 *)0x0) {
      local_8 = 0xffffffff;
      piVar2 = (int *)*puVar5;
      puVar5 = (undefined4 *)puVar5[2];
      iVar6 = (**(code **)(*piVar2 + 0x20))(local_2c);
      uVar7 = *(uint *)(param_2 + 0x10);
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = uVar3;
      if (uVar7 <= uVar3) {
        uVar8 = uVar7;
      }
      iVar6 = FUN_00414bd0(uVar8);
      bVar9 = false;
      if (iVar6 == 0) {
        if (uVar3 < uVar7) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(uVar3 != uVar7);
        }
        bVar9 = uVar7 == 0;
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      if (bVar9) {
        ExceptionList = local_10;
        return 1;
      }
    }
  } while( true );
}

