// FUN_00ad4340 @ 00ad4340 body=[[00ad4340, 00ad44d7]]


void FUN_00ad4340(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 **ppuVar7;
  int in_ECX;
  undefined4 *puVar8;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b36ef4;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0x25b;
  puVar8 = (undefined4 *)(param_2 + 1);
  local_4 = 0;
  if ((puVar8 != (undefined4 *)0x0) && (local_18 = puVar8, puVar8 != (undefined4 *)0x0)) {
    FUN_00aeb6c0(puVar8);
  }
  *local_1c = param_1;
  puVar8 = local_1c;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar8 = puVar8 + 1;
    uVar4 = FUN_00ad6e90(0x1f);
    *puVar8 = uVar4;
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  piVar1 = (int *)(in_ECX + 0x10);
  uVar5 = iVar2 + 1;
  *(uint *)(in_ECX + 0x14) = uVar5;
  if (*(uint *)(in_ECX + 0x18) < uVar5) {
    iVar2 = iVar2 + 2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      *(undefined4 *)(in_ECX + 0x18) = 0;
      if (*piVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(*piVar1);
        *piVar1 = 0;
      }
    }
    else {
      if (*piVar1 == 0) {
        iVar6 = (*(code *)PTR_FUN_00f01b08)
                          (iVar2 * 0x10,*(undefined2 *)(in_ECX + 0x1c),4,2,0,0xffffffff,uVar3);
      }
      else {
        iVar6 = (*(code *)PTR_FUN_00f01b0c)(*piVar1,iVar2 * 0x10);
      }
      *piVar1 = iVar6;
      *(int *)(in_ECX + 0x18) = iVar2;
    }
  }
  ppuVar7 = (undefined4 **)((*(int *)(in_ECX + 0x14) + -1) * 0x10 + *piVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (ppuVar7 != (undefined4 **)0x0) {
    *ppuVar7 = (undefined4 *)0x0;
    ppuVar7[1] = (undefined4 *)0x0;
    ppuVar7[2] = (undefined4 *)0x0;
    *(undefined2 *)(ppuVar7 + 3) = 1;
    if (&local_1c != ppuVar7) {
      *(undefined2 *)(ppuVar7 + 3) = local_10;
      ppuVar7[1] = local_18;
      if (local_18 != (undefined4 *)0x0) {
        FUN_00aeb6c0((int)local_18 + 1);
      }
      puVar8 = (undefined4 *)0x0;
      if (ppuVar7[1] != (undefined4 *)0x0) {
        do {
          if (*ppuVar7 + (int)puVar8 != (undefined4 *)0x0) {
            (*ppuVar7)[(int)puVar8] = local_1c[(int)puVar8];
          }
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        } while (puVar8 < ppuVar7[1]);
      }
    }
  }
  local_4 = 0xffffffff;
  (*(code *)PTR__free_00f01b10)(local_1c);
  ExceptionList = local_c;
  return;
}

