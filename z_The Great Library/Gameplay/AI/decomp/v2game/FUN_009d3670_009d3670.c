// FUN_009d3670 @ 009d3670 body=[[009d3670, 009d377c] [009d3780, 009d379e] [009d37a2, 009d37c1] [009d37c5, 009d37e4] [009d37e8, 009d3801] [009d3805, 009d38e4] [009d38e8, 009d390e] [009d3912, 009d392f] [009d3933, 009d394d] [009d3951, 009d396e] [009d3972, 009d39fd]]


undefined1 * FUN_009d3670(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint local_a4;
  uint local_90;
  uint local_88;
  uint local_74;
  uint local_6c;
  uint local_58;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b49a45;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  FUN_00448740("DLC:\n",5);
  local_14 = **(int **)(param_1 + 0x94);
  if ((int *)local_14 != *(int **)(param_1 + 0x94)) {
    do {
      iVar3 = local_14;
      FUN_00448740(&DAT_00e3b450,2);
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 1;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00e38d3c,1);
      local_8._0_1_ = 2;
      FUN_00988f20(local_30);
      local_8._0_1_ = 3;
      FUN_00988f20(iVar3 + 0x4c);
      local_8._0_1_ = 4;
      uVar5 = FUN_00988f20(local_4c);
      local_8._0_1_ = 5;
      FUN_00448aa0(uVar5,0,0xffffffff);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      local_58 = 0xf;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88);
      }
      local_74 = 0xf;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4);
      }
      local_90 = 0xf;
      local_a4 = local_a4 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      FUN_009d3e90();
    } while (local_14 != *(int *)(param_1 + 0x94));
  }
  FUN_00448740("Mod:\n",5);
  piVar6 = (int *)**(int **)(param_1 + 0xa4);
  if (piVar6 == *(int **)(param_1 + 0xa4)) {
    ExceptionList = local_10;
    return param_2;
  }
  while( true ) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 6;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e38d3c,1);
    local_8._0_1_ = 7;
    FUN_00988f20(local_30);
    local_8._0_1_ = 8;
    FUN_00988f20(piVar6 + 0x13);
    local_8._0_1_ = 9;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 10;
    FUN_00448aa0(uVar5,0,0xffffffff);
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
    local_90 = 0xf;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_58 = 0xf;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_1c) break;
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    if (*(char *)((int)piVar6 + 0x129) == '\0') {
      piVar2 = (int *)piVar6[2];
      if (*(char *)((int)piVar2 + 0x129) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x129);
        piVar6 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x129);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0x129);
        piVar4 = (int *)piVar6[1];
        piVar2 = piVar6;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x129);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
        }
      }
    }
    if (piVar6 == *(int **)(param_1 + 0xa4)) {
      ExceptionList = local_10;
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

