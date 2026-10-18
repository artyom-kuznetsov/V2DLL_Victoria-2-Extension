// FUN_0081ec90 @ 0081ec90 body=[[0081ec90, 0081eda2]]


void FUN_0081ec90(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined8 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_008204c0(in_ECX);
  iVar2 = FUN_0081eab0(in_ECX,param_1,uVar1);
  iVar3 = FUN_0081eab0(in_ECX,param_1,0xffffffff);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar3 + 0x244);
    if (iVar3 + 0x189373U < 0x39580e) {
      iVar3 = (iVar3 * 1000) / 2000;
    }
    else {
      uVar5 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
      iVar3 = __alldiv(uVar5,2000,0);
    }
    if (iVar3 <= *(int *)(iVar2 + 0x244)) {
      iVar3 = FUN_008205c0(in_ECX,iVar2);
      if (iVar3 != 0) {
        iVar4 = FUN_00aae9af(0x68);
        local_8 = 0;
        if (iVar4 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_0057d1b0(iVar4,iVar2,*(undefined4 *)(iVar3 + 0x58),0,
                               *(undefined4 *)(in_ECX + 0x30),*(undefined4 *)(in_ECX + 0x34));
        }
        local_8 = 0xffffffff;
        iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

