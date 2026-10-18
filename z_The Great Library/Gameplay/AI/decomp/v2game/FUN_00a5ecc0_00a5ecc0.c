// FUN_00a5ecc0 @ 00a5ecc0 body=[[00a5ecc0, 00a5eda9] [00a5edad, 00a5edbd]]


void FUN_00a5ecc0(undefined4 param_1,char param_2)

{
  int iVar1;
  int unaff_ESI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  iVar1 = unaff_ESI + 0x150;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  if ((*(int *)(unaff_ESI + 0x160) != 0) && (*(char *)(unaff_ESI + 0x1b8) != '\0')) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(iVar1,0,0xffffffff);
    local_8 = 0;
    local_18 = *(undefined4 *)(unaff_ESI + 0x198);
    local_14 = *(undefined4 *)(unaff_ESI + 0x19c);
    if (param_2 == '\0') {
      (**(code **)(**(int **)(unaff_ESI + 0x1bc) + 0x30))
                (iVar1,local_34,*(undefined4 *)(unaff_ESI + 0x1a0),
                 *(undefined4 *)(unaff_ESI + 0x1a4),&local_18);
    }
    else {
      (**(code **)(**(int **)(unaff_ESI + 0x1bc) + 0x38))
                (iVar1,local_34,*(undefined4 *)(unaff_ESI + 0x1a0),
                 *(undefined4 *)(unaff_ESI + 0x1a4),&local_18,0,0);
    }
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

