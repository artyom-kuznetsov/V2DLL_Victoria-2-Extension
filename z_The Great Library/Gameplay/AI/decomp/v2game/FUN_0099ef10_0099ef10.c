// FUN_0099ef10 @ 0099ef10 body=[[0099ef10, 0099efa5]]


void FUN_0099ef10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f64b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *unaff_ESI = &PTR_FUN_00e38528;
  unaff_ESI[1] = 1;
  *(undefined2 *)(unaff_ESI + 3) = 0x100;
  iVar1 = FUN_00aae9af();
  local_8 = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    uVar2 = FUN_009dae60(iVar1,param_1,1,1);
  }
  unaff_ESI[2] = uVar2;
  ExceptionList = local_10;
  return;
}

