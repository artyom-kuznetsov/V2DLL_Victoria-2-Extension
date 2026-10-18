// FUN_004f6990 @ 004f6990 body=[[004f6990, 004f6a0a]]


void FUN_004f6990(int param_1)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int *unaff_EDI;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45d98;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  ppvVar3 = &local_10;
  iVar2 = *unaff_EDI;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    ppvVar3 = ExceptionList;
    iVar2 = iVar1;
  }
  local_14 = unaff_EDI[4];
  local_8 = 0;
  FUN_004e94a0(&local_24);
  *(int *)(param_1 + 0x58) = local_14;
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

