// FUN_005ed240 @ 005ed240 body=[[005ed240, 005ed289] [005ed290, 005ed2ec] [005ed2f0, 005ed39a] [005ed39e, 005ed3c4] [005ed3c8, 005ed3d7]]


void FUN_005ed240(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  char local_150 [256];
  undefined4 local_50 [5];
  uint local_3c;
  undefined4 ***local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b531e8;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (undefined4 ***)((uint)local_34[0] & 0xffffff00);
  local_8 = 0;
  piVar3 = *(int **)(in_ECX + 0xc);
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    do {
      piVar1 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      local_18 = piVar3;
      cVar2 = FUN_005e61e0();
      if (cVar2 == '\0') {
        local_14 = piVar3[2];
        uVar4 = FUN_0043acd0(&local_14,local_50);
        local_8._0_1_ = 1;
        FUN_00408ed0(uVar4,0,0xffffffff);
        local_8._0_1_ = 0;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        ppppuVar5 = (undefined4 ****)local_34[0];
        if (local_20 < 0x10) {
          ppppuVar5 = local_34;
        }
        __snprintf(local_150,0xff,"%s",ppppuVar5);
        FUN_0099ff90(param_1);
        puVar6 = (undefined4 *)FUN_00990880();
        local_8._0_1_ = 2;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        __snprintf(local_150,0xff,"%s",puVar6);
        FUN_0099ff90(param_1);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        iVar7 = *local_18;
      }
      else {
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 4))(param_1);
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

