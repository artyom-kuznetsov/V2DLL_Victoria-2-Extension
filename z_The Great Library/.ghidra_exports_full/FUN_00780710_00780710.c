// FUN_00780710 @ 00780710 body=[[00780710, 007807df] [007807f6, 0078084a] [0078084e, 00780882]]


void FUN_00780710(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b43af8;
  local_14 = ExceptionList;
  iVar3 = *(int *)(unaff_EDI + 0xab0);
  if (iVar3 == 0) {
LAB_007807f6:
    ExceptionList = &local_14;
    uVar2 = FUN_0077d4a0();
    FUN_0072d4e0(&local_40,uVar2);
    local_c = 3;
    *(undefined4 *)(unaff_EDI + 0xab8) = local_40;
    *(undefined4 *)(unaff_EDI + 0xabc) = local_3c;
    *(undefined4 *)(unaff_EDI + 0xac0) = local_38;
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    iVar3 = FUN_00967f50();
    if (iVar3 != 0) {
      cVar1 = *(char *)(param_1 + 0x68);
      *(undefined1 *)(unaff_EDI + 0xab4) = 1;
      *(uint *)(unaff_EDI + 0xab0) = (cVar1 == '\0') + 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x174) == '\0') {
      if (*(char *)(param_1 + 0x68) != '\0') {
        if (iVar3 == 2) goto LAB_0078076a;
        if (*(char *)(param_1 + 0x68) != '\0') goto LAB_007807f6;
      }
      if (iVar3 != 1) goto LAB_007807f6;
    }
LAB_0078076a:
    ExceptionList = &local_14;
    *(undefined4 *)(unaff_EDI + 0xab0) = 0;
    *(undefined1 *)(unaff_EDI + 0xab4) = 1;
    uVar2 = DAT_01268ff0;
    local_40 = 0;
    local_3c = DAT_01268fec;
    local_38 = DAT_01268ff0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_c = 2;
    *(undefined4 *)(unaff_EDI + 0xabc) = DAT_01268fec;
    *(undefined4 *)(unaff_EDI + 0xac0) = uVar2;
    *(undefined4 *)(unaff_EDI + 0xab8) = 0;
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

