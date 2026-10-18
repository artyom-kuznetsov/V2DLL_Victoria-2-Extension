// FUN_00b0ac80 @ 00b0ac80 body=[[00b0ac80, 00b0adce]]


int FUN_00b0ac80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *local_24 [3];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39273;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd4;
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    return 0;
  }
  ExceptionList = &local_c;
  FUN_00b0aae0(local_24,param_1);
  local_4 = iVar4;
  FUN_00b14e30(local_18);
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_00b147b0(&DAT_00ddfe90);
  if (cVar1 == '\0') {
    cVar1 = FUN_00b147b0(&DAT_00ddfe8c);
    if (cVar1 == '\0') {
      puVar5 = (undefined4 *)FUN_00b0a7e0(uVar2);
      puVar3 = (undefined1 *)*puVar5;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00ded94d;
      }
      if (local_24[0] == (undefined1 *)0x0) {
        local_24[0] = &DAT_00ded94d;
      }
      FUN_00b15da0("MotionSet - Loading motion \'%s\' (id=%s) failed as the file extension isn\'t known."
                   ,local_24[0],puVar3);
      *(undefined1 *)(param_1 + 0x14) = 1;
      iVar4 = 0;
      goto LAB_00b0ad97;
    }
    puVar3 = local_24[0];
    if (local_24[0] == (undefined1 *)0x0) {
      puVar3 = &DAT_00ded94d;
    }
    iVar4 = FUN_00adc690(puVar3,0);
  }
  else {
    puVar3 = local_24[0];
    if (local_24[0] == (undefined1 *)0x0) {
      puVar3 = &DAT_00ded94d;
    }
    iVar4 = FUN_00adc4b0(puVar3,0);
  }
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    if (local_24[0] == (undefined1 *)0x0) {
      local_24[0] = &DAT_00ded94d;
    }
    FUN_00b072b0(local_24[0]);
  }
LAB_00b0ad97:
  *(int *)(param_1 + 0xc) = iVar4;
  local_4 = local_4 & 0xffffff00;
  FUN_00b13650();
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return iVar4;
}

