// FUN_005813c0 @ 005813c0 body=[[005813c0, 0058146f]]


void FUN_005813c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0125eadc == 0) {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_00aae9af(0x9c);
    local_c = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00576fe0(iVar2);
    }
    local_c = 0xffffffff;
    FUN_0057ab10(uVar3);
  }
  piVar4 = (int *)FUN_005661b0(in_ECX + 0x44);
  cVar1 = (**(code **)(*piVar4 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00502090(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4),piVar4,0)
    ;
  }
  ExceptionList = pvStack_14;
  return;
}

