// FUN_007b5d30 @ 007b5d30 body=[[007b5d30, 007b5ea4] [007b5ea8, 007b5ef7] [007b6045, 007b618c] [007b6190, 007b61bb] [007b61bf, 007b61f9] [007b61fd, 007b621c] [007b6220, 007b624a] [007b624e, 007b6268] [007b6284, 007b646b] [007b6487, 007b650b] [007b6510, 007b65ad]]


/* WARNING: Removing unreachable block (ram,0x007b6241) */
/* WARNING: Removing unreachable block (ram,0x007b6213) */

void FUN_007b5d30(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  uint local_1ac;
  uint uStack_194;
  uint uStack_178;
  uint uStack_15c;
  undefined1 local_70 [92];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7a323;
  local_14 = ExceptionList;
  iVar2 = *(int *)(in_ECX + 0xc);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x108) != '\0') {
      local_c = 2;
      ExceptionList = &local_14;
      FUN_009d5e10();
      local_c = 3;
      FUN_007b92d0();
      local_c._0_1_ = 4;
      iVar2 = FUN_00aae9af();
      local_c._0_1_ = 5;
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_00409350(&DAT_00ded94d,0);
        local_c = CONCAT31(local_c._1_3_,6);
        uVar3 = FUN_00988fa0(local_70);
        local_c = 8;
        piVar4 = (int *)FUN_00992740(iVar2,uVar3,1);
      }
      local_c = 4;
      if ((iVar2 != 0) && (0xf < local_1ac)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      (**(code **)(*piVar4 + 0x20))();
      (**(code **)*piVar4)();
      if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0xc))();
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(iVar2 + 0x104) != 0) {
      ExceptionList = &local_14;
      FUN_00409350();
      local_c = 0xb;
      FUN_00409350();
      local_c._0_1_ = 0xc;
      piVar4 = *(int **)(*(int *)(in_ECX + 8) + 0x20);
      FUN_007b1800();
      local_c._0_1_ = 0xd;
      FUN_009a8ee0();
      local_c._0_1_ = 0xe;
      FUN_00475500();
      FUN_009a9880();
      local_c._0_1_ = 0xf;
      FUN_00988f20();
      local_c = CONCAT31(local_c._1_3_,0x10);
      (**(code **)(*piVar4 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (uStack_178 < 0x10) {
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xd);
        FUN_009a9740();
        if (uStack_194 < 0x10) {
          puStack_10 = (undefined1 *)0xffffffff;
          if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(in_ECX + 0xc))();
          }
          *(undefined4 *)(in_ECX + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = &local_14;
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x10))();
    if (cVar1 == '\0') {
      FUN_009885d0();
      local_c = 0x11;
      FUN_009885d0();
      local_c._0_1_ = 0x12;
      FUN_009885d0();
      local_c._0_1_ = 0x13;
      piVar4 = *(int **)(*(int *)(in_ECX + 8) + 0x20);
      FUN_009a8ee0();
      local_c._0_1_ = 0x14;
      FUN_00475500();
      FUN_009a9880();
      local_c._0_1_ = 0x15;
      FUN_009a8ee0();
      local_c._0_1_ = 0x16;
      FUN_00475500();
      FUN_009a9880();
      local_c._0_1_ = 0x17;
      FUN_00988f20();
      local_c = CONCAT31(local_c._1_3_,0x18);
      (**(code **)(*piVar4 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      FUN_00408ad0();
      FUN_00408ad0();
      puStack_10._0_1_ = 0x15;
      FUN_009a9740();
      FUN_00408ad0();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x13);
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00408ad0();
      if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0xc))();
      }
      *(undefined4 *)(in_ECX + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      FUN_009885d0();
      local_c = 0x19;
      piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))();
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00408ad0();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
      for (iVar2 = *piVar4; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        FUN_007b92d0();
        local_c = 0x1a;
        cVar1 = FUN_00416db0();
        local_c = 0xffffffff;
        FUN_007b46e0();
        if (cVar1 != '\0') {
          FUN_007b8e60();
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

