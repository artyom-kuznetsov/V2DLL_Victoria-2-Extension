// FUN_0061b730 @ 0061b730 body=[[0061b730, 0061b7ae] [0061b7b2, 0061b7d1] [0061b7d5, 0061b810]]


undefined4 FUN_0061b730(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 unaff_EDI;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_0061b290(param_1,in_ECX);
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 1;
  }
  cVar1 = FUN_0061b290(param_1,unaff_EDI);
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 0;
  }
  FUN_004f97a0();
  local_8 = 0;
  FUN_004f97a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_0098ab20();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  ExceptionList = local_10;
  return uVar2;
}

