// FUN_00ae3eb0 @ 00ae3eb0 body=[[00ae3eb0, 00ae3fa7]]


void FUN_00ae3eb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b37beb;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar8 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x80) + uVar8 * 4) + 0x1c);
      if ((*(int *)(iVar4 + 4) != 0) &&
         (iVar4 = (**(code **)(**(int **)(iVar4 + 4) + 0x10))(uVar3), iVar4 != 0)) {
        iVar5 = (*(code *)PTR_FUN_00f01b08)(0x1c,0xcc,4,0,0,0xffffffff);
        uStack_4 = 0;
        if (iVar5 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_00b07970(*(undefined4 *)(iVar4 + 0x18),0xfadefade,4,0);
        }
        uStack_4 = 0xffffffff;
        FUN_00adeb30(piVar6);
        iVar5 = (**(code **)(*piVar6 + 0x10))();
        uVar2 = *(uint *)(iVar4 + 0x18);
        uVar7 = 0;
        if (uVar2 != 0) {
          do {
            *(uint *)(iVar5 + uVar7 * 4) = uVar7;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  ExceptionList = local_c;
  return;
}

