// FUN_00b0faa0 @ 00b0faa0 body=[[00b0faa0, 00b0fb9e]]


uint FUN_00b0faa0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  void *local_18;
  size_t local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b397cf;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  uVar4 = *(uint *)(in_ECX + 8);
  uVar6 = 0;
  if (uVar4 != 0) {
    iVar5 = *(int *)(in_ECX + 4);
    do {
      cVar1 = FUN_00b0f320(iVar5,param_1,uVar2);
      if (cVar1 != '\0') {
        if (uVar6 != 0xffffffff) {
          ExceptionList = local_c;
          return uVar6;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar6 < uVar4);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar3 - (int)(param_1 + 1),0);
    if (local_18 != (void *)0x0) {
      FID_conflict__memcpy(local_18,param_1,local_14);
    }
  }
  iVar5 = *(int *)(in_ECX + 8);
  uVar4 = iVar5 + 1;
  local_4 = 0;
  *(uint *)(in_ECX + 8) = uVar4;
  if (*(uint *)(in_ECX + 0xc) < uVar4) {
    FUN_00adfdb0(iVar5 + 2);
  }
  FUN_00b0b790(*(int *)(in_ECX + 8) + -1,&local_18);
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return *(int *)(in_ECX + 8) - 1;
}

