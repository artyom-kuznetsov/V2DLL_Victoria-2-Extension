// FUN_00a14770 @ 00a14770 body=[[00a14770, 00a1485a]]


void FUN_00a14770(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  float fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0x2c))();
  if (cVar1 == '\0') {
    iVar2 = *param_1;
    FUN_009d7490(in_ECX[0x11],iVar2,(param_1[1] - iVar2) + iVar2,param_1);
    in_ECX[0x20] = in_ECX[0x20] + 1;
    if (in_ECX[0xe] != 0) {
      (**(code **)(*in_ECX + 0x28))();
    }
    iVar2 = FUN_00aae9af(0x48);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      if (in_ECX[0x1f] < 1) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)in_ECX[0x20] / (float)in_ECX[0x1f];
      }
      uVar3 = FUN_00a13d50(iVar2,*(undefined4 *)(in_ECX[0x23] + 0x6c),fVar4,0);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(in_ECX[0x23] + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

