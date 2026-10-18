// FUN_00ad1680 @ 00ad1680 body=[[00ad1680, 00ad16c6] [00ad16d0, 00ad17d6]]


void FUN_00ad1680(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  uint local_2c;
  int local_28;
  undefined **ppuStack_20;
  int *piStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b36c39;
  local_14 = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  local_28 = *(int *)(in_ECX + 0x1a0);
  if (local_28 != 0) {
    iVar6 = 0;
    do {
      uVar1 = *(uint *)(iVar6 + 4 + *(int *)(in_ECX + 0x19c));
      local_2c = 0;
      if (uVar1 != 0) {
        do {
          iVar5 = *(int *)(iVar6 + *(int *)(in_ECX + 0x19c));
          iVar7 = local_2c * 8;
          piVar4 = *(int **)(iVar5 + 4 + iVar7);
          *(undefined4 *)(iVar5 + 4 + iVar7) = 0;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))(uVar3);
          }
          iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 200) + iVar6);
          if (*(int *)(iVar5 + 4 + iVar7) == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(**(code **)(**(int **)(iVar5 + 4 + iVar7) + 0x10))();
          }
          iVar5 = (**(code **)(*piVar4 + 0xc))(&ppuStack_20);
          uStack_c = 0;
          iVar7 = *(int *)(iVar6 + *(int *)(in_ECX + 0x19c)) + iVar7;
          piVar4 = *(int **)(iVar5 + 4);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 4))();
          }
          piVar2 = *(int **)(iVar7 + 4);
          *(int **)(iVar7 + 4) = piVar4;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))();
          }
          piVar4 = piStack_1c;
          uStack_c = 0xffffffff;
          ppuStack_20 = &PTR_FUN_00e3fb28;
          piStack_1c = (int *)0x0;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 8))();
          }
          local_2c = local_2c + 1;
        } while (local_2c < uVar1);
      }
      iVar6 = iVar6 + 0x10;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  ExceptionList = local_14;
  return;
}

