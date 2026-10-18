// FUN_00467350 @ 00467350 body=[[00467350, 004673f9] [004673fd, 0046741d] [00467421, 0046743f] [00467443, 00467455]]


undefined1 FUN_00467350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 local_68;
  uint local_54;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b405aa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004672d0(param_1);
  local_8 = 0;
  FUN_0045e4e0(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = false;
  cVar2 = FUN_00416db0();
  if (cVar2 != '\0') {
    FUN_0045e4e0(param_3);
    local_8 = 2;
    bVar1 = true;
    cVar2 = FUN_00416db0();
    param_1._3_1_ = 1;
    if (cVar2 != '\0') goto LAB_004673dc;
  }
  param_1._3_1_ = 0;
LAB_004673dc:
  if ((bVar1) && (0xf < local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  ExceptionList = local_10;
  return param_1._3_1_;
}

