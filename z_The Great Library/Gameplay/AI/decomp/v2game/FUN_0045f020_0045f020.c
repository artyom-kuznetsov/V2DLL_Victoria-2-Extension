// FUN_0045f020 @ 0045f020 body=[[0045f020, 0045f0af] [0045f0b3, 0045f0c3]]


void FUN_0045f020(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d463;
  local_10 = ExceptionList;
  if (param_2 == 0xa51) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x7c);
    piVar3 = (int *)0x0;
    local_8 = 0;
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_0045ed20(iVar1);
    }
    local_8 = 0xffffffff;
    (**(code **)(*piVar3 + 0xc))(param_1);
    uVar2 = FUN_0045e130(piVar3);
    local_8 = 1;
    FUN_00461fc0(uVar2);
    FUN_0068f390();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}

