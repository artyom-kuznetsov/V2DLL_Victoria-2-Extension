// FUN_009daf80 @ 009daf80 body=[[009daf80, 009db043] [009db047, 009db069] [009db072, 009db0ef] [009db0f3, 009db110] [009db114, 009db25d] [009db261, 009db283] [009db28c, 009db309] [009db30d, 009db32a] [009db32e, 009db3b4] [009db3b8, 009db496]]


/* WARNING: Removing unreachable block (ram,0x009db108) */
/* WARNING: Removing unreachable block (ram,0x009db27b) */
/* WARNING: Removing unreachable block (ram,0x009db061) */
/* WARNING: Removing unreachable block (ram,0x009db322) */

void FUN_009daf80(char *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  FILE *pFVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  uint in_stack_00000024;
  undefined4 uStack_f8;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4f039;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  if (param_2 == 0) {
    *(char *)(in_ECX + 0x11) = (char)param_3;
    *(undefined2 *)(in_ECX + 0x12) = 0x100;
    if ((char)param_3 == '\0') {
      param_3 = (undefined4 *)CONCAT31(param_3._1_3_,0x2b);
      iVar3 = FUN_005484e0();
      *(bool *)(in_ECX + 0x30) = iVar3 != -1;
      FUN_00409350();
      local_8 = 2;
      pcVar1 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar1 = *(char **)pcVar1;
      }
      pcVar4 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar4 = *(char **)param_1;
      }
      pFVar2 = _fopen(pcVar4,pcVar1);
      *(FILE **)(in_ECX + 0x34) = pFVar2;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_009dc260();
      FUN_00409350();
      local_8 = 1;
      pcVar1 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar1 = *(char **)pcVar1;
      }
      pcVar4 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar4 = *(char **)param_1;
      }
      pFVar2 = _fopen(pcVar4,pcVar1);
      *(FILE **)(in_ECX + 0x34) = pFVar2;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    if (*(int *)(in_ECX + 0x34) == 0) {
      local_18 = 0xf;
      local_1c = 0;
      FUN_00409350();
      param_3 = &uStack_f8;
      local_8 = 3;
      FUN_00988fa0(param_1);
      FUN_009d77e0(0x3d,local_2c);
      local_8 = 4;
      FUN_00408ed0();
      local_8 = 5;
      FUN_00408ed0();
      _local_8 = CONCAT31(uStack_7,4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
  }
  else if (param_2 == 1) {
    *(char *)(in_ECX + 0x11) = (char)param_3;
    *(undefined2 *)(in_ECX + 0x12) = 0;
    if ((char)param_3 == '\0') {
      iVar3 = FUN_005484e0();
      *(bool *)(in_ECX + 0x30) = iVar3 != -1;
      FUN_00409350();
      local_8 = 7;
      pcVar1 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar1 = *(char **)pcVar1;
      }
      pcVar4 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar4 = *(char **)param_1;
      }
      pFVar2 = _fopen(pcVar4,pcVar1);
      *(FILE **)(in_ECX + 0x34) = pFVar2;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_009dc260();
      FUN_00409350();
      local_8 = 6;
      pcVar1 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar1 = *(char **)pcVar1;
      }
      pcVar4 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar4 = *(char **)param_1;
      }
      pFVar2 = _fopen(pcVar4,pcVar1);
      *(FILE **)(in_ECX + 0x34) = pFVar2;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    if (*(int *)(in_ECX + 0x34) == 0) {
      local_18 = 0xf;
      local_1c = 0;
      FUN_00409350();
      param_3 = &uStack_f8;
      local_8 = 8;
      FUN_00988fa0(param_1);
      FUN_009d77e0(0x53,local_2c);
      _local_8 = CONCAT31(uStack_7,9);
      FUN_00a70110();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    if ((char)param_3 == '\0') {
      *(undefined1 *)(in_ECX + 0xc) = 0;
    }
  }
  else if (param_2 == 2) {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    *(char *)(in_ECX + 0x11) = (char)param_3;
    *(undefined2 *)(in_ECX + 0x12) = 1;
    *(undefined4 *)(in_ECX + 0x34) = 0;
    if ((char)param_3 == '\0') {
      FUN_00989b00();
      FUN_00408ad0();
    }
    else {
      FUN_009dc260();
      pcVar1 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pcVar1 = *(char **)param_1;
      }
      pFVar2 = _fopen(pcVar1,"wb");
      *(FILE **)(in_ECX + 0x34) = pFVar2;
      param_3 = (undefined4 *)0xfffe;
      uStack_f8 = 0x9db41b;
      _fwrite(&param_3,2,1,pFVar2);
      if (*(int *)(in_ECX + 0x34) == 0) {
        FUN_009885d0();
        param_3 = &uStack_f8;
        local_8 = 10;
        FUN_00988fa0(param_1);
        FUN_009d77e0(0x79,local_2c);
        _local_8 = CONCAT31(uStack_7,0xb);
        FUN_00a70110();
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
    }
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

