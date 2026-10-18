// FUN_00508330 @ 00508330 body=[[00508330, 00508414] [00508418, 00508523]]


void FUN_00508330(int param_1)

{
  int iVar1;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  void *_Dst;
  int iVar5;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f8e3;
  local_18 = *(int **)(param_1 + 0x7b4);
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (local_18 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = *local_18;
    local_18 = (int *)local_18[2];
    if (DAT_0125fdd8 == (int *)0x0) {
      piVar4 = (int *)FUN_00aae9af();
      local_8 = 0;
      local_14 = piVar4;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4[1] = 0x1ff;
        *piVar4 = 0;
        _Dst = (void *)FUN_00aad56b();
        piVar4[2] = (int)_Dst;
        _memset(_Dst,0,piVar4[1] * 4);
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
      }
      local_8 = 1;
      local_1c = 0;
      if ((piVar4 != DAT_0125fdd8) && (local_14 = DAT_0125fdd8, DAT_0125fdd8 != (int *)0x0)) {
        FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      DAT_0125fdd8 = piVar4;
    }
    iVar5 = FUN_005c2ad0();
    if (iVar5 != 0) {
      FUN_005bd130();
    }
    piVar4 = *(int **)(iVar1 + 0x38);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)*piVar4;
      local_14 = (int *)piVar4[2];
      piVar4 = (int *)(**(code **)(*piVar2 + 0x30))(local_20);
      if (*piVar4 < piVar2[0xf]) {
        piVar4 = (int *)(**(code **)(*piVar2 + 0x30))(local_24);
        piVar2[0xf] = *piVar4;
      }
      if ((*(int *)(piVar2[0xe] + 0xb4) < piVar2[0x10]) && (DAT_00f09547 != '\0')) {
        piVar2[0x10] = *(int *)(piVar2[0xe] + 0xb4);
      }
      iVar5 = *(int *)(*(int *)(iVar1 + 0xa4) + 0xb8);
      FUN_005bd930();
      piVar4 = local_14;
      if ((*(int *)(piVar2[0xe] + 0xb8) < iVar5) || (iVar5 == 0)) {
        *(int *)(*(int *)(iVar1 + 0xa4) + 0xb8) = *(int *)(piVar2[0xe] + 0xb8);
      }
      else {
        *(int *)(*(int *)(iVar1 + 0xa4) + 0xb8) = iVar5;
      }
    }
    ppvVar3 = ExceptionList;
    if (*(int *)(iVar1 + 0x40) != 0) {
      FUN_005bdbd0();
      ppvVar3 = ExceptionList;
    }
  } while( true );
}

