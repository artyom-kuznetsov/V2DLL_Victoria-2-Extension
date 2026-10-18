// FUN_00b00d20 @ 00b00d20 body=[[00b00d20, 00b00e02]]


void FUN_00b00d20(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  void *local_28;
  size_t local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38ce0;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar4 - (int)(param_2 + 1),0);
    if (local_28 != (void *)0x0) {
      FID_conflict__memcpy(local_28,param_2,local_24);
    }
  }
  local_4 = 0;
  uVar5 = FUN_00b004c0(param_1,&local_28);
  iVar2 = *(int *)(in_ECX + 0xc);
  uVar6 = iVar2 + 1;
  local_4._0_1_ = 1;
  *(uint *)(in_ECX + 0xc) = uVar6;
  if (*(uint *)(in_ECX + 0x10) < uVar6) {
    FUN_00b0d550(iVar2 + 2);
  }
  FUN_00b009a0(*(int *)(in_ECX + 0xc) + -1,uVar5);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00b13650(uVar3);
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

