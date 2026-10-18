// FUN_00996910 @ 00996910 body=[[00996910, 00996a08]]


undefined4
FUN_00996910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0x378);
  uVar4 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar4 = FUN_009ae230(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9);
  }
  local_8 = 0xffffffff;
  iVar2 = *(int *)(unaff_ESI + 0x10c);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = uVar4;
    puVar3[1] = iVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0x110);
  *(undefined4 **)(unaff_ESI + 0x10c) = puVar3;
  *(int *)(unaff_ESI + 0x110) = iVar1 + 1;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar2 + 8) = puVar3;
    ExceptionList = local_10;
    return **(undefined4 **)(unaff_ESI + 0x10c);
  }
  *(undefined4 **)(unaff_ESI + 0x108) = puVar3;
  ExceptionList = local_10;
  return *puVar3;
}

