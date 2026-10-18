// FUN_0095f9b0 @ 0095f9b0 body=[[0095f9b0, 0095fb1e] [0095fb22, 0095fb93] [0095fb97, 0095fbd3] [0095fbd7, 0095fbea]]


void FUN_0095f9b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *unaff_EDI;
  undefined1 local_84 [40];
  uint local_5c;
  undefined4 local_54;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2a42;
  local_10 = ExceptionList;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return;
  }
  iVar2 = *(int *)(param_1 + 100);
  ExceptionList = &local_10;
  if (0 < *(int *)(*(int *)(iVar2 + 0x188) + 0x84)) {
    ExceptionList = &local_10;
    cVar1 = FUN_004b8c00();
    if (cVar1 != '\0') goto LAB_0095fa27;
  }
  local_54 = *(undefined4 *)(iVar2 + 0x128);
  if (*(int *)(param_1 + 0x6c) !=
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 300) * 4) + 0xe64)) {
    if (*(char *)(*(int *)(param_1 + 0x68) + 0x3d9) != '\0') {
      FUN_009885d0();
      ExceptionList = local_10;
      return;
    }
    FUN_009885d0();
    local_8 = 0;
    FUN_009a8ee0(local_84,local_30);
    local_8._0_1_ = 1;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 3;
    FUN_009a9740();
    local_8._0_1_ = 4;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00448740(&DAT_00dee2cc,1);
    FUN_008a8650();
    FUN_008aed50();
    local_8._0_1_ = 5;
    FUN_00448aa0();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740(&DAT_00dee2cc,1);
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00408ed0();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return;
  }
LAB_0095fa27:
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return;
}

