// FUN_00904420 @ 00904420 body=[[00904420, 00904496] [0090449a, 009044c3]]


uint FUN_00904420(void *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pvVar2 = ExceptionList;
  if (*(char *)(in_ECX + 0x40) != '\0') {
    iVar1 = *(int *)((int)param_1 + 0x28);
    pvVar2 = param_1;
    if (iVar1 != 0) {
      ExceptionList = &local_10;
      pvVar2 = (void *)FUN_00464d50(*(undefined4 *)(in_ECX + 0x20));
      if ((char)pvVar2 != '\0') {
        FUN_00464d90(iVar1);
        local_8 = 0;
        uVar3 = FUN_00416db0();
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c);
        }
        ExceptionList = local_10;
        return uVar3;
      }
    }
  }
  ExceptionList = local_10;
  return (uint)pvVar2 & 0xffffff00;
}

