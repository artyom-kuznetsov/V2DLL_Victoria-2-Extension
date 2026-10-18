// FUN_00427a70 @ 00427a70 body=[[00427a70, 00427b6b]]


void FUN_00427a70(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)param_1;
  puStack_c = &LAB_00b4d923;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(unaff_EDI + 0x5c) = *in_ECX;
  *(undefined4 *)(unaff_EDI + 0x60) = in_ECX[1];
  *(bool *)(unaff_EDI + 100) = *(int *)((int)param_1 + 4) == *(int *)(unaff_EDI + 0x18);
  local_8 = 0;
  iVar3 = FUN_00aae9af(0x40);
  local_8._0_1_ = 1;
  if (iVar3 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    uVar4 = FUN_00424c10();
    param_1 = (int *)FUN_0090f620(iVar3,uVar4);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  cVar2 = (**(code **)(*param_1 + 0x38))();
  if (cVar2 == '\0') {
    FUN_00427b70(in_ECX,iVar1,0);
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  (**(code **)*param_1)(1);
  ExceptionList = local_10;
  return;
}

