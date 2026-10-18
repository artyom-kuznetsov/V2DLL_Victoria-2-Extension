// FUN_00457e50 @ 00457e50 body=[[00457e50, 00457f18] [00457f2e, 00458021]]


void FUN_00457e50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51dde;
  local_10 = ExceptionList;
  if (param_2 < 0x9d5) {
    if (param_2 == 0x9d4) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af();
      local_8 = 0;
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00464480();
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar2 + 0xc))();
      FUN_0068f390();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2a1) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 2;
      ExceptionList = &local_10;
      FUN_009a1750();
      FUN_00408ed0(local_2c,0,0xffffffff);
      FUN_0043bb10();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else if (param_2 == 0x40d) {
      ExceptionList = &local_10;
      FUN_0045be80();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_2 == 0x9d5) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    local_8 = 1;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_0045b020();
    }
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0xc))();
    FUN_0068f390();
  }
  else if (param_2 == 0x9d9) {
    ExceptionList = &local_10;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
    if (iVar1 == 0) {
      FUN_009a1140();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

