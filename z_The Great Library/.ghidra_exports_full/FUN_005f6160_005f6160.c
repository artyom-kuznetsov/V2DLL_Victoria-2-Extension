// FUN_005f6160 @ 005f6160 body=[[005f6160, 005f6221] [005f6225, 005f62d1] [005f62d5, 005f62fc] [005f6300, 005f6316]]


void FUN_005f6160(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  int local_158;
  undefined4 ***local_154 [4];
  undefined4 local_144;
  uint local_140;
  undefined4 local_138 [5];
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b531c1;
  local_14 = ExceptionList;
  local_140 = 0xf;
  local_144 = 0;
  local_154[0] = (undefined4 ***)((uint)local_154[0] & 0xffffff00);
  local_c = 0;
  piVar3 = *(int **)(in_ECX + 0xc);
  ExceptionList = &local_14;
  if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
    do {
      piVar1 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      cVar2 = FUN_005e61e0();
      if (cVar2 == '\0') {
        local_158 = piVar3[2];
        uVar4 = FUN_0043acd0(&local_158,local_138);
        local_c._0_1_ = 1;
        FUN_00408ed0(uVar4,0,0xffffffff);
        local_c._0_1_ = 0;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138[0]);
        }
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        local_11c = 0xf;
        ppppuVar5 = (undefined4 ****)local_154[0];
        if (local_140 < 0x10) {
          ppppuVar5 = local_154;
        }
        __snprintf(local_118,0xff,"%s",ppppuVar5);
        FUN_0099ff90(param_1);
        puVar6 = (undefined4 *)FUN_00990880();
        local_c._0_1_ = 2;
        local_11c = 1;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        __snprintf(local_118,0xff,"%s",puVar6);
        FUN_0099ff90(param_1);
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138[0]);
        }
        iVar7 = *piVar3;
      }
      else {
        iVar7 = *piVar3;
      }
      (**(code **)(iVar7 + 4))(param_1);
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_154[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

