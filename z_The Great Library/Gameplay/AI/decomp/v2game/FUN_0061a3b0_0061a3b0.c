// FUN_0061a3b0 @ 0061a3b0 body=[[0061a3b0, 0061a56d] [0061a571, 0061a59a] [0061a59e, 0061a5c7] [0061a5cb, 0061a75d] [0061a761, 0061a86c] [0061a870, 0061a8b4] [0061a8b8, 0061a8d3] [0061a8d7, 0061a8f6] [0061a8fa, 0061a910]]


/* WARNING: Removing unreachable block (ram,0x0061a754) */
/* WARNING: Removing unreachable block (ram,0x0061a8ca) */

void FUN_0061a3b0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int local_118;
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_e8;
  uint local_d8;
  undefined4 local_d4;
  uint uStack_d0;
  char local_cc [12];
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 auStack_b0 [4];
  undefined1 local_ac [16];
  uint uStack_9c;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  int local_3c;
  int local_34;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b706f9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x28) = param_2;
  cVar2 = FUN_00911760();
  if (cVar2 == '\0') {
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    FUN_00409350();
    local_c = 0xc;
    FUN_00409350();
    local_c._0_1_ = 0xd;
    FUN_009a8ee0();
    local_c._0_1_ = 0xe;
    iVar3 = FUN_00475500();
    uVar5 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c = CONCAT31(local_c._1_3_,0xf);
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    FUN_00408ed0(uVar5,0);
    FUN_00a5ecc0();
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
    FUN_009adb70();
    uStack_9c = local_d8;
    if (local_118 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00401000();
    FUN_00b31c00();
    iVar3 = FUN_0050d540();
    FUN_0094bdb0(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc));
    FUN_009500e0();
    FUN_00988a50();
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = local_104[0] & 0xffffff00;
    local_c._0_1_ = 1;
    local_c._1_3_ = 0;
    pcVar4 = __itoa(iVar3,local_cc,10);
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_c._0_1_ = 2;
    uVar5 = FUN_0090a830();
    local_c._0_1_ = 3;
    FUN_0043e9a0(local_ac,&DAT_00df7e80,uVar5,&DAT_00dff69c,local_104);
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = local_104[0] & 0xffffff00;
    local_c._0_1_ = 7;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 7;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_3c * 4) + 0xbe8) +
                    local_34 * 4);
    if (((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x34), uVar1 = (undefined1)local_c, iVar3 != 0))
       && (*(char *)(iVar3 + 0xfc) != '\0')) {
      iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x49c);
      FUN_00401000();
      iVar6 = FUN_00b31c00();
      __alldiv((longlong)iVar6 * (longlong)iVar3);
      FUN_00988a50();
      local_c._0_1_ = 8;
      FUN_0042c180();
      local_c._0_1_ = 9;
      FUN_00988fa0();
      local_c._0_1_ = 10;
      FUN_00448aa0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_c._0_1_ = 7;
      FUN_00408ad0();
      uVar1 = (undefined1)local_c;
    }
    local_c._0_1_ = uVar1;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,0xb);
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    FUN_00408ed0(auStack_b0,0);
    FUN_00a5ecc0();
  }
  if (uStack_9c < 0x10) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

