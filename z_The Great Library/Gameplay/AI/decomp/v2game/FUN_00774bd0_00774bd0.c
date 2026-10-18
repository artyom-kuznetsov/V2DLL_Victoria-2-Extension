// FUN_00774bd0 @ 00774bd0 body=[[00774bd0, 00774d5d]]


void FUN_00774bd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b7f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar3 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  DAT_00f20c14 = 0;
  local_1c = (undefined4)(longlong)ROUND((double)fVar3);
  DAT_00f20c1c = local_1c;
  iVar1 = FUN_00aae9af(0x44);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    uVar2 = FUN_0072cb40(iVar1,DAT_00f20c1c,DAT_00f20c14);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  iVar1 = FUN_00aae9af(0x3c);
  local_8 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072a7b0(iVar1);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

