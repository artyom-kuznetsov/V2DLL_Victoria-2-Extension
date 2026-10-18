// FUN_00ad7b60 @ 00ad7b60 body=[[00ad7b60, 00ad7c6e]]


void FUN_00ad7b60(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  void *_Src;
  int local_6c [3];
  undefined2 local_60;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b37143;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffff84;
  ExceptionList = &local_c;
  iVar3 = 0;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 1;
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_60 = 1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00ad61b0(local_6c);
  FUN_00ad6210(local_6c,&local_5c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_6c[0] != 0) {
    (*(code *)PTR__free_00f01b10)(local_6c[0],uVar2);
  }
  iVar1 = *(int *)(in_ECX + 0x84);
  _Src = local_5c;
  if (0 < iVar1) {
    do {
      FID_conflict__memcpy(local_4c,_Src,0x40);
      FUN_00ad29c0();
      FUN_00ae8f50(param_1,local_4c);
      iVar3 = iVar3 + 1;
      _Src = (void *)((int)_Src + 0x40);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  if (local_5c != (void *)0x0) {
    (*(code *)PTR__free_00f01b10)(local_5c);
  }
  ExceptionList = local_c;
  return;
}

